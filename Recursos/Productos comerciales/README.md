# Estado de la Tecnología: Dispositivos Comerciales de Monitoreo UV

Este documento presenta el análisis del estado del arte de las tecnologías comerciales existentes para el monitoreo de radiación ultravioleta (UV), elaborado por el **Equipo 4**. El objetivo es identificar las funciones clave, limitaciones técnicas y los aportes de estas soluciones para fundamentar la viabilidad y pertinencia de nuestra propuesta tecnológica orientada al contexto peruano.

---

## 📋 Resumen Comparativo

| Producto | Fabricante | Tecnología de Sensores | Conectividad / App | Limitación Principal |
| :--- | :--- | :--- | :--- | :--- |
| **SunFriend Personal UV Monitor** | SunFriend Corp. | Fotodiodos GaN (UVA/UVB directo) | Sin conectividad (Interfaz LED). Sin App. | Sin historial de datos; requiere configuración manual; imprecisión por posición. |
| **QSun - Wearable UV Tracker** | Habqi Inc. | Silicio (UVA/UVB) + MEMS (Temp/Humedad) + Acelerómetro | Bluetooth Low Energy (BLE). App iOS/Android. | Dependencia total del smartphone; baja autonomía (1-2 días); riesgo de obstrucción. |

---

## 1. SunFriend Personal UV Monitor

### 🔍 Descripción del Producto
El **SunFriend Personal UV Monitor** es un dispositivo ponible de lectura directa diseñado como un monitor de actividad personalizable. Su propósito es ayudar a los usuarios a controlar la exposición diaria al sol para optimizar la producción de vitamina D y prevenir el daño celular o el cáncer de piel. No utiliza pantallas digitales, sino un dial circular rodeado de 11 indicadores LED que acumulan la dosis de radiación recibida a lo largo del día en base a un nivel de sensibilidad cutánea programado manualmente (escala del 1 al 11).

*   **Tecnología de Sensores:** Utiliza fotodiodos semiconductores de nitruro de galio (GaN), los cuales miden directamente la radiación UVA y UVB sin degradarse con el tiempo, evitando el uso de filtros químicos.
*   **Conectividad y Ecosistema:** Carece por completo de conectividad inalámbrica. Es un dispositivo autónomo que muestra la información en tiempo real mediante LEDs y no es compatible con aplicaciones móviles.
*   **Especificaciones Físicas y Costo:** Es un dispositivo impermeable (hasta 3 metros de profundidad), con un peso de 1.41 onzas. Actualmente se encuentra descatalogado por el fabricante, pero se comercializa en plataformas de segunda mano entre $25.00 y $50.00 USD.

### ⚠️ Limitaciones Identificadas
*   **Configuración Manual Crítica:** El usuario debe ingresar manualmente su nivel de sensibilidad en base a sus características físicas (color de ojos, cabello y piel). Un error en esta selección (por ejemplo, definir una sensibilidad muy alta para una piel clara) anula la seguridad de las alertas e incrementa el riesgo de quemaduras.
*   **Ausencia de Memoria:** Al no poseer conectividad ni almacenamiento interno a largo plazo, los datos acumulados se borran por completo al apagar o reiniciar el dispositivo, impidiendo un seguimiento del historial semanal o mensual.
*   **Sensibilidad a la Orientación:** La precisión de la lectura depende estrictamente de que el dispositivo esté orientado hacia arriba y libre de obstáculos (como ropa o sombras corporales).

### 💡 Aporte al Proyecto del Equipo 4
*   **Validación de la Medición Directa (GaN):** Demuestra el éxito técnico de utilizar fotodiodos semiconductores para una captura selectiva de rayos UVA/UVB sin dependencia de filtros químicos propensos a la degradación.
*   **Concientización del Equilibrio UV/Vitamina D:** Aporta el enfoque de diseño centrado no solo en la protección (evitar el enrojecimiento), sino en la ventana saludable de exposición para la síntesis de Vitamina D.
*   **Línea Base de Usabilidad:** Sirve como contraejemplo para justificar la necesidad de automatizar la captura de datos y ofrecer una interfaz que no dependa de configuraciones manuales complejas para el usuario promedio en el Perú.

---

## 2. QSun - Wearable UV Tracker

### 🔍 Descripción del Producto
El **QSun** es un dispositivo ponible inteligente y compacto (wearable) respaldado por un algoritmo de inteligencia artificial que monitorea y analiza la exposición solar en tiempo real. Está diseñado para engancharse de manera versátil en la ropa, mochilas o coches de bebé mediante un clip o un colgante. Su objetivo principal es calcular el tiempo seguro bajo el sol y enviar notificaciones proactivas antes de que ocurra una quemadura cutánea.

*   **Tecnología de Sensores:** Incorpora un sensor de alta precisión para radiación UVA/UVB basado en tecnología de silicio. Adicionalmente, incluye sensores MEMS para medir la temperatura y humedad ambiental, así como un acelerómetro para identificar el movimiento del usuario.
*   **Conectividad y Ecosistema:** Cuenta con Bluetooth Low Energy (BLE) para sincronizarse inalámbricamente con su aplicación dedicada (disponible en iOS y Android). La app permite escanear códigos de barras de protectores solares para verificar sus propiedades y combina el índice UV local con las características del usuario para dar recomendaciones personalizadas.
*   **Costo:** Su precio en el mercado se sitúa entre los $59.00 USD y $80.00 USD.

### ⚠️ Limitaciones Identificadas
*   **Alta Dependencia del Smartphone:** Aunque el dispositivo puede registrar datos de forma aislada, gran parte de sus funciones inteligentes y el procesamiento preciso de la ubicación requieren que el teléfono esté a corta distancia mediante la conexión Bluetooth.
*   **Baja Autonomía Energética:** Debido al flujo constante de sincronización por Bluetooth y el procesamiento de múltiples sensores, la batería requiere recargas constantes (cada 1 o 2 días), reduciendo la comodidad de uso diario.
*   **Vulnerabilidad ante Obstrucciones:** Si el sensor queda cubierto accidentalmente por la vestimenta o se sitúa en una zona de sombra del propio cuerpo, genera falsas lecturas de radiación baja, emitiendo recomendaciones de salud erróneas y peligrosas.
*   **Inmantenibilidad:** Al ser un hardware sellado y compacto, no admite reparaciones modulares; cualquier falla en un sensor inutiliza por completo el dispositivo.

### 💡 Aporte al Proyecto del Equipo 4
*   **Integración Multisensorial:** Valida la inclusión de variables ambientales complementarias (temperatura y humedad vía MEMS) junto al índice UV para robustecer los algoritmos de salud preventiva.
*   **Modelado de Algoritmos Inteligentes:** Establece un precedente sobre cómo combinar factores externos (índice UV del entorno) con factores internos (tipo de piel y hábitos) para generar alertas en tiempo real a través de aplicaciones móviles.
*   **Identificación de Brechas de Conectividad (Oportunidad ESP32):** El análisis de la dependencia de QSun al Bluetooth resalta una brecha técnica. Nuestra propuesta puede superar esto evaluando el uso de tecnologías como el **ESP32** para habilitar Wi-Fi directo u otros mecanismos de transmisión, mitigando la desconexión frecuente y mejorando la gestión energética.