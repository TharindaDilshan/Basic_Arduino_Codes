int pins[6] = {2,3,4,5,6,7};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(pins[i], OUTPUT);
  }

}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(pins[i], HIGH);
    delay(1000);
    digitalWrite(pins[i], LOW);
    
  }

  for (int i = 4; i > 0; i--) {
    digitalWrite(pins[i], HIGH);
    delay(1000);
    digitalWrite(pins[i], LOW);
    
  }

}
