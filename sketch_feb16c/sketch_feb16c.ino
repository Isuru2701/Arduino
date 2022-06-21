#define LMotor 11
#define RMotor 10

#define trigPin 13
#define echoPin 12

short duration;
short distance;
/*anti collision sytems-completed and fully functional*/
void setup() {
  Serial.begin(19200);
  pinMode(LMotor,OUTPUT);
  pinMode(RMotor,OUTPUT);
  
  Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);

}

void loop(){
  ReadDistance();
  
   if(distance >20 )
     {     LeftMotor_ON();  // Stop when Obstacle ditects
           RightMotor_ON();         
            delay(1000);
            Serial.println(distance);          
     }
     
  else { if(distance <= 20)
          {    LeftMotor_OFF();
          RightMotor_OFF();
          Serial.println(distance);
          
          }
      }
// If Robot detect the Obstacle --> Stop
     
    
 // ---------------------------------------

     
    delay(50);
}
     


void LeftMotor_ON()
{
  analogWrite(LMotor,45);
  delay(1);
}
void LeftMotor_OFF()
{
  analogWrite(LMotor,0);
  delay(1);
}

void RightMotor_ON(){
  analogWrite(RMotor,45);
  delay(1);
}

void RightMotor_OFF(){
  analogWrite(RMotor,0);
  delay(1);
}


void ReadDistance()

{
   
    digitalWrite(trigPin,LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin,LOW);
    duration = pulseIn(echoPin,HIGH);
    distance = (duration/2)/ 29.1;
}
