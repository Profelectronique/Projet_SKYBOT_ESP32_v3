///////////// Chenillard dans un sens ////////////
#include <Arduino.h>
int led1=1;
int led2=2;
int led3=3;
int led4=4;

int temps = 200;

void setup()
 {
 pinMode(led1 , OUTPUT);
 pinMode(led2 , OUTPUT);
 pinMode(led3 , OUTPUT);
 pinMode(led4 , OUTPUT);
 }
void loop()
 {
 digitalWrite(led, HIGH);// Ecrit la valeur HIGH (=1) sur la broche GPIO16
 delay(500); // Attendre 500ms
 digitalWrite(led, LOW); // Ecrit la valeur LOW (=0) sur la broche GPIO16
 delay(500);
