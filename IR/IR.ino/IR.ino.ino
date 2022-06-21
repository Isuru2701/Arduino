void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(13 == LOW))
 {
  Serial.println("1");
  delay(1000);
 }
 else{
 Serial.println("0");
 delay(1000);
 }

}
