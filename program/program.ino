#define Black LOW
#define White HIGH

#define leftInput 8
#define rightInput 9

#define LMotor 11
#define RMotor 10

#define trigPin 13
#define echoPin 12

bool L_colour;
bool R_colour;


long duration;
long distance;

void setup() {
  Serial.begin(19200);
  pinMode(LMotor,OUTPUT);
  pinMode(RMotor,OUTPUT);
  
  Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
}

void loop(){
  Lsensor_convert_to_colour();
  Rsensor_convert_to_colour();
  ReadDistance();
  Serial.print(" L :");Serial.print(L_colour);Serial.print(" R :");Serial.println(R_colour);
  

   if(distance < 10)
     {     LeftMotor_ON();  // Stop when Obstacle ditects
           RightMotor_OFF();         
            delay(50);          
     }
     
  else {     // line follow

        if(L_colour == Black && R_colour == White)
          {  LeftMotor_OFF();
             RightMotor_ON();
          }

          if(L_colour == White && R_colour ==Black)
          {    LeftMotor_ON();
          RightMotor_OFF();
          }
      }
// If Robot detect the Obstacle --> Turn Right

     
    
 // ---------------------------------------

     
    delay(50);
}
     
void Lsensor_convert_to_colour()
{
 if(digitalRead(leftInput == HIGH))
     {L_colour = White;}
     else
     {L_colour = Black;}
}

void  Rsensor_convert_to_colour()
{
  if(digitalRead (rightInput == HIGH))
  { R_colour = White;}
  else
  { R_colour = Black;}
}
 

void LeftMotor_ON()
{
  analogWrite(LMotor,55);
}

void LeftMotor_OFF()
{
  analogWrite(LMotor,25);
}

void RightMotor_ON(){
  analogWrite(RMotor,50);
}

void RightMotor_OFF(){
  analogWrite(RMotor,25);
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


 




