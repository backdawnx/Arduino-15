int iot = 12;
int NTP = 15;
int wifi = 2;
int BT = 17;

void setup() {
  pinMode(iot,OUTPUT);
  pinMode(NTP,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(BT,OUTPUT);

}

void loop() {
  iotblink();
  NTPblink();
  wifiblink();
  BTblink()

}

void iotblink(){

  digitalWrite(iot,LOW);
  delay(500);
  digitalWrite(iot,HIGH);
  delay(500);
}

void NTPblink(){

  digitalWrite(NTP,LOW);
  delay(500);
  digitalWrite(NTP,HIGH);
  delay(500);
}

void wifiblink(){

  digitalWrite(wifi,LOW);
  delay(500);
  digitalWrite(wifi,HIGH);
  delay(500);
}

void BTblink(){

  digitalWrite(BT,LOW);
  delay(500);
  digitalWrite(BT,HIGH);
  delay(500);
}
