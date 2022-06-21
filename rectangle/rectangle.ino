//rightpin=9
//leftpin=10
//uppin=11
//downpin=12
void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
rectangle();
}
void rectangle(){
digitalWrite(9,HIGH);//right
delay(5000);
digitalWrite(9,LOW);
delay(5000);
digitalWrite(12,HIGH);//down
delay(5000);
digitalWrite(12,LOW);
delay(5000);
digitalWrite(10,HIGH);//left
delay(5000);
digitalWrite(10,LOW);
delay(5000);
digitalWrite(11,HIGH);//up
delay(5000);
digitalWrite(11,LOW);
}
