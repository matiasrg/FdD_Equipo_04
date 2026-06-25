# Módulo Mecánico - EcoAlerta

## Evolución del Diseño Mecánico y Consolidación de Versiones

El desarrollo del chasis y los componentes de sujeción del dispositivo **EcoAlerta** se estructuró en dos etapas de diseño (v1 y v2), evolucionando desde una distribución analítica de componentes separados hasta un ensamblaje final integrado y acotado para manufactura.

### Versión 1 (v1): Configuración Base y Distribución Espacial
En esta primera etapa se validaron los volúmenes, la distribución interna y las aberturas necesarias para la interacción de los componentes con el entorno:
* **Estructura por Bloques Separados:** Configuración del contenedor principal dividiendo el espacio para alojar de forma independiente los sistemas de energía, control y sensado.
* **Circulación de Aire:** Inclusión de rejillas lineales directamente en el chasis exterior para permitir la ventilación pasiva y la renovación del aire interno.
* **Cavidades de Control e Interfaz:** Apertura de agujeros iniciales destinados a la instalación de un botón de encendido/apagado, fijaciones para tornillos de cierre y perforaciones para el paso de cables mediante prensaestopas.
* **Ventana de Monitoreo UV:** Maquetado de los primeros agujeros en la sección superior de la tapa de los sensores para permitir la exposición del sensor de radiación ultravioleta.

### Versión 2 (vfinal) - Versión Final: Ajustes de Chasis e Integración de Componentes
La v2 constituye el diseño final consolidado. En esta fase se aplicaron las correcciones de tolerancia milimétrica y se incorporaron físicamente todos los elementos comerciales y de hardware dentro del entorno 3D:
* **Estandarización de Perforaciones de Salida:** Ajuste y calibración exacta de los agujeros del contenedor para albergar de forma hermética prensaestopas comerciales de tipo PG7.
* **Mecanizado Especial para Conectores de Chasis:** Modificación de las aberturas del panel frontal para asegurar el calce perfecto de un conector de alimentación USB Tipo-C de empotrar y un interruptor general (switch) basculante.
* **Rediseño del Acoplamiento UV:** Modificaciones geométricas en la tapa de los sensores mediante un rebaje circular escalonado para lograr un acoplamiento estanco y seguro del sensor UV, garantizando que quede alineado y protegido frente al exterior.
* **Consolidación del Ensamblaje Electromecánico:** Inclusión real de la arquitectura interna completa dentro del modelo final. Esto abarca el posicionamiento exacto de los prensaestopas, el conector de chasis, el switch, la placa de soporte perforada, el sensor UV y el sensor de temperatura/humedad DHT11.
* **División Estructural de Tapas:** Configuración definitiva de la cubierta superior dividida en dos piezas independientes (Tapa del ESP32 y Tapa de los sensores), optimizando el acceso por separado a la electrónica de procesamiento o al módulo de sensores durante tareas de mantenimiento.

Enlace de Onshape: 
[https://cad.onshape.com/documents/be05ffe52afa9a955caa7767/w/59e88b758aaaabc94f50e5dc/e/23231b023377f0eafd262c30](https://cad.onshape.com/documents/be05ffe52afa9a955caa7767/w/59e88b758aaaabc94f50e5dc/e/23231b023377f0eafd262c30)
