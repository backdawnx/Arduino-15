int BT = 17; //front
int WIFI = 2; //back
int NTP = 15; //front
int IOT = 12; //back
int sw1 = 16;
int sw2 = 14;

void setup() {
  pinMode(BT,OUTPUT);
  pinMode(WIFI,OUTPUT);
  pinMode(NTP,OUTPUT);
  pinMode(IOT,OUTPUT);

}

void loop() {
  forward();
  delay(1000);
  backward();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
  st();
  delay(5000);


void forward(){
  digitalWrite(BT,HIGH);
  digitalWrite(WIFI,LOW);
  digitalWrite(NTP,HIGH);
  digitalWrite(IOT,LOW);
}

void backward(){
  digitalWrite(BT,LOW);
  digitalWrite(WIFI,HIGH);
  digitalWrite(NTP,LOW);
  digitalWrite(IOT,HIGH);
}

void left(){
  digitalWrite(BT,LOW);
  digitalWrite(WIFI,HIGH);
  digitalWrite(NTP,HIGH);
  digitalWrite(IOT,LOW);
}

void right(){
  digitalWrite(BT,HIGH);
  digitalWrite(WIFI,LOW);
  digitalWrite(NTP,LOW);
  digitalWrite(IOT,HIGH);
}

void st(){
  digitalWrite(BT,HIGH);
  digitalWrite(WIFI,HIGH);
  digitalWrite(NTP,HIGH);
  digitalWrite(IOT,HIGH);
}
