#define Black LOW
#define White HIGH

#define leftInput 8
#define rightInput 9

#define LMotor 11
#define RMotor 10

bool L_colour;
bool R_colour;

void setup() {
  
  pinMode(LMotor,OUTPUT);
  pinMode(RMotor,OUTPUT);
  Serial.begin(9600);
}

void loop()
{

  Lsensor_convert_to_colour();
  Rsensor_convert_to_colour();

  Serial.print(" L :");Serial.print(L_colour);Serial.print(" R :");Serial.println(R_colour);

  if(L_colour == White && R_colour == White)
   {  LeftMotor_OFF();
      RightMotor_ON();
   }

    if(L_colour == Black && R_colour ==Black)
     {    LeftMotor_ON();
          RightMotor_OFF();
     }
     delay(50);
     
}


void Lsensor_convert_to_colour()
{
 if(digitalRead(leftInput == HIGH))
     {L_colour = White;}
     else
     {L_colour = Black;}
}

 void Rsensor_convert_to_colour()
{
  if(digitalRead (rightInput == HIGH))
  { R_colour = White;}
  else
  { R_colour = Black;}
}



void LeftMotor_ON()
{
  analogWrite(LMotor,1);
}

void LeftMotor_OFF()
{
  analogWrite(LMotor,0);
}

void RightMotor_ON()
{
  analogWrite(RMotor,1);
}
void RightMotor_OFF()
{
  analogWrite(RMotor,0);
}

