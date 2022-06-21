void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.begin(19200);
Serial.println("Function");
Serial.println("Function2");
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
            function_Pattern1();
            delay(1000);
            function_Pattern2();
            delay(1000);
            function_Pattern3();
            delay(1000); 
                  function2_Pattern1();
            delay(1000);
            function2_Pattern2();
            delay(1000);
            function2_Pattern3();
            delay(1000);             
            }
            
            
void function_Pattern1()
{
  Serial.println("This is Function 1");
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
void function_Pattern2()
{
  Serial.println("This is Function 2");
  digitalWrite(13,HIGH);
  delay(300);
  digitalWrite(13,LOW);
  delay(300);
}
void function_Pattern3()
{
  Serial.println("This is Function 3");
  digitalWrite(13,HIGH);
  delay(400);
  digitalWrite(13,LOW);
  delay(100);
}
void function2_Pattern1()
{
  Serial.println("This is Function 1");
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
void function2_Pattern2()
{
  Serial.println("This is Function 2");
  digitalWrite(13,HIGH);
  delay(300);
  digitalWrite(13,LOW);
  delay(300);
}
void function2_Pattern3()
{
  Serial.println("This is Function 3");
  digitalWrite(13,HIGH);
  delay(400);
  digitalWrite(13,LOW);
  delay(100);
}


