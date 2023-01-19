#include<analogWrite.h>
int BT = 17; //frontL
int WIFI = 2; //backL
int NTP = 15; //frontR
int IOT = 12; //backR


void setup() {
  pinMode(IOT,OUTPUT);

}

void loop() {
  for(int x=0 ; x<=255 ; x++ ){
  analogWrite(IOT,x);
  delay(7);
  }
  for(int x=255 ; x>=0 ; x-- ){
  analogWrite(IOT,x);
  delay(7);
  }
}
