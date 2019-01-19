int a;
void setup() {
  // put your setup code here, to run once:
  pinMode(22,OUTPUT);
  a=0;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(22,HIGH);
  delay(a);
  digitalWrite(22,LOW);
  a=a+1000;
  delay(a);
}
