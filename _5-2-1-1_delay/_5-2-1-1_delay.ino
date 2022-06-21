void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
delay(500);
digitalWrite(13,LOW);
delay(200);
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
}
