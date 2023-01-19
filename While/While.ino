int iot = 12;

void setup() {
  pinMode(iot,OUTPUT);
  digitalWrite(iot,HIGH);

}

void loop() {
  int x = 10;
  while(x >= 0){
    digitalWrite(iot,LOW);
    delay(500);
    digitalWrite(iot,HIGH);
    delay(500);
    x--;
    
    }
  }
