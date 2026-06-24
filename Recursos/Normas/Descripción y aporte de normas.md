# Descripción y aporte de normas

> Revisión de normas técnicas y guías regulatorias que respaldan el diseño, cálculo y seguridad del sistema de monitoreo UV de EcoAlerta. Estas normas sustentan directamente decisiones ya planteadas en la Lista de Exigencias del proyecto.

---

## Tabla resumen

| Norma | Organismo | Aplicación dentro de EcoAlerta |
|---|---|---|
| Global Solar UV Index: A Practical Guide | OMS (WHO) | Define la escala del Índice UV (1-11+) que el sistema debe mostrar como salida |
| ISO/CIE 17166:2019 | ISO / CIE | Espectro de acción eritemática y Dosis Eritemática Estándar, base científica para evaluar el impacto biológico de la radiación UV |
| IEC 62471-7:2023 | IEC | Seguridad fotobiológica: criterios de medición, límites de exposición y validación del sensor UV |

## 1. Global Solar UV Index: A Practical Guide

**Organismo:** World Health Organization (OMS)

### Descripción

Esta guía práctica de la OMS establece la formulación del Índice UV Solar Mundial, una escala estandarizada que va de 1 a 11+, junto con su interpretación por rangos de riesgo y su codificación por colores (bajo, moderado, alto, muy alto, extremo). Su objetivo es comunicar de forma simple y comprensible el nivel de riesgo de exposición a la radiación ultravioleta para la población general.

### Aporte para EcoAlerta

El proyecto EcoAlerta utiliza como referencia esta guía internacional para la clasificación del Índice Ultravioleta. Gracias a esta escala, el sistema puede traducir los datos obtenidos por el sensor UV en alertas comprensibles para los usuarios, promoviendo la protección frente a la exposición solar excesiva. Esta guía es la referencia normativa principal para una de las salidas centrales del sistema, el valor numérico del índice UV bajo la escala estandarizada de la OMS, explícitamente solicitado en la Lista de Exigencias del proyecto, en la sección de señales del dispositivo físico y de la aplicación móvil.

**Aportes concretos:**
- Clasificación de los niveles de radiación UV.
- Generación de alertas preventivas.
- Recomendaciones de protección solar para la población.

## 2. ISO/CIE 17166:2019. Erythema Reference Action Spectrum and Standard Erythema Dose

**Organismo:** International Organization for Standardization (ISO) / Commission Internationale de l'Éclairage (CIE)

### Descripción

Esta norma internacional define el espectro de acción eritemática de referencia y la Dosis Eritemática Estándar (SED), utilizados para evaluar los efectos biológicos de la radiación ultravioleta sobre la piel humana. Además, proporciona métodos para calcular la irradiancia eritemática, permitiendo cuantificar la exposición a la radiación UV en función de su capacidad para producir daño cutáneo.

### Aporte para EcoAlerta

Esta norma provee la base científica que respalda el procesamiento de datos realizado en el software embebido del microcontrolador, dentro de la sección "Software, dispositivo electrónico" de la Lista de Exigencias. Es el eslabón técnico entre el hecho de que el sensor mide radiación y que la app muestra un número del 1 al 11+, ya que sin esta función de ponderación no habría una forma estandarizada y reproducible de convertir la lectura física del sensor en el índice que pide la Lista de Exigencias.

**Aportes concretos:**
- Fundamentación científica de la medición de radiación UV.
- Evaluación del impacto biológico de la exposición solar.
- Base técnica para la interpretación de los valores registrados por el sensor UV.

## 3. IEC 62471-7:2023. Photobiological Safety of Lamps and Lamp Systems

**Organismo:** International Electrotechnical Commission (IEC)

### Descripción

Esta norma establece criterios para evaluar los riesgos fotobiológicos asociados a la radiación óptica, incluyendo radiación ultravioleta (UV), luz visible, luz azul e infrarroja. Define procedimientos de medición, evaluación y límites de exposición destinados a proteger la piel y los ojos frente a posibles efectos perjudiciales de la radiación.

### Aporte para EcoAlerta

Esta norma respalda directamente la sección de seguridad de la Lista de Exigencias, aportando los criterios de calibración y clasificación de riesgo radiológico que permiten validar que las lecturas del sensor UV sean confiables y estén dentro de parámetros de medición reconocidos internacionalmente. Esto refuerza la fiabilidad de las alertas de salud que el sistema comunica al usuario.

**Aportes concretos:**
- Validación de la medición de radiación UV.
- Referencia para los límites de exposición seguros.
- Respaldo técnico para la evaluación de riesgos asociados a la radiación solar.
- Garantía de confiabilidad en el monitoreo de radiación ultravioleta.

## Síntesis general

| Norma | Responde a la pregunta | Sección de la Lista de Exigencias que respalda |
|---|---|---|
| OMS. Global Solar UV Index | ¿Qué significa el número que ve el usuario? | Señales (dispositivo físico y app móvil) |
| ISO/CIE 17166:2019 | ¿Cómo se evalúa el impacto biológico de la radiación medida? | Software (dispositivo electrónico) |
| IEC 62471-7:2023 | ¿Qué tan confiable y seguro es el sensor que mide? | Seguridad |

Las tres normas, en conjunto, cubren el flujo completo de la variable más importante del sistema, el Índice UV, desde su medición física confiable (IEC 62471-7:2023), pasando por su evaluación científica estandarizada (ISO/CIE 17166:2019), hasta su comunicación comprensible al usuario (OMS). Esta cadena normativa demuestra que EcoAlerta no construye su funcionalidad central de forma arbitraria, sino sobre estándares técnicos y de salud pública reconocidos internacionalmente.

## Referencias

World Health Organization. (2002). *Global Solar UV Index: A Practical Guide*. Geneva: World Health Organization.

ISO/CIE. (2019). *ISO/CIE 17166:2019. Erythema Reference Action Spectrum and Standard Erythema Dose*. Geneva: International Organization for Standardization and International Commission on Illumination.

IEC. (2023). *IEC 62471-7:2023. Photobiological Safety of Lamps and Lamp Systems. Part 7: Light Sources and Luminaires Primarily Emitting Visible Radiation*. Geneva: International Electrotechnical Commission.
