#include <Arduino.h>
#include <config.h>
#include <processors/transformer.h>
#include <processors/aggregator.h>


void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
 float raw_input=analogRead(CONFIG::SENSOR_INPUT) * (5.0/1023);
 float processed_signal = OffSetTransformer::transform(raw_input);
 float average_window = Aggregator::averaged_window(raw_input);
 Serial.println(raw_input);
 Serial.println(processed_signal);
 Serial.println(average_window);
 Serial.println("------------------");
 delay(1000);

}