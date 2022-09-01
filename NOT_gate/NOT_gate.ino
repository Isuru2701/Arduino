#define S1 6
#define OUT 9

void setup() {
  // put your setup code here, to run once:

  pinMode(S1,INPUT);
  pinMode(OUT,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  
  if(digitalRead(S1) == HIGH) {
    digitalWrite(OUT, LOW);
    Serial.println("TRUE");
  }
  else{
    digitalWrite(OUT,HIGH);
    Serial.println("FALSE");
  }
}
