

void setup() {
  DDRB=0x01; //salidas la señal PWM en pin 9--> bit 1 de b

  OCR1A=3906;

  TCCRA=TCCRB=0; //limpiando registros

  TCCRB|=(1<<WGM12);

  TCCRA|=(1<<COM1A0); //modo de operacion ctc -->toogle

  TCCRB|=(1<<CSC2)|(1<<CSC0); //preescALADOR N=1024

}

void loop() {
  // put your main code here, to run repeatedly:

}
