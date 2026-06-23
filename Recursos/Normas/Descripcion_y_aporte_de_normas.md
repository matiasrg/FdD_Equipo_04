# 📐 Normas — Descripción y Aporte | Proyecto EcoAlerta

> **Equipo 04** · Revisión de normas técnicas y guías regulatorias que respaldan el diseño, cálculo y seguridad del sistema de monitoreo UV de EcoAlerta. Estas normas sustentan directamente decisiones ya planteadas en la **Lista de Exigencias** del proyecto.

---

## 📋 Tabla resumen

| Norma | Organismo | Aplicación dentro de EcoAlerta |
|---|---|---|
| Global Solar UV Index: A Practical Guide | OMS (WHO) | Define la escala del Índice UV (1–11+) que el sistema debe mostrar como salida |
| ISO 17166:1999 / CIE S 007/E-1998 | ISO / CIE | Función de acción eritema: base matemática para convertir irradiancia UV en el valor del IUV |
| IEC/EN 62471 | IEC | Seguridad fotobiológica: clasificación de riesgo y criterios de medición/calibración del sensor UV |

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

## 2. ISO 17166:1999 / CIE S 007/E-1998 — Función de acción eritema (espectro de acción CIE)

**Organismo:** International Organization for Standardization (ISO) / Commission Internationale de l'Éclairage (CIE)

### Descripción
Esta norma conjunta ISO/CIE define la **función de acción eritema**, es decir, la curva de ponderación espectral que describe qué tan eficaz es cada longitud de onda del espectro UV para producir eritema (quemadura solar) en la piel humana. Esta función es la base matemática oficial mediante la cual se transforma la **irradiancia espectral UV** medida por un sensor en el **valor numérico del Índice UV**.

### Aporte para EcoAlerta
Mientras que la guía de la OMS define **qué significa** cada valor del IUV, esta norma ISO/CIE explica **cómo se calcula** ese valor a partir de la señal cruda que entrega el sensor UV (ML8511/LTR390). Es el eslabón técnico que falta entre "el sensor mide radiación" y "la app muestra un número del 1 al 11+": sin esta función de ponderación, no habría una forma estandarizada y reproducible de convertir la lectura física del sensor en el índice que pide la Lista de Exigencias. Esta norma respalda directamente el procesamiento de datos que debe ocurrir en el software embebido del microcontrolador (sección "Software — dispositivo electrónico" de la Lista de Exigencias).

**Aportes concretos:**
- Provee la base matemática para convertir irradiancia UV en el Índice UV (IUV).
- Justifica técnicamente el procesamiento de datos realizado en el ESP32.
- Da rigor científico al cálculo, evitando que la conversión sea arbitraria o estimada.

---

## 3. IEC/EN 62471 — Seguridad fotobiológica de lámparas y sistemas de lámparas

**Organismo:** International Electrotechnical Commission (IEC)

### Descripción
La norma IEC/EN 62471 establece los criterios de **clasificación de riesgo fotobiológico** y los métodos de medición y evaluación de fuentes de radiación óptica (incluyendo UV), determinando los límites de exposición segura para distintos grupos de riesgo. Es una norma ampliamente utilizada como referencia para calibración y clasificación de seguridad en dispositivos que miden o emiten radiación óptica.

### Aporte para EcoAlerta
Esta norma respalda directamente la sección de **Seguridad** de la Lista de Exigencias, que exige que "los componentes estarán protegidos frente a condiciones ambientales (humedad, calor y exposición solar), evitando fallos o riesgos" y que el sistema garantice un funcionamiento seguro tanto a nivel físico como digital. Aunque EcoAlerta no es una fuente emisora de UV sino un dispositivo de medición, esta norma aporta los criterios de **calibración y clasificación de riesgo radiológico** que permiten validar que las lecturas del sensor UV sean confiables y estén dentro de parámetros de medición reconocidos internacionalmente, reforzando la fiabilidad de las alertas de salud que el sistema comunica al usuario.

**Aportes concretos:**
- Aporta criterios de calibración y validación para el sensor UV del prototipo.
- Respalda la clasificación de riesgo radiológico mencionada en la Lista de Exigencias.
- Da un marco de referencia reconocido para garantizar la confiabilidad de las mediciones.

---

## 🧩 Síntesis general

| Norma | Responde a la pregunta... | Sección de la Lista de Exigencias que respalda |
|---|---|---|
| OMS — Global Solar UV Index | ¿Qué significa el número que ve el usuario? | Señales (dispositivo físico y app móvil) |
| ISO 17166 / CIE S 007 | ¿Cómo se calcula ese número a partir del sensor? | Software (dispositivo electrónico) |
| IEC/EN 62471 | ¿Qué tan confiable y seguro es el sensor que mide? | Seguridad |

Las tres normas, en conjunto, cubren el flujo completo de la variable más importante del sistema — el Índice UV — desde su **medición física confiable** (IEC 62471), pasando por su **cálculo estandarizado** (ISO/CIE), hasta su **comunicación comprensible al usuario** (OMS). Esta cadena normativa demuestra que EcoAlerta no construye su funcionalidad central de forma arbitraria, sino sobre estándares técnicos y de salud pública reconocidos internacionalmente.
