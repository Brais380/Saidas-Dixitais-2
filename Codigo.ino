/*
Practica informatica de dous leds que se encenden es e apagan alternativamente  
Autor: Brais Rey Miron
Data: 12/12/2024
*/
// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(12, LOW); //Apagado do pin 12 e Encendio do pin 13 
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(10000); //Espera 10 segundo(s)
  digitalWrite(LED_BUILTIN, LOW); //Apagado pin 13 e Encendido pin 12
  digitalWrite(12, HIGH); 
  delay(4000); //Espera 4 segundos(s)
}
