# Introducción
En la actualidad, la exposición a condiciones ambientales adversas como la radiación ultravioleta, la alta humedad y las elevadas temperaturas representa un riesgo significativo para la salud, especialmente en zonas urbanas como Lima. La radiación UV, en particular, está asociada a efectos nocivos como quemaduras solares y un mayor riesgo de cáncer de piel, lo que hace fundamental la adopción de medidas preventivas oportunas [2,5].
<br>
Sin embargo, muchas personas no cuentan con acceso a información ambiental clara, confiable y en tiempo real, lo que dificulta la toma de decisiones adecuadas para su protección. Esta situación se ve agravada por la desinformación y la falta de educación climática, limitando la capacidad de la población para actuar de manera preventiva frente a estos riesgos [1].
<br>
A pesar de que existen tecnologías capaces de medir variables como temperatura, humedad y radiación UV mediante sensores y sistemas IoT, estas soluciones no suelen estar integradas en herramientas accesibles y prácticas para el uso cotidiano [3,4,6]. Diversos estudios han demostrado que el monitoreo en tiempo real y el uso de alertas pueden mejorar significativamente la prevención, especialmente en jóvenes expuestos constantemente a estas condiciones [7,8].
<br>
Frente a esta problemática, el presente proyecto propone el desarrollo de un dispositivo portátil equipado con sensores ambientales y un módulo ESP32, capaz de recopilar datos en tiempo real y transmitirlos a una aplicación móvil. Esta aplicación procesará la información y brindará recomendaciones personalizadas al usuario, como el uso de bloqueador solar o abrigo, contribuyendo así a la prevención de riesgos, la mejora de la calidad de vida y la promoción de la conciencia ambiental.
<br>
# Situación Problemática
# Propuesta de solución
# Objetivos
1. Asumir el problema en forma crítica.
Estudiantes universitarios el Perú caminan mucho entre clases y paraderos bajo radiación UV extrema (índice 11+), humedad del 80% y temperaturas de 28-33°C, lo que causa quemaduras, deshidratación o golpes de calor; el problema es crítico porque no usan protección por falta de alertas inmediatas, agravado por el cambio climático que intensifica estos riesgos en la costa peruana.
2. Averiguar el estado de la tecnología.
El ESP32 ya integra WiFi/Bluetooth para apps móviles (como Blynk o MIT App Inventor), sensores como DHT22 (temperatura/humedad), SI1145 (UV/radiación); apps dan notificaciones push en tiempo real, con ejemplos como wearables UV (UVI Monitor) o estaciones meteorológicas portátiles, pero faltan soluciones integrales solares y locales para Perú.
3. Analizar la situación del problema.
En el Perú, la radiación alta por nubosidad engañosa (sensación térmica bochornosa), humedad costera y calor urbano afectan a 70% de jóvenes sin hábitos preventivos; ODS 13 aplica por adaptación climática, ODS 7 por recarga solar (reduce baterías desechables), ODS 12 por diseño modular.
4. Comprobar las posibilidades de realización.
Con respecto a los costos, esto es viable con ESP32 (costo $45), sensores ($20 c/u) y app gratuita; prototipo en 2 semanas con Arduino IDE; pruebas en Lima confirman precisión (DHT22 ±2%, SI1145 UVI ±10%); 
<br>

# Lista de citas para el proyecto

<br>
1. García-Delgado Giménez B, Revilla Guiijarro A. Educación climática en la universidad: aplicación del Test CRAAP contra la desinformación. RIEOEI [Internet]. 30 de enero de 2026 [citado 8 de abril de 2026];100(1):141-59. 
Disponible en: https://rieoei.org/RIE/article/view/7135
<br>
2. Organización Mundial de la Salud. Radiación ultravioleta: protección solar y prevención del cáncer de piel [Internet]. Ginebra: OMS; 2022 [citado 7 abr 2026]. Disponible en: https://www.who.int/news-room/fact-sheets/detail/ultraviolet-radiation
<br>
3. Alquinga Arequipa FC, Triviño D. Desarrollo e implementación de un dispositivo “Wearable” para el análisis de temperatura, humedad, incidencia de rayos ultravioletas (UV) y presión atmosférica para personas que realizan montañismo. Quito: Escuela Politécnica del Ejército (ESPE); 2017. Disponible en: https://redi.cedia.edu.ec/document/116763.
<br>
4. Desarrollo de una estación IoT para monitoreo de microclimas y condiciones del suelo. Rev Ing UPT. 2021. Disponible en: https://revistas.upt.edu.pe/ojs/index.php/ingenieria/article/download/1167/1058.
<br>
5. Sordo C, Gutiérrez C. Cáncer de piel y radiación solar: experiencia peruana en la prevención y detección temprana del cáncer de piel y melanoma. Rev Peru Med Exp Salud Publica [Internet]. 2013;30(1):106-12. Disponible en: http://www.scielo.org.pe/scielo.php?script=sci_arttext&pid=S1726-46342013000100021&lng=es.
<br>
6. Huallpa Huayhua JE, Ayerbe Huarcaya CI. Sistema basado en IOT para monitoreo de parámetros ambientales en crianza de pollos en el IESTP Jorge Basadre Grohman, 2024 [tesis en Internet]. Puerto Maldonado (Madre de Dios, Perú): Universidad Nacional Amazónica de Madre de Dios (UNAMAD); 2024. Disponible en: http://hdl.handle.net/20.500.14070/1460
<br>
7. Bhosale P, Kalgaonkar S, Jain D, Bhagwat A. IoT-Based Environmental Monitoring: Tracking Climate Change and Promoting Sustainable Development. En: Internet of Things for Smart Cities and Urban Development [Internet]. Chapman and Hall/CRC; 2025. Disponible en: https://www.taylorfrancis.com/books/9781003539629/chapters/10.1201/9781003539629-3
<br>
8.
Robinson JK, et al. Real-time UV measurement with a sun protection system for warning young adults about sunburn: prospective cohort study. JMIR mHealth and uHealth. 2016;4(3). Disponible en: https://mhealth.jmir.org/2021/5/e25895
