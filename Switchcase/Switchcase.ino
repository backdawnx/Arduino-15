int iot = 12;
int ntp = 15;
int sw1 = 16;
int sw2 = 14;
char key;

void setup() {
  Serial.begin(9600);
  pinMode(iot,OUTPUT);
  pinMode(ntp,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  digitalWrite(iot,HIGH);
  digitalWrite(ntp,HIGH);

}

void loop() {
  key = Serial.read();
  Serial.println(key);
  delay(1000);
  switch(key){
  case 'a': digitalWrite(iot,LOW);
 //           digitalWrite(ntp,LOW);
            Serial.println("IOT ON");
  delay(1000);
         break;
  case 'b': digitalWrite(ntp,LOW);
 //           digitalWrite(iot,LOW);
            Serial.println("NTP ON");
  delay(1000);
         break;
  default:digitalWrite(iot,HIGH);
          digitalWrite(ntp,HIGH);
          Serial.println("ALL OFF");
  delay(1000);
   }
}  
