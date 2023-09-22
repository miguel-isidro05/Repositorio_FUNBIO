# Fundamentos de Biodiseño
</p>
<image align="center;" width="1200px;" style="border-radius: 90%;" src ="../Imágenes/imagen_read.png">
  <h3 align="center">
Ingeniería Biomédica PUCP-UPCH
  </h3>
  <h5 align="center">
     Bienvenidos al repositorio del Grupo 14 del curso "Fundamentos de Biodiseño"
  </h5>
</p>


</p>
  <h5 align="center">
    Tema de proyecto: Sistema somatosensoriales en prótesis no invasivas del miembro superior
  </h5>
  
</p>

## Indice.

**- [Contexto](#Contexto)**<br>
**- [Definiciones Instructions](#Definiciones)**<br>
**- [Usuario](#Definiciones)**<br>
**- [Problemática](#Problemática)**<br>
**- [Estado del arte](#Estadodelarte)**<br>
**- [Tecnología existente en el ámbito de patentes](#Tecnologíaexistenteenelámbitodepatentes)**<br>
**- [Lista de requerimientos](#Listaderequerimientos)**<br>
**- [Propuesta de solución](#Propuestadesolución)**<br>
**- [Bibliografía](#Bibliografía)**<br>


## Contexto
### Contexto mundial. 
La pérdida de alguna extremidad debido a accidentes laborales es más común de lo que parece ,sobre todo, en personas de escasos recursos [1]. Asimismo, aquellas personas para solventar sus gastos tienden a realizar trabajos manuales en la industria manufacturera [1], además se encontró que en el año 2005,1.6 millones de personas en los Estados Unidos vivían con la pérdida de alguna extremidad y en la actualidad se estima que 1 de cada 190 estadounidenses viven con la ausencia de alguna extremidad y de no controlarse este aumento masivo se estima que la cifra ascienda a 3.6 millones de estadounidenses para el año 2050 [3], la cual es una cifra alarmante tomando en cuenta que los Estados Unidos es el país que más destaca a nivel mundial.
Centrándonos en una región específica de los Estados Unidos, encontramos que la tasa anual de amputaciones de dedos en el trabajo es de 9,3 por 100.000 [2]. Aquello ocurre debido a que cada año se producen alrededor de 19.000 amputaciones de dedos en el trabajo en Estados Unidos, las cuales 20% de estas lesiones son lo suficientemente graves como para requerir hospitalización. Además, en base al total de personas registradas se analizó a un grupo selecto de 134 personas de las cuales la tasa fue mayor para los hombres (14,7) que para las mujeres (1,9). Las tasas ajustadas por edad fueron más altas para los hombres hispanos (52,8) y negros (28,9) que para los hombres blancos (9,5). Además de hallar que las personas que trabajaban con máquinas (por ejemplo, prensas, sierras o cortadoras) o las mantenían en la industria manufacturera corrían el mayor riesgo.

<p align="center">
  <img width="660" height="400" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/1.jpg">
</p>

### Contexto del Perú.
En una conferencia realizada en Standford en el año 2008, se presentó una fórmula para calcular la cantidad de personas con amputaciones de brazos por país [5]. En base a este método obtenemos la cifra exacta, la cual es 14500 peruanos.

Según los datos de la Revista Médica Herediana publicada en el 2012 . El Instituto Nacional de Rehabilitación “Adriana Rebaza Flores” en Lima-Callao, Perú (INR) estudió las características clínicas y demográficas de 570 pacientes amputados, Las variables de estudio (tabla 2) fueron el sexo , la condición socieconómica y la procedencia [4].

<p align="center">
  <img width="760" height="500" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/2.jpg">
</p>

Se observó que la mayor parte de amputados del país son del sexo masculino con condición socieconómica pobre no extremo, que tienen procedencia en Lima -Callao.
En la tabla 3 y 4 ,recolectamos datos que comprendieron los años de 1999 a 2002 .Se evaluaron 156 historias clínicas del Instituto Especializado de Rehabilitación [11].

<p align="center">
  <img width="760" height="500" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/3.jpg">
</p>

El nivel de amputación del miembro superior más frecuente en el presente estudio se representa a nivel de dedos 33.97% (53 casos) [Tabla 4]

## Definiciones: 
### a. ¿Qué es el sistema sensorial?
El sistema sensorial engloba todos los sistemas de detección sensorial en el cuerpo humano, es el encargado de recibir y procesar información que genera la conciencia del individuo sobre el entorno. Esto incluye sistemas como el visual, auditivo, gustativo y el táctil. Varias percepciones sensoriales influyen en la actividad motora voluntaria e involuntaria para facilitar la interacción con el mundo [6]. 

### b. ¿Qué es el sistema somatosensorial?
El sistema somatosensorial se encarga de procesar y transmitir información relacionada con el tacto, la temperatura, el dolor, la presión y la propiocepción. El sistema somatosensorial es multimodal, sobre la base del estímulo que codifican. Los receptores sensoriales somáticos son nociceptores (mecánicos, de calor y polimodales), termorreceptores (frío y calor) y mecanorreceptores (de adaptación rápida, Meissner y de Pacini; de adaptación lenta, Merkel y corpúsculos de Ruffini) [8]. Ahora, sabemos que el sistema somatosensorial actúa como la interfaz principal entre el cuerpo y el entorno, pero ¿Cuál es el proceso mediante el cual el sistema nervioso recibe información de este sistema para tomar las decisiones y responder a las condiciones cambiantes? Ahí es donde entra la Retroalimentación sensorial. 

### c. ¿Qué es la retroalimentación sensorial?
La retroalimentación sensorial se refiere al proceso mediante el cual el sistema nervioso recibe información sensorial del entorno externo o interno y la utiliza para monitorear y ajustar la actividad y el comportamiento del cuerpo. La retroalimentación puede asumir diferentes modalidades, puede haber retroalimentaciones visuales, auditivas, táctiles, autónomas [8].  Por ello, este proceso es crucial para que el sistema somatosensorial funcione eficazmente y para que podamos adaptarnos al mundo que nos rodea.
<p align="center">
  <img width="860" height="500" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/5.jpg">

## Usuario
Los estudios descriptivos son de gran importancia en la evaluación de un usuario, pues en base a ello se definirá un público objetivo a desarrollar. Por dicha razón, se han considerado varios puntos a tomar en cuenta, tales como la mayor predominancia de pacientes suele variar entre varones de 21 a 30 años [11,12], además los lugares de amputación más frecuentes suelen ocurrir en la mano (22,2%) [11,12] y la procedencia de los pacientes tiende a ser de Lima o Callao (46.8%) [11].

Asimismo, el estudio sobre las amputaciones transmetacarpianas nos muestra que son relativamente bajas debido a su rareza; sin embargo, su enfoque sigue siendo igual de necesario, pues involucra gran parte de la sensibilidad en la mano, la cual también puede experimentar los mismos síntomas como el síndrome del miembro fantasma [13].

Por estos motivos, nuestro usuario es un paciente del género masculino que reside en Lima, Perú, y se encuentra entre el rango de 21 a 30 años de edad, el cual posee una amputación transmetacarpiana cuyas dificultades se relacionan con el comando y sensibilidad de su prótesis.

## Problemática
La problemática es que existe una deficiencia de sistemas somatosensoriales que transmiten información a personas con prótesis del miembro superior en el Perú.

### 1. Análisis.
En la actualidad, las prótesis para miembros superiores enfrentan un problema significativo relacionado con la falta de un sistema adecuado para proporcionar retroalimentación sensorial a los usuarios. Una de las principales razones por las cuales las prótesis son rechazadas por el usuario es la falta de una realimentación sensorial apropiada que provea de información útil para lograr un mejor control y manipulación de objetos [14].
Ello se debe a que las prótesis comerciales actuales poseen sistemas de control embebidos; es decir, tanto las etapas de sensado y actuación ocurren ajenas al usuario, siendo propias de la prótesis. [15] Esto puede resultar en problemas de control y, en última instancia, en el abandono del dispositivo. Por lo tanto, la revisión y perfeccionamiento de los sistemas de retroalimentación sensorial en dispositivos protésicos para extremidades superiores son de gran importancia.

### 2. Pregunta Reto.
¿Cómo podríamos mejorar la disfunción de sistemas somatosensoriales que transmiten información a personas con prótesis no invasivas del miembro superior en el Perú?

## Estado del arte
Se hizo una investigación sobre el estado de arte dirigido a la problemática. Tras analizar la información obtenida, se eligieron las propuestas más convenientes e importantes:

### Tecnología existente en el ámbito académico

#### 1. Mejoras en la manipulación de objetos gracias al entrenamiento de una sola sesión superan las diferencias entre los sitios de estimulación durante la retroalimentación vibrotáctil.
La mayoría de las prótesis no proporcionan retroalimentación háptica intencional sobre el desempeño del movimiento, limitando a los usuarios a solo obtener la información acerca del estado de la prótesis a través de la vista. No obstante, el presente artículo se enfoca en comprender los efectos del aprendizaje y los diferentes sitios de estimulación en la retroalimentación háptica intencional utilizando estimulación vibrotáctil en la manipulación de objetos virtuales, en donde través de una interfaz robótica para manipular objetos virtuales con retroalimentación visual y vibrotáctil en cuatro sitios del cuerpo (dedo, brazo, cuello y pie). La retroalimentación háptica mejora la interacción del usuario con la prótesis y le permite sentir y percibir su entorno de una manera más natural; este procedimiento involucra el uso de sensores, procesamiento de datos, integración de los componentes a la prótesis del usuario y la etapa más importante, la retroalimentación vibrotáctil, esta puede tomar diferentes formas como vibraciones o presión [16].

#### 2. Diseño e implementación de un control de impedancia para mejorar el desempeño de un prototipo de prótesis de mano que usa brazalete MYO.
El funcionamiento de este sistema se basó en las señales de retroalimentación disponibles, la fuerza ejercida, la velocidad y el uso de sensores SFR ubicados en la punta de los dedos, los cuales se utilizan para cuantificar la fuerza ejercida sobre el entorno. El brazalete de vibración proporciona la retroalimentación sensorial distintiva cuando el manipulador aplica  una fuerza correspondiente al movimiento. El sistema de control de admisión se implementa a través de dispositivo PSoC programable, en donde se configuran los señales de entrada y salida. En conclusión, se logra regular la fuerza aplicada al entorno y la velocidad de movimiento del dispositivo manipulador, todo esto basado en la retroalimentación de fuerza medida por los sensores SFR [17].

#### 3. Núcleo somatosensorial talámico humano como lugar de estimulación mediante entradas de sensores táctiles nocivos y térmicos en una prótesis activa.  
El locus sensorial somático del prosencéfalo para la entrada de sensores en la superficie de una prótesis activa es un componente importante de la interfaz cerebro-máquina. Este dispositivo analiza las respuestas neuronales a estímulos cutáneos controlados y las sensaciones inducidas por la estimulación a niveles de corriente de microamperios (TMIS) en el núcleo caudal ventral talámico humano (Vc), puede producir retroalimentación somatotópica con patrones útiles al Sistema Nervioso Central a partir de sensores en una prótesis activa, pidiendo evocar sensaciones similares a las producidas por estímulos táctiles naturales. En pacientes con lesiones importantes que conducen a la pérdida de información sensorial somática, TMIS a menudo evoca sensaciones en la representación de partes del cuerpo con pérdida de información sensorial, incluyendo el problema del miembro fantasma después de una amputación [18].

### Tecnología existente en el ámbito de patentes

| Inventores y Año de publicación | Descripción|              Imagen               |
| ------- | ----------- | -------------------------------- |
|<h4>Codigo: SE1950373A1<h4/> <h4> Antonio Speidel, bo viejo, Michael Scarsen<h4/> <h4>(2020)<h4/> | <h4>"Aparato para medir la percepción vibrotáctil y método de preparación del mismo, incluida la medición automatizada de temperatura"<h4/><h6>            Este aparato está destinado a medir la percepción vibrotáctil en sujetos humanos; este dispositivo consta de una sonda de vibración con una extremidad diseñada para acoplarse a una parte del cuerpo del sujeto, un sensor de temperatura sin contacto que mira hacia la parte del cuerpo cuando se acopla con la extremidad de la sonda y un sensor de fuerza acoplado. Antes del procedimiento, la unidad de control calcula parámetros basados ​​en las señales de salida del sensor de temperatura sin contacto o del sensor de fuerza, indicando la presencia o ausencia de la parte del cuerpo, es decir, este aparato aborda los desafíos de medir la percepción vibrotáctil y la temperatura de la piel de manera automatizada y precisa, lo que lo convierte en una herramienta valiosa para la detección temprana de problemas de percepción vibrotáctil en partes del cuerpo de sujetos humanos.[19] <h6/> |<p align="center"> <img width="2000" height="250" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/iamgen%201.jpg"> </p>|
|<h4>Codigo: USOO7438724B2<h4/> <h4>Harold H. Sears, Arthur D. Dyek, Edwin K. Iversen, Steven R. Kunz, James R. Linder, Shawn L. Archer, Reed H. Grant, Ronald E. Madsen Jr.<h4/> <h4>(2018)<h4/> |<h4>"Sistema y método de retroalimentación y fuerza" <h4/> <h6>         En la presente invención se proporciona un sistema y un método de retroalimentación de la fuerza de agarre para su uso con un dispositivo protésico. El sistema puede incluir una mano protésica que tiene una pluralidad de dígitos para usar con el dispositivo protésico. Se puede proporcionar un sensor de fuerza para producir una señal de fuerza y ​​el sensor de fuerza está configurado para asociarse con la pluralidad de dígitos de la mano protésica. Además, un controlador de retroalimentación de fuerza puede recibir la señal de fuerza del sensor de fuerza. Un actuador de retroalimentación de fuerza también está en comunicación con el controlador de retroalimentación de fuerza. El accionador de retroalimentación de fuerza puede proporcionar vibraciones de retroalimentación a un usuario del dispositivo protésico.[20] <h6/>|<p align="center"> <img width="2500" height="250" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/imagen%202.png"> </p>|
|<h4>Codigo: US20170020693A1<h4/> <h4>Stuart D. HarshbargerJames D. BeatyR. Jacob VogelsteinNitish V. Thakor <h4/> <h4>(2016)<h4/> | <h4>"Detección de objetos y guía localizada de las extremidades." <h4/><h6>         La invención descrita proporciona un sistema y un método de retroalimentación de la fuerza de agarre para su uso con un dispositivo protésico. El sistema incluye una mano protésica con una pluralidad de dígitos para usar con el dispositivo protésico. Además, se proporciona un sensor de fuerza que está configurado para asociarse con la pluralidad de dígitos de la mano protésica y producir una señal de fuerza. El controlador de retroalimentación de fuerza recibe la señal de fuerza del sensor de fuerza, y el actuador de retroalimentación de fuerza también está en comunicación con el controlador de retroalimentación de fuerza. El accionador de retroalimentación de fuerza puede proporcionar vibraciones de retroalimentación a un usuario del dispositivo protésico para mejorar la experiencia de uso y la precisión en la realización de tareas. [21]<h6/> |<img width="2700" height="250" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/imagen%207.png">   |

## Dispositivos comerciales
| Dispositivo |Descripción|Características principales|             Imagen               |
| ------- | ----------- | ------------------------- |--------------|
|<h4> 1. Ability Hand<h4/><p>.Empresa: Psyonic.|<h6>Prótesis mioeléctrica con sensación háptica en donde la velocidad de movimiento es dos veces más rápida que una prótesis normal. Esta prótesis cuenta con 32 patrones de agarres, resistente al agua y  dúctil. Este dispositivo cuenta con sensores ubicados en las yemas de los dedos que detectan la presión al agarrar un objeto, mandando como señal de salida feedback sensorial expresada en vibraciones  en el brazo [22]<h6/>|. Tamaño: Pequeño (189 mm de largo por 110 mm de ancho por 55 mm de fondo) y grande  (200 mm de largo por 110 mm de ancho por 55 mm de fondo)<p>.Una batería de 7,4 V y 2200 mA<p>.Conectividad Bluetooth<p>.Retroalimentación táctil sensorial.<p>.Microprocesador L6882|<p align="center"><img width="2000" height="200" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/pros%201.jpeg">|
|<h4> 2. I-LIMB Hand<h4/>.Empresa: Ossur|<h6>Protesis mioeléctrica controlada por un sistema de control que utiliza una señal muscular mioeléctrica  de dos entradas para abrir y cerrar los dedos realistas de la mano. Cada dedo utiliza un motor en cada articulación, lo que proporciona un agarre flexible que el usuario puede ajustar a  la forma del objeto que se está agarrando.[23]<h6/>|<h6>. La mano i-LIMB utiliza señales eléctricas generadas por los músculos residuales del usuario para controlar los movimientos de la prótesis. Sensores electromiográficos (EMG) capturan estas señales y las traducen en comandos para la mano artificial.</p>. La i-LIMB está diseñada para replicar de manera cercana los movimientos naturales de una mano humana.</p>. Batería recargable: La i-LIMB generalmente funciona con una batería recargable que proporciona una autonomía suficiente para un uso diario normal.<h6/>|<p align="center"><img width="2000" height="200" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/pros%202.jpeg">


#### 
#### Características principales:</p>

### 3. MYHAND
Myhand es una prótesis robótica con retroalimentación sensorial para recuperar la funcionalidad de una mano amputada utilizando tecnologías portátiles no invasivas.
Descripción: prótesis de miembro superior que tiene varios agarres adaptables y sensibles. Los dedos se doblarán alrededor de cualquier forma u objeto determinado y usted puede ayudar activamente a la mano a cerrar el puño o señalar con el dedo índice. Para un agarre óptimo, ahora presentamos MySkin.[24]</p>  
#### Empresa: HY5-Bionics </p>  
#### Características principales:</p>   
. Tamaño: 7 ¾ </p> 
. Patrones de agarre: pellizco, potencia, trípode, puño, apuntar.</p> 
. Rendimiento:  Potencia máxima de agarre: 120N. Agarre máximo del trípode: 60N.  </p> 
. Dígitos de los dedos de titanio indestructibles. </p> 
. Peso: 575 g.</p> 
. Retroalimentación háptica sensorial. </p> 

<p align="center">
  <img width="550" height="500" src="https://github.com/miguel-isidro05/Repositorio_FUNBIO/blob/main/Im%C3%A1genes/WhatsApp%20Image%202023-09-15%20at%2011.25.36%20PM.jpeg">
</p>

## Lista de requerimientos

| Funcionales | No funcionales |
| ------- | ----------- |
| Control de intensidad personalizable (retroalimentación adaptativa)| Ligero y flexible pues no debe afectar a la movilidad del usuario |
| Mejorar la percepción tactil al usuario | No debe ser invasivo |
| Capacidad de detectar señales de entrada (presión y fuerza)| Resistente a condiciones ambientales adversas, golpes o vibraciones |
| Permitir el control del feedback sensorial a través de sensores vibrotáctiles| Evitar la gestión de la sobrecarga sensorial (filtros y priorización de señales) |
| Respuesta rápida de la prótesis a los movimientos e intenciones del usuario.| Funcionamiento continuo durante largos periodos de tiempo |
|Correcta lectura de datos de entrada mediante un software| Es portatil y estético|


## Propuesta de solución
Creación de un sistema de retroalimentación somatosensorial para una prótesis de miembro superior que le permita al usuario obtener la sensación de fuerza y presión a  través de sensores vibrotáctiles. 

## Bibliografía
[1] Ziegler-Graham K, MacKenzie EJ, Ephraim PL, Travison TG, Brookmeyer R. Estimating the Prevalence of Limb Loss in the United States: 2005 to 2050. Archives of Physical Medicine and Rehabilitation [Internet]. 2008 Mar;89(3):422–9. URL disponible en: https://pubmed.ncbi.nlm.nih.gov/18295618/

[2] Sorock GS, Smith E, Hall N. Hospitalized occupational finger amputations, New Jersey, 1985 and 1986. American Journal of Industrial Medicine. 1993 Mar;23(3):439–47. URL disponible en:
https://pubmed.ncbi.nlm.nih.gov/8503463/

[3] Garzón MO, Garcés M, Isaza D, Jaramillo S, Latorre V, Valderrama S. Characterization of workers covered by a risk insurance company in Colombia who suffered amputation. Revista Brasileira de Medicina do Trabalho. 2019;17(4):480–9. URL disponible en:
https://pubmed.ncbi.nlm.nih.gov/32685746/

[4] Diseño D E Mecanismo de D de, Grados de LPPMT. ESCUELA DE POSGRADO [Internet]. Gob.pe. 2006 [citado el 9 de septiembre de 2023]. Disponible en: https://www.conadisperu.gob.pe/observatorio/wp-content/uploads/2020/11/1.ABARCA_PINO_VICTORIA_DISENO_MECANISMO_DEDO.pdf

[5] Farro L, Tapia R, Bautista L, Montalvo R, Iriarte H. Características clínicas y demográficas del [Internet]. Org.pe. 2012 [citado el 9 de septiembre de 2023]. Disponible en: http://www.scielo.org.pe/pdf/rmh/v23n4/v23n4ao4.pdf

[6] Prosthetic Hand. Maurice LeBlanc, MSME, CP [Internet]. Stanford.edu. [citado el 9 de septiembre de 2023]. Disponible en: https://web.stanford.edu/class/engr110/2011/LeBlanc-03a.pdf.

[7] Mahesh Gadhvi, Marlyn J. Moore, Muhammad Waseem. Physiology, Sensory System. StatPearls - NCBI Bookshelf [Internet]; 2023. URL disponible en:
https://www.ncbi.nlm.nih.gov/books/NBK547656/ 

[8] María Cabeza, Ángel Lozada, Mario Pérez, Juan José Pérez Rivero C. y C., Gabriela del P. Romero, Lourdes Rosas, Gustavo Ruiz, Carlos Torner. Biología de los sistemas sensoriales. México: Universidad Autónoma Metropolitana; 2018. URL disponible en: https://www.casadelibrosabiertos.uam.mx/contenido/contenido/Libroelectronico/Tacto.pdf 

[9] Mauricio Ortega, Virginia Pacheco. Modalidad de la retroalimentación y comportamiento inteligente en estudiantes universitarios. México: Universidad Nacional Autónoma de México; 2014. URL disponible en : 
https://www.redalyc.org/pdf/292/29232614003.pdf 

 [10] Khadijeh Moulaei, Abbas Sheiktaheri, Ali A. Haghdoost, Mansour S. Nezhadd, Kambiz Bahaadinbeigy. A data set for the design and implementation of the upper limb disability registry. PMC Pubmed Central [Internet]; 2023. URL disponible en: https://www.ncbi.nlm.nih.gov/pmc/articles/PMC10312779/
 
 [11] Aparicio C, Eduardo J. Etiología más frecuente de las amputaciones de miembro superior en el Instituto Especializado de Rehabilitación “Adriana Rebaza Flores” de enero 1999 a diciembre del 2002. Universidad Nacional Mayor de San Marcos; 2006. Disponible en: https://cybertesis.unmsm.edu.pe/handle/20.500.12672/15921
 
[12] Camacho-Conchucos HT. Pacientes amputados por accidentes de trabajo: características y años acumulados de vida productiva potencial perdidos. An Fac Med (Lima Perú : 1990) [Internet]. 2010 [citado el 10 de septiembre de 2023];71(4):271–5. Disponible en: http://www.scielo.org.pe/scielo.php?script=sci_arttext&pid=S1025-55832010000400011

[13] Nejatkermany MPZ, Modirian E, Soroush M, Masoumi M, Hosseini M. Phantom limb sensation (PLS) and phantom limb pain (PLP) among young landmine amputees. Iranian Journal of Child Neurology. 2016;10(3):42.
https://www.ncbi.nlm.nih.gov/pmc/articles/PMC4928615/

[14] Fontana JM, Molisani L. Evaluación de un Sistema Vibrotáctil para Sustitución Sensorial en Prótesis de Miembro Superior. Mecánica Computacional [Internet]. 2013 [cited 2023 Sep 10];32(34):2909–15. Disponible en: http://venus.ceride.gov.ar/ojs/index.php/mc/article/view/4528

[15] Pylatiuk C, Kargov A, Schulz S. Design and Evaluation of a Low-Cost Force Feedback System for Myoelectric Prosthetic Hands. JPO: Journal of Prosthetics and Orthotics [Internet]. 2006 Apr 1;18(2):57–61. Disponible en:https://journals.lww.com/jpojournal/fulltext/2006/04000/design_and_evaluation_of_a_low_cost_force_feedback.7.aspx

[16] Stepp CE, Matsuoka Y. Object manipulation improvements due to single session training outweigh the differences among stimulation sites during vibrotactile feedback. IEEE Trans Neural Syst Rehabil Eng [Internet]. 2011;19(6):677–85. Disponible en: http://dx.doi.org/10.1109/tnsre.2011.2168981 

[17] Aguilar, A. & Vargas, D. Diseño e implementación de un control de impedancia para mejorar el desempeño de un prototipo de prótesis de mano que usa brazalete MYO. [Internet]. 2022. [citado: 2023, septiembre] Disponible en: http://hdl.handle.net/11349/30597    

[18] Chien J, Korzeniewska A, Colloca L, Campbell C, Dougherty P, Lenz F. Human thalamic somatosensory nucleus (ventral caudal, vc) as a locus for stimulation by INPUTS from tactile, noxious and thermal sensors on an active prosthesis. Sensors (Basel) [Internet]. 2017 [citado el 10 de septiembre de 2023];17(6):1197. Disponible en: http://dx.doi.org/10.3390/s17061197 

[19] Strbac M, Bijelic G, Malesevic N, Keller T. Sistema y método de realimentación electrotáctil. Patentar. ES:2930590:T3, 2022.
Disponible en https://patents.google.com/patent/ES2930590T3/

[20] Sears HH, Dyck AD, Iversen EK, Kunz SR, Linder JR, Archer SL, et al. System and method for force feedback [Internet]. [cited 2023 Sep 14]. URL disponible en: https://patents.google.com/patent/US7438724B2/en

[21] Harshbarger SD, Beaty JD, Jacob Vogelstein R, Thakor NV. Multi-modal neural interfacing for prosthetic devices. US Patent. 20170020693:A1, 2017.Disponible en https://patents.google.com/patent/US20170020693A1/

[22] Ability handTM — [Internet]. PSYONIC. [citado el 16 de septiembre de 2023]. Disponible en: https://www.psyonic.io/ability-hand 

[23] I-limb® quantum bionic hand. Ossur.com [Internet]. Ossur.com. [citado el 16 de septiembre de 2023]. Disponible en: https://www.ossur.com/en-us/prosthetics/arms/i-limb-quantum

[24] Hy M—. MyHand — Hy5 [Internet]. Hy5 | Worlds 1st hydraulic hand prosthesis. [citado el 16 de septiembre de 2023]. Disponible en: https://www.hy5-bionics.com/myhand

