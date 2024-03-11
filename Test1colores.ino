/*
* Programa que mapea a entrada dun potenciómetro a cinco cores.
* Usaremos un LED RGB para a simulación dun control mediante
* potenciómetr, de maneira que este actúe como entrada e
* a saída sexa un número determinado de niveis (de detección), que
* simularemos con cores diferentes.
*
* Autor Pablo Cameán Garrido
* Data: Marzo de 2024
* Actualización:
*/

// Declaración de entradas analóxicas
#define POT A0

// Declaración de saídas analóxicas
#define ledR 6
#define ledG 3
#define ledB 5

// #define ANODO_COMUN

// Declaración de variables
int tempo = 2000;
int pot = 0;
int nivel = -1;
int niveis = 3; //Número de valores que toma a variable nivel
unsigned long nCores = (unsigned long) 256*256*256;
unsigned long cor = -1;

// Cores RGB: 256*256*256 = 16777216

void setup() {
  // Non é preciso declarar as entradas ou saídas analóxicas
  Serial.begin(9600);
}

void loop() {
  // Ler o valor do potenciómetro
  pot = analogRead(POT);
  Serial.print("Valor lido "); Serial.println(pot);
        Serial.print("Cor:"); Serial.println(cor);
  //delay(tempo);
  // Asignar un nivel (unha cor) (catro niveis)
  // Escribir o valor no LED RGB
  if(pot == 0) {
    setRGBoff();
  }
 
  else if(pot >= 0 && pot <204) {
    // Encenda vermello
    setVermello();
  }
   else if(pot >= 408 && pot < 612) {
    // Encenda verde
     setVerde();
  }
   else if(pot >= 612 && pot < 816) {
    // Encenda azul
     setAzul();
  }
   else {
    // Encenda blanco
     setBranco();
  }
}

// Función auxiliares
void setVermello() {
 setColor(255, 0, 0); 
}

void setVerde() {
 setColor(0, 255, 0); 
}

void setAzul() {
 setColor(0, 0, 255); 
}

void setBranco() {
 setColor(255, 255, 255); 
}
void setRGBoff() {
 setColor(0, 0, 0); 
}

void setColor(int vermello, int verde, int azul) {
  analogWrite(ledR, vermello);
  analogWrite(ledG, verde);
  analogWrite(ledB, azul);
}
