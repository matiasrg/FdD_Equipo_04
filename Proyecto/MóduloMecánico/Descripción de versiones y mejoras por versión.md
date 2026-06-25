# Módulo Mecánico - EcoAlerta

Este repositorio contiene la documentación técnica, archivos de diseño y planos de manufactura del módulo mecánico del dispositivo de monitoreo ambiental **EcoAlerta**. La estructura del contenedor ha sido optimizada para la protección de componentes electrónicos en intemperie, facilitando el mantenimiento y garantizando la precisión de los sensores integrados.

---

## 1. Descripción de Versiones y Mejoras

El desarrollo del módulo mecánico se ejecutó en dos etapas principales de diseño, evolucionando desde un prototipo funcional básico hasta un ensamblaje integrado con tolerancias industriales listas para manufactura en PETG.

### Versión 1 (v1): Prototipo Base y Distribución Funcional
* **Diseño de Bloques Independientes:** Configuración inicial del contenedor principal con divisiones y componentes tratados por separado para validar el volumen total requerido.
* **Ventilación Pasiva:** Incorporación de rejillas lineales texturizadas directamente en la estructura exterior para permitir el flujo de aire.
* **Perforaciones de Control:** Integración de cavidades previas para el botón de encendido/apagado e inserciones cilíndricas para el paso de cables.
* **Fijación Mecánica:** Implementación de columnas internas con agujeros guía para la sujeción de tapas mediante tornillos de rosca métrica.

### Versión 2 (v2) / Versión Final: Integración, Ajustes y Tolerancias de Chasis
* **Optimización de Conectividad Externa:** Ajuste milimétrico y estandarización de las perforaciones de salida para prensaestopas (compatibles con el modelo comercial PG7) y mecanizado específico del agujero cuadrado/rectangular para un conector de chasis USB-C empotrable y un interruptor (switch) basculante.
* **Rediseño de la Tapa de Sensores:** Modificación geométrica de la cubierta superior izquierda para incluir un rebaje circular y un acoplamiento dedicado que posiciona el sensor UV expuesto directamente al exterior de forma estanca.
* **Incorporación de Componentes Digitales en Ensamblaje:** Inclusión e indexación real dentro del entorno 3D de todas las piezas de hardware: prensaestopas PG7, conector USB-C de chasis, interruptor de palanca/switch, placa electrónica perforada de soporte, módulo de desarrollo ESP32, sensor UV y sensor DHT11/DHT22.
* **Desacoplamiento de Cubiertas:** División de la zona superior en dos tapas independientes (Tapa del ESP32 y Tapa de los sensores), permitiendo abrir el compartimento de medición ambiental sin exponer la electrónica de procesamiento principal.

---

## 2. Especificaciones de Componentes y Planos Técnicos

A partir de los planos de ingeniería mecánica de la versión final, se detallan las dimensiones, tolerancias y características constructivas de cada pieza:

### A. Contenedor Principal (Carcasa Base)
* **Dimensiones Totales:** Ancho de $150\text{ mm}$, longitud de $225\text{ mm}$ y altura de chasis de $75\text{ mm}$ (grosor de pared estándar de $3\text{ mm}$).
* **Acotación Interna:** Cavidad simétrica dividida en secciones útiles con longitudes de apoyo de $93.38\text{ mm}$ y anchos de paso de $102.38\text{ mm}$ y $126\text{ mm}$. Radius de esquinas redondeadas externas fijadas en $R7.5\text{ mm}$.
* **Perforaciones del Panel:** * Orificios cilíndricos concéntricos mecanizados para prensaestopas con diámetros interiores de $\varnothing 11.5\text{ mm}$, $\varnothing 12.8\text{ mm}$ y rebajes exteriores de $\varnothing 20\text{ mm}$ y $\varnothing 25\text{ mm}$ para el asiento de tuercas plásticas.
    * Ventilación integrada mediante rejillas lineales de ancho calibrado.

### B. Tapa de los Sensores
* **Dimensiones:** $135\text{ mm}$ de largo por $102.38\text{ mm}$ de ancho, con un espesor de placa de $4\text{ mm}$.
* **Mecanizados de Sensores:** * Abertura circular concéntrica con un escalón de fijación de $\varnothing 8\text{ mm}$ exterior y $\varnothing 3.3\text{ mm}$ interior para el montaje del sensor de radiación UV.
    * Orificio secundario de $\varnothing 6\text{ mm}$ y $\varnothing 3.3\text{ mm}$ para acoplamiento de tornillería y posicionamiento de cables del DHT11/DHT22.
* **Puntos de Anclaje:** Cuatro taladros pasantes de $\varnothing 3.3\text{ mm}$ ubicados simétricamente a una distancia de borde de $12.8\text{ mm}$ en las esquinas.

### C. Tapa del ESP32
* **Dimensiones:** $135\text{ mm}$ de largo por $102.38\text{ mm}$ de ancho, con un espesor de placa plano de $4\text{ mm}$.
* **Puntos de Anclaje:** Cuatro taladros pasantes limpios de $\varnothing 3.3\text{ mm}$ distanciados a $12.8\text{ mm}$ de las aristas perimetrales, alineados perfectamente con las torres de roscado del contenedor base.

### D. Componentes de Fijación y Soportes Internos
* **Fijador de la Tapa:** Soporte de montaje angular ($90.0^{\circ}$) con una base de longitud de $52.5\text{ mm}$, ancho de $4\text{ mm}$ y altura de pestaña de $8.74\text{ mm}$. Cuenta con un orificio central de guiado de $\varnothing 3.3\text{ mm}$ con radio de redondeo terminal de $R4.5\text{ mm}$.
* **Alojador de Tornillo de la Placa:** Bloque cilíndrico de soporte con base cuadrada de $25\text{ mm} \times 20\text{ mm}$, altura de elevación de $8\text{ mm}$ y torres con orificios concéntricos de $\varnothing 5\text{ mm}$ exterior y $\varnothing 2.5\text{ mm}$ interior para asegurar la placa perforada mediante tornillos autorroscantes.
* **Fijador de DHT11:** Base de montaje dedicada de $25\text{ mm} \times 20\text{ mm}$, con una altura de perfil de $8\text{ mm}$ y un canal de alojamiento texturizado con una separación interna acotada en $5.8\text{ mm}$ para calzar el cuerpo del sensor de humedad/temperatura.

---

## 3. Parámetros de Manufactura Recomendados

Todas las dimensiones lineales en los planos adjuntos están expresadas en **milímetros (mm)** bajo la norma de proyección del tercer ángulo (Sistema Americano).

* **Material Base:** PETG (Polietileno Tereftalato de Glicol), seleccionado por su alta resistencia al impacto, estabilidad geométrica ante rayos UV y tolerancia a la humedad ambiental en el campus.
* **Configuración de Impresión 3D:**
    * **Grosor de capa:** $0.2\text{ mm}$ (balance óptimo entre acabado superficial y resistencia estructural).
    * **Perímetros de pared:** Mínimo 4 líneas (garantiza la estanqueidad y solidez de las roscas de $\varnothing 3.3\text{ mm}$).
    * **Densidad de relleno (Infill):** $30\%$ en patrón giroidal o de rejilla para soportar la presión mecánica de los prensaestopas de nylon PA66 al ser ajustados.