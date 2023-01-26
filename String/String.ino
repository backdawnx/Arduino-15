String str = "CDTI \n";
String name1 = "Tananchai Chairaeng";
int age = 15;
float gpa = 3.51;


void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(str);
  Serial.println("Name: "+name1);
  Serial.println("Age: "+String(age)+"Y");
  Serial.println("GPA: "+String(gpa));
  delay(1000);

}
