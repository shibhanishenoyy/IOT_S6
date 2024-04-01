// second program blinking of LED light
int ledPin1=7;
int ledPin2=8;


void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(ledPin1, LOW);   // turn the LED off by making the voltage LOW
  delay(100);

  digitalWrite(ledPin2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(ledPin2, LOW);   // turn the LED off by making the voltage LOW
  delay(100);

}
