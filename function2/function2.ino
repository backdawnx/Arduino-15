int iot = 12;
int ntp = 15;

void setup() {
  pinMode(iot,OUTPUT);
  pinMode(ntp,OUTPUT);

}


void loop() {
  iotblink();
  NTPblink();


}

void iotblink(){

  digitalWrite(iot,LOW);
  delay(500);
  digitalWrite(iot,HIGH);
  delay(500);
}

void NTPblink(){

  digitalWrite(ntp,LOW);
  delay(500);
  digitalWrite(ntp,HIGH);
  delay(500);
}
