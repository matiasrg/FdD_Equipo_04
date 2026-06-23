# 📐 Normas — Descripción y Aporte | Proyecto EcoAlerta

> **Equipo 04** · Revisión de normas técnicas y guías regulatorias que respaldan el diseño, cálculo y seguridad del sistema de monitoreo UV de EcoAlerta. Estas normas sustentan directamente decisiones ya planteadas en la **Lista de Exigencias** del proyecto.

---

## 📋 Tabla resumen

| Norma | Organismo | Aplicación dentro de EcoAlerta |
|---|---|---|
| Global Solar UV Index: A Practical Guide | OMS (WHO) | Define la escala del Índice UV (1–11+) que el sistema debe mostrar como salida |
| ISO/CIE 17166:2019 | ISO / CIE | Espectro de acción eritemática y dosis estándar de eritema: base para evaluar la exposición biológica a la radiación UV |
| IEC 62471-7:2023 | IEC | Seguridad fotobiológica y evaluación de riesgos asociados a la radiación óptica (UV, visible e infrarroja) |

---

## 1. Global Solar UV Index: A Practical Guide

**Organismo:** World Health Organization (OMS)

### Descripción
Esta guía práctica de la OMS establece la formulación del **Índice UV Solar Mundial (IUV)**, una escala estandarizada que va de **1 a 11+**, junto con su interpretación por rangos de riesgo y su codificación por colores (bajo, moderado, alto, muy alto, extremo). Su objetivo es comunicar de forma simple y comprensible el nivel de riesgo de exposición a la radiación ultravioleta para la población general.

### Aporte para EcoAlerta
Esta guía es la **referencia normativa principal** para una de las salidas centrales del sistema: el "valor numérico del índice UV bajo la escala estandarizada de la OMS", explícitamente solicitado en la Lista de Exigencias del proyecto (sección de Señales del dispositivo físico y de la aplicación móvil). Gracias a esta norma, EcoAlerta no inventa una escala propia de riesgo, sino que adopta un estándar internacionalmente reconocido y ya validado para la comunicación de riesgo por exposición solar, lo cual facilita que el usuario interprete correctamente las alertas (por ejemplo, el umbral de notificación ante "niveles de riesgo IUV ≥ 3" definido en la Lista de Exigencias).

**Aportes concretos:**
- Define la escala 1–11+ usada como salida del sistema.
- Establece los umbrales de riesgo que disparan las notificaciones de alerta.
- Da legitimidad internacional a la interpretación de los datos mostrados al usuario.

---

## 2. ISO/CIE 17166:2019 — Erythema Reference Action Spectrum and Standard Erythema Dose

**Organismo:** International Organization for Standardization (ISO) / Commission Internationale de l'Éclairage (CIE)

### Descripción

La norma ISO/CIE 17166:2019 establece el espectro de acción eritemática de referencia y la Dosis Eritemática Estándar (SED), utilizados para evaluar los efectos biológicos de la radiación ultravioleta sobre la piel humana. Define los métodos para calcular la irradiancia eritemática y cuantificar la exposición a la radiación UV considerando la capacidad de cada longitud de onda para producir eritema o quemaduras solares.

### Aporte para EcoAlerta

Esta norma proporciona el fundamento científico para interpretar la radiación ultravioleta medida por el sensor, relacionando la energía recibida con los posibles efectos biológicos sobre la piel humana. Gracias a ella, EcoAlerta puede respaldar técnicamente la evaluación del nivel de exposición UV y asociar los valores medidos con criterios internacionalmente reconocidos de riesgo para la salud.

**Aportes concretos:**
- Provee la base matemática para convertir irradiancia UV en el Índice UV (IUV).
- Justifica técnicamente el procesamiento de datos realizado en el ESP32.
- Da rigor científico al cálculo, evitando que la conversión sea arbitraria o estimada.

---

## 3. IEC 62471-7:2023 — Seguridad fotobiológica de lámparas y sistemas de lámparas

**Organismo:** International Electrotechnical Commission (IEC)

### Descripción

La norma IEC 62471-7:2023 establece criterios para evaluar los riesgos fotobiológicos asociados a la radiación óptica emitida por distintas fuentes luminosas. Considera la radiación ultravioleta, la luz azul, la radiación visible y la infrarroja, definiendo procedimientos de medición, evaluación y límites de exposición destinados a proteger la piel y los ojos frente a posibles daños.

### Aporte para EcoAlerta
Esta norma respalda directamente la sección de **Seguridad** de la Lista de Exigencias, que exige que "los componentes estarán protegidos frente a condiciones ambientales (humedad, calor y exposición solar), evitando fallos o riesgos" y que el sistema garantice un funcionamiento seguro tanto a nivel físico como digital. Aunque EcoAlerta no es una fuente emisora de UV sino un dispositivo de medición, esta norma aporta los criterios de **calibración y clasificación de riesgo radiológico** que permiten validar que las lecturas del sensor UV sean confiables y estén dentro de parámetros de medición reconocidos internacionalmente, reforzando la fiabilidad de las alertas de salud que el sistema comunica al usuario.

**Aportes concretos:**
- Aporta criterios de calibración y validación para el sensor UV del prototipo.
- Proporciona criterios reconocidos internacionalmente para evaluar la exposición segura a la radiación UV.
- Da un marco de referencia reconocido para garantizar la confiabilidad de las mediciones.

---

## 🧩 Síntesis general

| Norma | Responde a la pregunta... | Sección de la Lista de Exigencias que respalda |
|---|---|---|
| OMS — Global Solar UV Index | ¿Qué significa el número que ve el usuario? | Señales (dispositivo físico y app móvil) |
| ISO/CIE 17166:2019 | ¿Cómo se relaciona la radiación UV medida con sus efectos sobre la piel? |
| IEC 62471-7:2023 | ¿Cómo se evalúa la seguridad y exposición frente a la radiación UV? |

Las tres normas, en conjunto, cubren el flujo completo de la variable más importante del sistema — el Índice UV — desde su **medición física confiable** (IEC 62471), pasando por su **cálculo estandarizado** (ISO/CIE), hasta su **comunicación comprensible al usuario** (OMS). Esta cadena normativa demuestra que EcoAlerta no construye su funcionalidad central de forma arbitraria, sino sobre estándares técnicos y de salud pública reconocidos internacionalmente.
