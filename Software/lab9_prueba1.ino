volatile byte cuenta=0;

void setup() {
  DDRD = 0xFF; // definimos cuales son entradas/salidas, en este caso solo salidas 

  OCR1A=3906;// ponemos el tope de la cuenta

  //primero limpiamos los registros
  TCCRRB=TCCRA=0;

  TCCR1B|=(1<<WGM12);//MODO CTC

  TCCR1B|=(1<<CS2)| (1<<CSO); //preesacaldor n=1024

  TIMSK1|=(1<<OCIE1A); //Habilitamos interrupciones timer compaA

  sei(); //habilita interrupciones

}

void loop() {
  PORTD=cuenta; //se muestra la cuenta

}

ISR(TIMER1_COMPA_vect){
  cuenta++;
}