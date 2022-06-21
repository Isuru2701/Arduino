#define trigPin 13
#define echoPin 12


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
long duration,distance;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
distance = (duration/2)/ 29.1;
delay(300);

  if(distance<=10)
  (digitalWrite(11,HIGH));
  else(digitalWrite(11,LOW));
  if(distance<=20)
  (digitalWrite(1,HIGH));
  else(digitalWrite(1,LOW));
  if(distance<=30)
  (digitalWrite(9,HIGH));
  else(digitalWrite(9,LOW));
  if(distance<=40)
  (digitalWrite(8,HIGH));
  else(digitalWrite(8,LOW));
if(distance<=50)
  (digitalWrite(7,HIGH));
  else(digitalWrite(7,LOW));
}
