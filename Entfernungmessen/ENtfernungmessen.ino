int zeit=0;
void setup() {
  // put your setup code here, to run once:
  //pin 5 tricker schall losschicken
  //pin 4 empfängt schall
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,HIGH);
  delay(5);
  digitalWrite(5,LOW);
  while(digitalRead(4)==LOW){
      zeit=zeit+1;
    }
  Serial.print(zeit);
  digitalWrite(5,LOW);
  delay(5000);
  zeit=0;
}
