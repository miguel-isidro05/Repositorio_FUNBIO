#include <avr/interrupt.h>

#define cbi (sfr, bit) (_SFR_BYTE(sfr) &=~ (1<< bit))
#define sbi (sfr, bit) (_SFR_BYTE(sfr) |= (1<< bit))

byte valoradc_sig;

void setup() {
Serial.begin(9600);
DDRC=0x00;
PORTC=0x0F; //pull apps para las entradas analagicas?

cbi (ADCSRA , ADEN); //DESAHIBILIAMOS EL ENABLE
cbi (ADCSRA , ADLAR); //LIMPIAMOS EL ADC

//habilitamos y establemos EL ADC
sbi (ADMUX , REFS0); //ELIGEMOS VOLTAJE DE 5V

sbi (ADCSRA , ADPS2); //DIVIDIMOS LA FREC ENTRE 16

sbi (ADCSRA , ADLAR); //usamos el adch para mostrar la conversion 

ADMUX &= (0xF0 << MUX0);  //ENMASCARAM y limpiamos EL CANAL
ADMUX |= (0<< MUX0); //(canal 0)

sbi (ADCSRA , ADEN); //habilitamos el enable
_delay_us(100) //esperamos 100 um

sbi (ADCSRA , ADSC); //damos inicio al adc
}

void loop() {
  Serial.print(valoradc_sig); //lo que se guarda en los 8 bit en adch
}
ISR(ADC_vector){
  valoradc_sig=ADCH
  cbi (ADCSRA , ADSC) //
  cbi (ADCSRA , ADIF) //se pone en reinio manualmete del adif
}

