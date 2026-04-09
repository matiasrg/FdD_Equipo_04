# Introducción

# Situación Problemática

En la actualidad, la exposición a condiciones ambientales adversas como la radiación ultravioleta, la alta humedad y las elevadas temperaturas representa un riesgo significativo para la salud, especialmente en zonas urbanas como Lima. La radiación UV, en particular, está asociada a efectos nocivos como quemaduras solares y un mayor riesgo de cáncer de piel, lo que hace fundamental la adopción de medidas preventivas oportunas [2,5].

Sin embargo, muchas personas no cuentan con acceso a información ambiental clara, confiable y en tiempo real, lo que dificulta la toma de decisiones adecuadas para su protección. Esta situación se ve agravada por la desinformación y la falta de educación climática, limitando la capacidad de la población para actuar de manera preventiva frente a estos riesgos [1].

A pesar de que existen tecnologías capaces de medir variables como temperatura, humedad y radiación UV mediante sensores y sistemas IoT, estas soluciones no suelen estar integradas en herramientas accesibles y prácticas para el uso cotidiano [3,4,6]. Diversos estudios han demostrado que el monitoreo en tiempo real y el uso de alertas pueden mejorar significativamente la prevención, especialmente en jóvenes expuestos constantemente a estas condiciones [7,8].

Frente a esta problemática, el presente proyecto propone el desarrollo de un dispositivo portátil equipado con sensores ambientales y un módulo ESP32, capaz de recopilar datos en tiempo real y transmitirlos a una aplicación móvil. Esta aplicación procesará la información y brindará recomendaciones personalizadas al usuario, como el uso de bloqueador solar o abrigo, contribuyendo así a la prevención de riesgos, la mejora de la calidad de vida y la promoción de la conciencia ambiental.

# Propuesta de solución
En respuesta a esta problemática, se plantea la necesidad de implementar un sistema tecnológico, cuyo enfoque está basado en la utilización de Internet de las Cosas (IoT), para realizar el monitoreo del ambiente en tiempo real y proporcionar recomendaciones personales acerca de cómo evitar riesgos a la salud. Para lograr este fin, se considerará la utilización de un pequeño dispositivo portátil, dotado con sensores de temperatura, humedad y radiación ultravioleta, conectado a un microcontrolador ESP32 capaz de transmitir los datos de estas mediciones.

Esta propuesta tecnológica se sustenta en los estudios existentes relacionados con soluciones IoT en el monitoreo ambiental que han resultado exitosos debido a su capacidad para recolectar información sobre variables climáticas en tiempo real y facilitar la toma de decisiones frente a situaciones adversas [4]. Por tanto, la implementación de un microcontrolador ESP32, por ejemplo, permitiría la transferencia inalámbrica de estos datos al usuario a través de una aplicación móvil.

En segundo lugar, la aplicación móvil que se asocia con el sistema deberá cumplir con la función primordial de analizar los datos recolectados e informar acerca de las recomendaciones personalizadas para el usuario, tales como aplicarse protector solar, hidratarse o protegerse frente a posibles variaciones de temperatura. Numerosos estudios han demostrado que la utilización de un sensor de radiación UV junto a una aplicación móvil puede aumentar de manera significativa las acciones de protección frente al sol, siendo particularmente efectiva para jóvenes gracias a sus alertas en tiempo real que evitan posibles quemaduras [8].

También teniendo en cuenta el entorno peruano, en el que la radiación solar es bastante alta durante todo el año, esta solución adquiere una relevancia especial. En Perú ha sido demostrada la importancia de la prevención y diagnóstico tempranos del melanoma cutáneo, con el uso de métodos preventivos basados en la educación para protegerse de los rayos solares [5].

En general, esta propuesta intenta combinar la incorporación de tecnología fácil de usar, un sistema de monitoreo en tiempo real y medidas de prevención para la salud, no solo ayudando a minimizar los riesgos derivados de entornos adversos, sino que también promoviendo una mejor sensibilización ambiental y prácticas saludables.

# Objetivos
## Objetivo general
Diseñar e implementar un prototipo capaz de registrar y monitorear mediciones ambientales locales mediante sensores de temperatura, humedad y radiación UV integrados a un microcontrolador ESP32, y vinculado a una aplicación móvil que procese estos datos en tiempo real para brindar recomendaciones personalizadas de protección y prevención a los usuarios, promoviendo el cuidado de la salud y la toma de decisiones informadas frente a condiciones ambientales adversas.
## Objetivos especificos
1. Averiguar el estado del arte en sistemas de monitoreo ambiental basados en IoT, sensores de temperatura, humedad y radiación; así como el uso del ESP32 en este ámbito.
2. Evaluar la viabilidad técnica y económica del desarrollo del prototipo que incluye ESP32, sensores, conectividad y plataforma de desarrollo.
3. Diseñar la arquitectura del sistema, definiendo la integrasión entre el hardware y la aplicación web/móvil.
4. Construir e implementar el prototipo físico.
5. Desarrollar la aplicación web/móvil que procese los datos recibidos y genere alertas y recomendaciones automáticas (ej. uso de bloqueador o abrigo)
6. Realizar pruebas experimentales en condiciones reales para verificar la transmisión de datos, estabilidad del sistema y respuesta de la aplicación.
7. Evaluar el desempeño del sistema analizando la precisión de los sensores, la eficiencia de la comunicación y la utilidad de las recomendaciones en la prevención de riesgos.

# Bibliografía


1. García-Delgado Giménez B, Revilla Guiijarro A. Educación climática en la universidad: aplicación del Test CRAAP contra la desinformación. RIEOEI [Internet]. 30 de enero de 2026 [citado 8 de abril de 2026];100(1):141-59. 
Disponible en: https://rieoei.org/RIE/article/view/7135

2. Organización Mundial de la Salud. Radiación ultravioleta: protección solar y prevención del cáncer de piel [Internet]. Ginebra: OMS; 2022 [citado 7 abr 2026]. Disponible en: https://www.who.int/news-room/fact-sheets/detail/ultraviolet-radiation

3. Alquinga Arequipa FC, Triviño D. Desarrollo e implementación de un dispositivo “Wearable” para el análisis de temperatura, humedad, incidencia de rayos ultravioletas (UV) y presión atmosférica para personas que realizan montañismo. Quito: Escuela Politécnica del Ejército (ESPE); 2017. Disponible en: https://redi.cedia.edu.ec/document/116763.

4. Desarrollo de una estación IoT para monitoreo de microclimas y condiciones del suelo. Rev Ing UPT. 2021. Disponible en: https://revistas.upt.edu.pe/ojs/index.php/ingenieria/article/download/1167/1058.

5. Sordo C, Gutiérrez C. Cáncer de piel y radiación solar: experiencia peruana en la prevención y detección temprana del cáncer de piel y melanoma. Rev Peru Med Exp Salud Publica [Internet]. 2013;30(1):106-12. Disponible en: http://www.scielo.org.pe/scielo.php?script=sci_arttext&pid=S1726-46342013000100021&lng=es.

6. Huallpa Huayhua JE, Ayerbe Huarcaya CI. Sistema basado en IOT para monitoreo de parámetros ambientales en crianza de pollos en el IESTP Jorge Basadre Grohman, 2024 [tesis en Internet]. Puerto Maldonado (Madre de Dios, Perú): Universidad Nacional Amazónica de Madre de Dios (UNAMAD); 2024. Disponible en: http://hdl.handle.net/20.500.14070/1460

7. Bhosale P, Kalgaonkar S, Jain D, Bhagwat A. IoT-Based Environmental Monitoring: Tracking Climate Change and Promoting Sustainable Development. En: Internet of Things for Smart Cities and Urban Development [Internet]. Chapman and Hall/CRC; 2025. Disponible en: https://www.taylorfrancis.com/books/9781003539629/chapters/10.1201/9781003539629-3

8.
Robinson JK, et al. Real-time UV measurement with a sun protection system for warning young adults about sunburn: prospective cohort study. JMIR mHealth and uHealth. 2016;4(3). Disponible en: https://mhealth.jmir.org/2021/5/e25895
