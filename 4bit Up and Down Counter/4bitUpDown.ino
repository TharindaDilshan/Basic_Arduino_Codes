int lock = 0;
int button = 3;
int m = 0;
int n = 0;
void setup() {
  for(int i=6;i<10;i++){
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600);
  pinMode(button, INPUT);
  attachInterrupt(digitalPinToInterrupt(3), kickButt, RISING);

}

void loop() {
  n = m;
  if(n >= 8){
    n = n%8;
    digitalWrite(9, HIGH);
  }
  if(n >= 4){
    n = n%4;
    digitalWrite(8, HIGH);
  }
  if(n >=2 ){
    n = n%2;
    digitalWrite(7, HIGH);
  }
  if(n >= 1){
   digitalWrite(6, HIGH);  
  }
  Serial.print(m);
  delay(1000);
  for(int i=6;i<10;i++){
    digitalWrite(i, LOW);
  }

  if(!lock){
    m++;
    if(m > 15){
      m = 0;  
    }
  }else{
    m--;
    if(m < 0){
      m = 15;  
    }    
  }
}

void kickButt(){
  lock = !lock;  
}
