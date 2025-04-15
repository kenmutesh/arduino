void setup() {
 pinMode(8, OUTPUT);
 pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
delay(700);
  digitalWrite(12, HIGH);
  delay(500);

digitalWrite(8, LOW);
delay(700);
  digitalWrite(12, LOW);
  delay(500);


}