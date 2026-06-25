#include "DHT.h"
#include <WiFi.h>
#include <HTTPClient.h> // Cambiamos WebServer por HTTPClient

// --- Configuración de Red ---
const char* ssid = "GhostProtocol";
const char* password = "guel3645";

// --- Configuración del Backend (PocketBase) ---
// Reemplaza con la URL pública que generaste en Railway
const char* serverUrl = "https://usingpocketbasev1-production.up.railway.app/api/collections/environment_data/records";

// --- Configuración de Sensores ---
#define DHTPIN 15
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const int UV_PIN = 34;

float leerVoltajeUV() {
  const int muestras = 100;
  long suma = 0;

  for (int i = 0; i < muestras; i++) {
    suma += analogRead(UV_PIN);
    delay(2);
  }

  float promedioADC = suma / (float)muestras;
  float voltaje = (promedioADC / 4095.0) * 3.3;

  return voltaje;
}

void enviarDatosAlBackend() {
  // 1. Verificar conexión WiFi antes de proceder
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("Sin conexión WiFi. Intentando reconectar...");
    WiFi.disconnect();
    WiFi.begin(ssid, password);
    return;
  }

  // 2. Leer las variables de los sensores
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();
  float voltajeUV = leerVoltajeUV();
  float uvIndex = voltajeUV / 0.1;

  if (uvIndex < 0) {
    uvIndex = 0;
  }

  Serial.println("\n=== Nuevas lecturas de EcoAlerta ===");
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("¡Error crítico: No se pudo leer el sensor DHT11!");
    return; // Cancelamos el envío si no hay datos válidos del DHT
  }

  // Mostrar lecturas en el monitor serie
  Serial.print("Temperatura: ");
  Serial.print(temperatura, 1);
  Serial.println(" °C");
  
  Serial.print("Humedad: ");
  Serial.print(humedad, 1);
  Serial.println(" %");
  
  Serial.print("Voltaje UV: ");
  Serial.print(voltajeUV, 2);
  Serial.println(" V");
  
  Serial.print("Índice UV: ");
  Serial.println(uvIndex, 1);

  // 3. Construir el JSON con los campos exactos de PocketBase
  String json = "{";
  json += "\"temperature\":" + String(temperatura, 1) + ",";
  json += "\"humidity\":" + String(humedad, 1) + ",";
  json += "\"uv_radiation\":" + String(uvIndex, 1);
  json += "}";

  // 4. Inicializar el cliente HTTP y realizar el POST
  HTTPClient http;
  http.begin(serverUrl);
  http.addHeader("Content-Type", "application/json");

  Serial.println("Enviando datos a PocketBase...");
  int httpResponseCode = http.POST(json);

  // 5. Manejo de errores y respuestas del servidor
  if (httpResponseCode > 0) {
    Serial.print("Respuesta del servidor (Código HTTP): ");
    Serial.println(httpResponseCode);
    if (httpResponseCode == 200 || httpResponseCode == 201) {
      Serial.println("¡Datos guardados exitosamente!");
    } else {
      Serial.println("Error: Verifica que las API Rules de la colección sean públicas.");
    }
  } else {
    Serial.print("Fallo en la conexión HTTP. Código de error: ");
    Serial.println(http.errorToString(httpResponseCode).c_str());
  }

  http.end(); // Liberar recursos
  Serial.println("====================================");
}

void setup() {
  Serial.begin(115200);
  dht.begin();

  Serial.print("Conectando a WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi conectado con éxito");
  Serial.print("IP asignada: ");
  Serial.println(WiFi.localIP());
  
  // Realizar un envío inicial inmediatamente al encender el dispositivo
  enviarDatosAlBackend();
}

void loop() {
  // Frecuencia de envío recomendada: Cada 5 minutos (300000 milisegundos)
  // Esto evita saturar el backend gratuito y es más que suficiente para monitoreo ambiental
  delay(10000);
  enviarDatosAlBackend();
}