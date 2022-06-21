#define LED  8//substitute some text to NO
#define Switch 9

void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(Switch,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(Switch)==HIGH)
{   digitalWrite(LED,1);
}
else {
 digitalWrite(LED,0);
}
}

