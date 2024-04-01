#include "NewPing.h"

#define TRIGGER_PIN 9
#define ECHO_PIN 10

#define MAX_DISTANCE 100

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    Serial.print("Dist= ");
    Serial.print(sonar.ping_cm());
    Serial.println(" cm");
    delay(500);
}
