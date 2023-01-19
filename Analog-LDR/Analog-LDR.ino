#include<analogWrite.h>
int BT = 17; //frontL
int WIFI = 2; //backL
int NTP = 15; //frontR
int IOT = 12; //backR
int LDR = 36;


void setup() {
  Serial.begin(9600);
  pinMode(LDR,INPUT_PULLUP);
  pinMode(BT,OUTPUT);
  pinMode(WIFI,OUTPUT);
  pinMode(NTP,OUTPUT);
  pinMode(IOT,OUTPUT);

}

void loop() {
  int val = map(analogRead(LDR),600,900,1,4);
  Serial.println(val);
    
    if(val == 1 ){
    digitalWrite(BT,HIGH);
    digitalWrite(WIFI,LOW);
    digitalWrite(NTP,LOW);
    digitalWrite(IOT,LOW);
  }
  else if(val == 2 ){
    digitalWrite(BT,LOW);
    digitalWrite(WIFI,HIGH);
    digitalWrite(NTP,LOW);
    digitalWrite(IOT,LOW);
  }
  else if(val == 3 ){
    digitalWrite(BT,LOW);
    digitalWrite(WIFI,LOW);
    digitalWrite(NTP,HIGH);
    digitalWrite(IOT,LOW);
  }
  else if(val == 4 ){
    digitalWrite(BT,LOW);
    digitalWrite(WIFI,LOW);
    digitalWrite(NTP,LOW);
    digitalWrite(IOT,HIGH);
  }
    else{
    digitalWrite(BT,HIGH);
    digitalWrite(WIFI,HIGH);
    digitalWrite(NTP,HIGH);
    digitalWrite(IOT,HIGH);
  }

}
