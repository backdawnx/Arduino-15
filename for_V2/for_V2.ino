int LED[] = {17,2,15,12};
int x;

void setup() {
  Serial.begin(9600);
  pinMode(LED[0],OUTPUT);
  pinMode(LED[1],OUTPUT);
  pinMode(LED[2],OUTPUT);
  pinMode(LED[3],OUTPUT);
  digitalWrite(LED[0],HIGH);
  digitalWrite(LED[1],HIGH);
  digitalWrite(LED[2],HIGH);
  digitalWrite(LED[3],HIGH);

    Serial.println(x);
    for(x=0 ; x<=3 ; x++){
    digitalWrite(LED[x],LOW);
    delay(100);
    digitalWrite(LED[x],HIGH);
    delay(100); 
  }
    for(x=3 ; x>=0 ; x--){
    digitalWrite(LED[x],LOW);
    delay(100);
    digitalWrite(LED[x],HIGH);
    delay(100);
  }

}

void loop() {
//  for(x=0 ; x<=3 ; x++){
//    digitalWrite(LED[x],LOW);
//    delay(100);
//    digitalWrite(LED[x],HIGH);
//    delay(100); 
//  }
//    for(x=3 ; x>=0 ; x--){
//    digitalWrite(LED[x],LOW);
//    delay(100);
//    digitalWrite(LED[x],HIGH);
//    delay(100);
//  }
  

}
