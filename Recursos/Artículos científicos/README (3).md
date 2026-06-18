# 🔬 Artículos científicos — Estado del Arte | Proyecto EcoAlerta

> **Equipo 04** · Revisión de literatura científica sobre arquitecturas IoT ambientales y dispositivos wearables, como respaldo técnico y académico de la propuesta EcoAlerta.

---

## 📋 Tabla comparativa

| Artículo | Autores / Año | Revista | Enfoque | Hallazgo clave |
|---|---|---|---|---|
| IoT-based indoor environmental monitoring system using multi-parameter sensing and ESP32-WROOM integration | Bakare & Abubaker, 2026 | Discover Electronics | Sistema IoT multiparamétrico con ESP32 | Error <2%, correlación >0.98, latencia 215–310 ms vía MQTT |
| Wearable Devices for Environmental Monitoring in the Built Environment: A Systematic Review | Salamone, Masullo & Sibilio, 2021 | Sensors (MDPI) | Revisión sistemática de wearables ambientales | Validación consolidada de sensores + comunicación inalámbrica para salud preventiva |

---

## 1. IoT-based indoor environmental monitoring system using multi-parameter sensing and ESP32-WROOM integration

**Autores:** Mutiu Shola Bakare y Kazibwe Abubaker &nbsp;|&nbsp; **Año:** 2026 &nbsp;|&nbsp; **Revista:** Discover Electronics

### Descripción
Desarrolla un sistema IoT basado en ESP32 capaz de medir simultáneamente temperatura, humedad, iluminación y calidad del aire. El sistema utiliza el protocolo MQTT para transmitir datos en tiempo real a la nube, logrando baja latencia (aproximadamente 215–310 ms). Implementa una arquitectura escalable con procesamiento tanto en la nube como en el propio dispositivo (edge computing), y reporta errores de medición menores al 2% con coeficientes de correlación superiores a 0.98.

### Aporte para EcoAlerta
Este artículo es uno de los respaldos técnicos más sólidos del proyecto: **valida directamente el uso del ESP32** como núcleo de sistemas IoT ambientales, exactamente la arquitectura que el equipo propone. Demuestra además que es viable integrar múltiples sensores y transmitir datos en tiempo real hacia plataformas digitales con alta precisión y baja latencia, reforzando la idea de **convertir datos ambientales en información útil y procesable** para el usuario — el objetivo central de EcoAlerta de generar recomendaciones personalizadas. También evidencia que estos sistemas pueden ser económicos, energéticamente eficientes y escalables, lo cual respalda la factibilidad técnica y financiera del prototipo.

**Hallazgos aplicables al proyecto:**
- ESP32 validado como núcleo de sistemas IoT ambientales multiparamétricos.
- MQTT como protocolo eficiente para transmisión en tiempo real (baja latencia).
- Arquitectura edge + cloud computing aplicable al diseño del prototipo.
- Alta precisión de medición (error <2%) alcanzable con sensores de bajo costo.

---

## 2. Wearable Devices for Environmental Monitoring in the Built Environment: A Systematic Review

**Autores:** Salamone, F., Masullo, M., & Sibilio, S. &nbsp;|&nbsp; **Año:** 2021 &nbsp;|&nbsp; **Revista:** Sensors (MDPI)

### Descripción
Revisión sistemática que analiza cómo los dispositivos IoT y wearables modernos integran sensores de intensidad lumínica, temperatura, humedad y calidad del aire para permitir monitoreo continuo en tiempo real. El estudio concluye que la combinación de microcontroladores, sensores y comunicación inalámbrica mejora significativamente la capacidad de supervisar condiciones ambientales y generar alertas preventivas, y que estos sistemas pueden operar con bajo consumo energético en dispositivos portátiles.

### Aporte para EcoAlerta
Brinda **sustento científico consolidado** —al tratarse de una revisión sistemática y no de un solo estudio— para la integración de sensores ambientales dentro de un sistema IoT portátil como EcoAlerta. Respalda específicamente el uso de **sensores de temperatura, humedad e intensidad lumínica** como herramientas efectivas para evaluar condiciones relacionadas con exposición solar y confort climático, y valida el uso de tecnologías inalámbricas para transmitir esa información hacia aplicaciones móviles. Su aporte más relevante para la justificación del proyecto es de **salud preventiva**: confirma que transformar datos ambientales en alertas tempranas contribuye efectivamente a proteger a las personas en espacios urbanos y académicos, que es exactamente el objetivo declarado de EcoAlerta para estudiantes universitarios.

**Hallazgos aplicables al proyecto:**
- Evidencia consolidada (revisión sistemática) sobre eficacia de wearables ambientales.
- Validación del uso combinado de sensores + comunicación inalámbrica para alertas preventivas.
- Confirmación de bajo consumo energético en dispositivos portátiles IoT.
- Sustento directo para el enfoque de salud preventiva del proyecto.

---

## 🧩 Síntesis general

| Aporte | Bakare & Abubaker (2026) | Salamone et al. (2021) |
|---|---|---|
| Validación técnica de ESP32 | ✅ Directa | ➖ General (microcontroladores) |
| Validación de protocolo de transmisión (MQTT) | ✅ | ➖ No específico |
| Precisión cuantificada de sensores | ✅ (<2% error) | ➖ No cuantificado |
| Respaldo en salud preventiva | ➖ Implícito | ✅ Explícito |
| Tipo de evidencia | Estudio experimental individual | Revisión sistemática (mayor robustez) |

Juntos, ambos artículos cubren los dos pilares científicos de EcoAlerta: por un lado, la **viabilidad técnica concreta** de una arquitectura ESP32 + sensores + transmisión en tiempo real con métricas de precisión cuantificadas; por otro, el **respaldo consolidado a nivel de literatura** sobre la efectividad de wearables ambientales para salud preventiva. En conjunto, confirman que la base tecnológica de EcoAlerta está alineada con la evidencia científica disponible y que la brecha que el proyecto busca cubrir —monitoreo UV personalizado con recomendaciones en tiempo real— es consistente con las tendencias de investigación actuales.
