# Descripción y aporte de patentes

> Revisión de patentes relacionadas con monitoreo de radiación UV, sistemas IoT ambientales y dispositivos portátiles de exposición lumínica. Esta sección documenta las patentes identificadas como antecedentes tecnológicos relevantes para el desarrollo de EcoAlerta, un sistema portátil basado en ESP32 orientado a estudiantes universitarios en entornos urbanos.

---

## Tabla resumen

| Patente | Código / Año | Enfoque principal | Relación con EcoAlerta |
|---|---|---|---|
| UV light monitoring system for a UV decontamination apparatus | US12409241B2 / 2025 | Medición de dosis UV en entornos de desinfección controlados | Baja, ya que es un contexto industrial y no urbano |
| Monitoring and Early Warning Device for Climate Comfort of Urban Green Space Water Bodies | CN223827091U / 2024 | Monitoreo climático multiparamétrico en espacios urbanos | Media, comparte sensores ambientales pero con distinto enfoque |
| Sistema, dispositivo y métodos para el seguimiento de la exposición a la luz | US11579015B2 / 2023 | Wearable de exposición lumínica con conectividad inalámbrica | Alta, el objetivo es casi idéntico pero sin recomendaciones en tiempo real |

## 1. UV light monitoring system for a UV decontamination apparatus

**Código:** US12409241B2 | **Año:** 2025

### Descripción

Sistema diseñado para monitorear luz ultravioleta en entornos de desinfección. Su objetivo es estimar con precisión la irradiancia UV que recibe una superficie, incluso en ángulos arbitrarios respecto a la fuente de emisión. Para lograrlo, combina un sensor UV con dos celdas solares ubicadas en distintas caras del monitor, lo que permite determinar la orientación del dispositivo y calcular la dosis real de radiación recibida por el objetivo.

### Aporte para EcoAlerta

Refuerza el principio de medir radiación UV de forma remota para evaluar exposición sobre una superficie o área de interés, y la necesidad de procesar esos datos para apoyar decisiones informadas. Estos son dos pilares centrales del proyecto. Sin embargo, es una solución muy especializada para entornos controlados donde la orientación del sensor es crítica para garantizar una dosis mínima de desinfección, mientras que EcoAlerta está pensado para un usuario en movimiento en espacios urbanos abiertos. Esta diferencia de contexto operativo confirma que no existe una solución directa equivalente en el mercado de patentes para el caso de uso propuesto.

| Aspecto | Detalle |
|---|---|
| Similitudes | Medición remota de radiación UV y procesamiento de datos para decisiones |
| Diferencias | Entorno controlado de desinfección frente a usuario móvil en entorno urbano |
| Brecha que confirma | Falta de soluciones orientadas a movilidad y vida cotidiana |

## 2. Monitoring and Early Warning Device for Climate Comfort of Urban Green Space Water Bodies

**Código:** CN223827091U | **Año:** 2024

### Descripción

Dispositivo de monitoreo y alerta temprana para evaluar condiciones de confort climático en espacios urbanos y cuerpos de agua. Integra sensores de intensidad lumínica, temperatura, humedad, velocidad del viento y precipitación, recopilando información ambiental en tiempo real a través de componentes electrónicos conectados a un sistema de adquisición de datos. Incluye además módulos de comunicación, mecanismos de protección eléctrica y estructuras adaptables para operar en exteriores.

### Aporte para EcoAlerta

Esta patente valida el uso de sensores ambientales combinados (luz, temperatura, humedad) y de sistemas electrónicos de adquisición y transmisión de datos orientados a la prevención de riesgos en espacios urbanos, que es exactamente el tipo de arquitectura que plantea EcoAlerta. La diferencia clave es el alcance: esta patente añade sensores de viento y precipitación y se enfoca en cuerpos de agua urbanos, mientras que EcoAlerta se concentra específicamente en radiación UV con recomendaciones preventivas para estudiantes universitarios, usando una arquitectura IoT compacta basada en ESP32 y aplicación móvil para alertas personalizadas, un nivel de personalización que esta patente no contempla.

| Aspecto | Detalle |
|---|---|
| Similitudes | Sensores ambientales múltiples, monitoreo urbano en tiempo real, prevención de riesgos |
| Diferencias | Incluye viento, precipitación y cuerpos de agua, sin enfoque en UV ni en usuario individual |
| Brecha que confirma | Ausencia de personalización por usuario y de enfoque específico en radiación UV |

## 3. Sistema, dispositivo y métodos para el seguimiento de la exposición a la luz

**Código:** US11579015B2 | **Año:** 2023

### Descripción

Dispositivo portátil equipado con múltiples sensores de exposición lumínica. Incorpora conectividad inalámbrica (Bluetooth/Wi-Fi) y un sistema controlador que permite almacenar y procesar datos de irradiancia UV recibida por el usuario, con el objetivo de generar un registro continuo de exposición acumulada.

### Aporte para EcoAlerta

Es la patente más cercana al objetivo del proyecto, ya que comparte el mismo propósito central (monitorear la exposición UV del usuario en tiempo real) y el mismo mecanismo de transmisión (conectividad inalámbrica), validando así la dirección técnica tomada por el equipo con el ESP32. Su limitación principal, y a la vez la oportunidad de innovación que aprovecha EcoAlerta, es que no genera recomendaciones personalizadas en tiempo real para el usuario final, pues está orientada al seguimiento clínico acumulado y no contempla contextos urbanos dinámicos ni la integración de variables adicionales como temperatura y humedad.

| Aspecto | Detalle |
|---|---|
| Similitudes | Objetivo idéntico de monitoreo UV y conectividad inalámbrica para transmisión |
| Diferencias | Sin recomendaciones personalizadas en tiempo real, enfoque clínico y no urbano dinámico |
| Brecha que confirma | Falta de inteligencia y recomendación en tiempo real, además de variables ambientales adicionales |

## Síntesis general

Las tres patentes revisadas confirman que existen antecedentes técnicos sólidos para medir radiación UV y transmitir datos ambientales de forma inalámbrica, pero ninguna combina estos tres elementos a la vez:

- Monitoreo específico de radiación UV.
- Integración con variables de temperatura y humedad.
- Generación de recomendaciones personalizadas en tiempo real para un usuario en movimiento en un entorno urbano.

Esta combinación inexistente en el panorama de patentes es precisamente la brecha que EcoAlerta busca cubrir.
