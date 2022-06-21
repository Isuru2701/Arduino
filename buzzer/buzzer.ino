void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(5,100);
delay(50);
Serial.println(100);
analogWrite(5,0);
delay(50);
analogWrite(5,75);
delay(50);
Serial.println(75);
analogWrite(5,0);
delay(50);
analogWrite(5,50);
delay(50);
Serial.println(50);
analogWrite(5,0);
delay(50);
analogWrite(5,25);
delay(50);
Serial.println(25);
analogWrite(5,0);
delay(50);
analogWrite(5,15);
Serial.println(15);
delay(50);
analogWrite(5,0);
delay(50);
}
