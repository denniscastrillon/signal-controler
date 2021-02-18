#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
 float raw_input=analogRead(A0) * (5.0/1023);


}