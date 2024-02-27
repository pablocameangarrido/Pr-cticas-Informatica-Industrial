// C++ code
/* Nesta práctica simularemos o funcionamento da ventanilla dun coche
*  
*  Autor: Pablo Cameán Garrido
*/


#define PULS 10
#define MOTORUP 13
#define MOTORDOWN 12

void setup(){
  pinMode(PULS, INPUT_PULLUP);
  pinMode(MOTORUP, OUTPUT);
  pinMode(MOTORDOWN, OUTPUT);
}

void loop(){
  
      while(digitalRead(PULS) == 0){ //Mientras no se detecte pulso los motores estarán apagados
    	digitalWrite(MOTORDOWN, LOW);
      	digitalWrite(MOTORUP, LOW);
      }
    digitalRead(PULS) == 1;          // Cuando se detecte el primer pulso se encendera el motor de subida, durante 7 segundos, que es lo que tardaría en subir la ventanilla
    digitalWrite(MOTORUP, HIGH);
    delay(7000);
    digitalWrite(MOTORUP, LOW);     // Apágase aos 7 segundos, o que sería que chegou ao tope
  
  // Mismo proceso pero co motor de baixada

  while(digitalRead(PULS) == 0){    
    	digitalWrite(MOTORDOWN, LOW);
      	digitalWrite(MOTORUP, LOW);
      }
  
    digitalRead(PULS) == 1;
  	digitalWrite(MOTORDOWN, HIGH);
    delay(7000);
    digitalWrite(MOTORDOWN, LOW);

}
