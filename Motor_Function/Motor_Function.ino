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
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);

}

void loop() {
 int a = digitalRead(sw1);
 int b = digitalRead(sw2);
 if (a == LOW){
 forward();
 }
 else if (b == LOW){
 backward();
 }
 else {
  st();
 }
}


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
