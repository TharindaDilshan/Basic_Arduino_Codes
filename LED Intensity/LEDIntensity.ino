void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int potValue = analogRead(A0);
  Serial.println(potValue);
  analogWrite(3, potValue/4);

}
