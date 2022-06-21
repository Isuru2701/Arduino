int analogValue;
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   pinMode(13,OUTPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("HI Arduino");

analogValue=analogRead(A0);
Serial.println(analogValue);
delay(1000);
stop(100);
 
}
