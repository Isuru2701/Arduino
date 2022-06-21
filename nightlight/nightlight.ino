int DataVariable=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
DataVariable=analogRead(A0);

Serial.print("LDR data :");Serial.print(DataVariable);

if(DataVariable<500)
{   digitalWrite(13,1);
}
else
{   digitalWrite(13,0);
}

delay(1000);
}
