# Descripción de versiones y mejoras por versión

Equipo 04. Historial de evolución del esquemático electrónico del proyecto EcoAlerta, sistema portátil de monitoreo UV y ambiental basado en ESP32.

## Tabla comparativa

| Versión | Microcontrolador | Cambio principal | Bloques presentes |
|---|---|---|---|
| V1.0 | ESP32-DEVKITC-VE | Esquema inicial funcional, con conectores redundantes | Alimentación, Sensor UV, Sensor Temp/Hum, Microcontrolador, Conector Principal, Conector Temp/Hum |
| V2.0 | ESP32-DEVKITC-VE | Limpieza del esquema: se eliminan conectores duplicados | Alimentación, Sensor UV, Sensor Temp/Hum, Microcontrolador |
| V3.0 | ESP32-DEVKITC-VE | Se incorpora el indicador LED | Alimentación, Sensor UV, Sensor Temp/Hum, Microcontrolador, Led |
| V4.0 | ESP32S (U1) | Cambio de microcontrolador y se agrega el interruptor general | Alimentación, Sensor UV, Sensor Temp/Hum, Microcontrolador, Led, Bornera del interruptor, Interruptor |
| V_FINAL | ESP32S (U1) | Se retira el LED indicador, queda la versión definitiva | Alimentación, Sensor UV, Sensor Temp/Hum, Microcontrolador, Bornera del interruptor, Interruptor |

## Versión 1.0

### Descripción

Es la primera versión funcional completa del esquemático de EcoAlerta. Integra el ESP32-DEVKITC-VE (U15) como unidad de control, conectado al sensor de temperatura y humedad (U2) y al sensor UV (U3), además del bloque de alimentación (P1, "FUENTE"). A diferencia de las versiones posteriores, esta versión documenta las mismas señales dos veces: además del bloque "Microcontrolador" y "Sensor de Temperatura y Humedad", existen dos bloques adicionales — "Conector Principal" (U11/J2) y "Conector Temp/Hum" (U16/J1) — que repiten las líneas 3.3V, DATA-TEMP-HUM y GND ya presentes en otros bloques, sin aportar una función eléctrica nueva.

### Elementos característicos de esta versión

- Microcontrolador ESP32-DEVKITC-VE (U15) con su pinout completo de 38 pines.
- Bloques redundantes "Conector Principal" (U11) y "Conector Temp/Hum" (U16), que duplican señales ya presentes en el bloque del sensor de temperatura/humedad.
- No existe bloque de LED indicador.
- No existe interruptor general ni bornera dedicada para él.

---

## Versión 2.0

### Descripción

Se simplifica el esquemático eliminando la duplicación de conectores presente en V1.0. Se mantiene exactamente la misma arquitectura funcional (ESP32-DEVKITC-VE, sensor UV, sensor de temperatura y humedad, alimentación), pero ahora cada señal aparece documentada una sola vez, en su bloque correspondiente.

### Mejoras respecto a la Versión 1.0

- Se eliminan los bloques "Conector Principal" (U11) y "Conector Temp/Hum" (U16), que eran redundantes.
- El esquema queda reducido a cuatro bloques funcionales: Alimentación, Sensor UV, Sensor de Temperatura y Humedad, y Microcontrolador.
- No hay cambios en el microcontrolador ni en los sensores utilizados.

---

## Versión 3.0

### Descripción

Se mantiene la base de V2.0 y se incorpora por primera vez un indicador visual: el bloque "Led" (LED1) con su resistencia limitadora R1 de 10K, conectado directamente a +3.3V. En esta versión el LED todavía no recibe una señal de control independiente desde el ESP32; su encendido depende únicamente de la alimentación de 3.3V.

### Mejoras respecto a la Versión 2.0

- Se añade el bloque "Led" (LED1 + R1 de 10K) como indicador visual del sistema.
- El LED se alimenta desde +3.3V, sin una línea de control dedicada desde el microcontrolador todavía.
- Se mantiene sin cambios el resto de la arquitectura (ESP32-DEVKITC-VE, Sensor UV, Sensor de Temperatura y Humedad, Alimentación).

---

## Versión 4.0

### Descripción

Esta versión introduce dos cambios importantes. Primero, se reemplaza el microcontrolador ESP32-DEVKITC-VE por un módulo ESP32S (U1), con un pinout distinto (D-prefijo en lugar de IO-prefijo). Segundo, se agregan los elementos de interacción manual del sistema: un interruptor general con su propia bornera ("Bornera del interruptor" y "Interruptor"), que permite energizar o desenergizar el circuito entre la línea de +5V del ESP32 y la línea de +5V general. Además, el bloque LED ya no se alimenta de forma fija a 3.3V: ahora recibe una señal de control propia ("LED") directamente desde un pin del ESP32S, lo que permite encenderlo o apagarlo por software.

### Mejoras respecto a la Versión 3.0

- Se reemplaza el microcontrolador ESP32-DEVKITC-VE por el módulo ESP32S (U1).
- Se agregan los bloques "Bornera del interruptor" e "Interruptor", que permiten energizar/desenergizar el circuito manualmente.
- El LED indicador pasa de estar alimentado fijo a 3.3V (V3.0) a recibir una señal de control dedicada desde un pin del ESP32S.
- Se mantienen sin cambios los bloques de Alimentación, Sensor UV y Sensor de Temperatura y Humedad.

---

## Versión Final

### Descripción

Es la versión consolidada para la entrega del proyecto. Mantiene la arquitectura de V4.0 (ESP32S, interruptor general con bornera dedicada, sensores UV y de temperatura/humedad), pero retira por completo el bloque "Led": ya no están presentes ni LED1, ni la resistencia R1, ni la señal de control "LED" en el microcontrolador. El sistema queda definido sin indicador visual a nivel de hardware.

### Mejoras respecto a la Versión 4.0

- Se elimina el bloque "Led" (LED1 y R1 de 10K) y su señal de control dedicada en el ESP32S.
- Se mantienen sin cambios el microcontrolador ESP32S, el interruptor general con su bornera, y los bloques de Sensor UV, Sensor de Temperatura y Humedad, y Alimentación.
- El esquemático queda con seis bloques funcionales: Alimentación, Sensor UV, Sensor de Temperatura y Humedad, Microcontrolador, Bornera del interruptor e Interruptor.

---

## Conclusiones

La evolución del esquemático de EcoAlerta refleja un proceso de diseño iterativo que pasó primero por una etapa de depuración (eliminar conectores redundantes en V2.0), luego por una etapa de incorporación de funciones (LED indicador en V3.0, interruptor general y cambio de microcontrolador en V4.0), y finalmente por una etapa de simplificación del hardware final, donde se decidió retirar el LED indicador para quedarse con un diseño más acotado a las funciones esenciales del sistema: medición UV, medición de temperatura y humedad, alimentación y control manual de encendido mediante el interruptor general.

El cambio más relevante a nivel de plataforma es la migración del ESP32-DEVKITC-VE (V1.0–V3.0) al módulo ESP32S (V4.0–V_FINAL), que coincide con la incorporación del interruptor general como mecanismo de control manual del sistema.
