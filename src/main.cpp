#include <Arduino.h>
// comentario de prueba 
void setup() {
  Serial.begin(115200);
  // Print log
  Serial.println("setup");
}

float i=0;
void loop() {
  //segundo coment

  i+=0.1; 


  // Print log
  Serial.print("loop");
  Serial.println(i);
  
  // Plot a sinus
  Serial.print(">sin:");
  Serial.println(sin(i));

  // Plot a cosinus
  Serial.print(">cos:");
  Serial.println(cos(i));
  Serial.print(">tan:");
  Serial.println(tan(i));

  delay(50);
}