int LED[] = {17,2,15,12};

void setup() {
  pinMode(LED[0],OUTPUT);
  pinMode(LED[1],OUTPUT);
  pinMode(LED[2],OUTPUT);
  pinMode(LED[3],OUTPUT);
  digitalWrite(LED[0],HIGH);
  digitalWrite(LED[1],HIGH);
  digitalWrite(LED[2],HIGH);
  digitalWrite(LED[3],HIGH);

}

void loop() {
  int x = 0;
  while(x < 4){
    digitalWrite(LED[x],LOW);
    delay(500);
    digitalWrite(LED[x],HIGH);
    delay(500);
    x++;
    
  }
}
