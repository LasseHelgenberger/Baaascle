int zeit=0;
void setup() {
  // put your setup code here, to run once:
  //pin 5 tricker schall losschicken
  //pin 4 empfängt schall
  pinMode(5,OUTPUT);
  pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  while(digitalRead(4)==LOW){
      zeit=zeit+1;
    }
  Serial.print(zeit);
  digitalWrite(5,LOW);
}
