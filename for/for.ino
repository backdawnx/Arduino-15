int iot = 12;


void setup() {
  Serial.begin(9600);
  pinMode(iot,OUTPUT);
  for(int i=0 ; i<20 ;i++ ){
    Serial.println(i);
    digitalWrite(iot,LOW);
    delay(300);
    digitalWrite(iot,HIGH);
    delay(300);
  }
}

void loop() {


}
