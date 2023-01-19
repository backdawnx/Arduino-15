#define led1 12
#define led2 15
const int led3 = 2;
const int led4 =17;

void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT); 
 pinMode(led3,OUTPUT); 
 pinMode(led4,OUTPUT); 
}

void loop() {
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(400);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(400);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  delay(400);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  delay(400);
}
