# Módulo Mecánico - EcoAlerta

Este repositorio contiene la documentación técnica, archivos de diseño y planos de manufactura del módulo mecánico del dispositivo de monitoreo ambiental **EcoAlerta**. La estructura del contenedor ha sido optimizada para la protección de componentes electrónicos en intemperie, facilitando el mantenimiento y garantizando la precisión de los sensores integrados.

---

## Descripción de Versiones y Mejoras

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
