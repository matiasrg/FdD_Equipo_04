# Descripción y aporte de tesis

> Revisión de tesis de repositorios académicos peruanos relacionadas con monitoreo UV y sistemas IoT ambientales, como respaldo de la viabilidad técnica y contextual de EcoAlerta.

---

## Tabla comparativa

| Tesis | Autor / Año | Institución | Enfoque | Tecnología clave |
|---|---|---|---|---|
| Sistema de sensores inalámbricos para el monitoreo del índice de radiación solar ultravioleta de la ciudad de Huancavelica | Carlos Gonzáles Saenz, 2022 | Universidad Nacional del Centro del Perú | Red de sensores UV en zona altoandina | Nodos inalámbricos UV (ML8511 / LTR390) |
| Sistema basado en IoT para monitoreo de parámetros ambientales en crianza de pollos en el IESTP Jorge Basadre Grohmann | Huallpa Huayhua, 2024 | IESTP Jorge Basadre Grohmann | Monitoreo ambiental en crianza avícola | ESP32 + DHT22 + MQ-135 + MQTT |

## 1. Sistema de sensores inalámbricos para el monitoreo del índice de radiación solar ultravioleta de la ciudad de Huancavelica

**Autor:** Carlos Gonzáles Saenz | **Año:** 2022 | **Institución:** Universidad Nacional del Centro del Perú

### Descripción

Estudio de campo sobre el uso de sensores UV inalámbricos para medir el índice de radiación UV local en la ciudad de Huancavelica. Busca compensar la falta de datos puntuales en zonas altoandinas, donde la radiación alcanza niveles extremos. Se despliegan varios nodos de sensor UV en puntos representativos de la ciudad, cada uno registrando mediciones cada 5 minutos en tiempo real. La validación de los datos se hace mediante métodos estadísticos: correlación de Spearman para precisión y prueba de Kruskal-Wallis para repetitividad temporal.

### Aporte para EcoAlerta

Esta tesis es clave porque corrobora en contexto peruano que los sensores UV portátiles pueden ofrecer mediciones de alta precisión, lo cual es transferible a la calibración de los sensores ML8511/LTR390 que el equipo considera para el prototipo. Además, su enfoque local en una zona de microclima extremo demuestra que la variabilidad climática es un problema real y vigente en el Perú, dando relevancia geográfica a la propuesta de EcoAlerta. También aporta una metodología de validación estadística replicable (Spearman y Kruskal-Wallis) que el equipo puede usar como referencia al validar la precisión de su propio prototipo.

**Aportes concretos:**
- Validación de sensores ML8511/LTR390 en condiciones peruanas reales.
- Protocolo estadístico de validación de precisión y repetitividad.
- Evidencia de que la variabilidad de microclima en Perú es un problema medible y relevante.

## 2. Sistema basado en IoT para monitoreo de parámetros ambientales en crianza de pollos en el IESTP Jorge Basadre Grohmann

**Autor:** Huallpa Huayhua | **Año:** 2024 | **Institución:** Instituto de Educación Superior Tecnológico Público Jorge Basadre Grohmann

### Descripción

Propone el diseño e implementación de un sistema IoT para el monitoreo continuo de temperatura, humedad y calidad del aire en un ambiente de crianza avícola. El sistema integra sensores conectados a un microcontrolador ESP32, que transmite datos en tiempo real vía Wi-Fi a un servidor MQTT y los visualiza en un dashboard. Se realizaron pruebas de calibración comparando las lecturas de los sensores con instrumentos de referencia certificados.

### Aporte para EcoAlerta

Esta tesis valida directamente la arquitectura técnica que el equipo propone: ESP32, sensores de temperatura y humedad, transmisión MQTT y visualización en tiempo real. Demuestra que este tipo de sistemas son replicables con bajo costo y sin infraestructura compleja, lo que refuerza la viabilidad del prototipo en un contexto universitario peruano con recursos limitados. Su experiencia con el sensor DHT22 también es transferible a EcoAlerta, ya que el equipo considera sensores de la misma familia para su propio diseño.

**Aportes concretos:**
- Validación práctica de la arquitectura ESP32 + MQTT en un caso real peruano.
- Confirmación de bajo costo y baja complejidad de infraestructura para implementación.
- Experiencia transferible con el sensor DHT22, usado también en EcoAlerta.

## Síntesis general

| Aporte | Gonzáles Saenz (2022) | Huallpa Huayhua (2024) |
|---|---|---|
| Validación de sensores UV en contexto peruano | Sí | No aplica |
| Validación de arquitectura ESP32 + MQTT | No aplica | Sí |
| Metodología estadística de precisión replicable | Sí (Spearman / Kruskal-Wallis) | Sí (comparación con instrumentos certificados) |
| Transferencia directa de sensores al proyecto | ML8511 / LTR390 | DHT22 |
| Evidencia de bajo costo y viabilidad local | Sí | Sí |

Ambas tesis, aunque pertenecen a dominios de aplicación distintos (radiación solar urbana frente a crianza avícola), convergen en validar los mismos componentes técnicos que sustentan EcoAlerta: sensores de bajo costo, arquitectura ESP32/IoT y métodos de validación estadística rigurosos, todo dentro de un contexto peruano real y replicable.
