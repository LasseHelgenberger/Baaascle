int zeit=0;
long entfernung=0;
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
  zeit=pulseIn(4,HIGH);
  entfernung=zeit/2*0.03432;
  Serial.print("Entfernung:");
  Serial.println(entfernung);
  zeit=0;
  entfernung=0;
  delay(1000);
}
