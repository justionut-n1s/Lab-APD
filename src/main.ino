// main.ino – schelet de firmware pentru nodul de achiziție
#include "config.h"
void setup() {
Serial.begin(SERIAL_BAUD); // inițializăm portul serial
}
void loop() {
int raw = analogRead(SENSOR_PIN); // citim valoarea brută a ADC (0..1023)
Serial.println(raw); // o trimitem spre calculator
delay(SAMPLE_PERIOD_MS); // așteptăm până la următoarea măsurare
}
