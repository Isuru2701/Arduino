void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop(){
  // put your { main code here, to run repeatedly:
digitalWrite(9,HIGH);
delay(7000);
digitalWrite(9,LOW);
delay(7000);
digitalWrite(10,HIGH);
delay(7000);
digitalWrite(10,LOW);
delay(7000);
}
