int BT = 17;
int wifi = 2;
int NTP = 15;
int IOT = 12;

void setup() {
  pinMode(BT,OUTPUT);
  pinMode(wifi,OUTPUT);
  pinMode(NTP,OUTPUT);
  pinMode(IOT,OUTPUT);
}

void loop() {
  digitalWrite(IOT,HIGH);
  delay(500);
  digitalWrite(wifi,HIGH);
  delay(500);
  digitalWrite(NTP,HIGH);
  delay(500);
  digitalWrite(BT,HIGH);
  delay(1000);

  digitalWrite(IOT,LOW);
  delay(500);
  digitalWrite(wifi,LOW);
  delay(500);
  digitalWrite(NTP,LOW);
  delay(500);
  digitalWrite(BT,LOW);
  delay(1000);
}
