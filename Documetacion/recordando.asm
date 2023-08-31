
start:
	ldi r16, 0x00
	out DDRD, r16; d entradas
	ldi r16, 0xFF
	out DDRB, r16; b: salidas

lectura: 
	in r16, PIND; LEEMOS LO QUE ENTRA EN D 
	neg r16,
	sbic r16, 0; si el lsb es cero--> es par 
	rjmp lectura;

mostrar: 
	out PORTB,r16
	rjmp mostrar
