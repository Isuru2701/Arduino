
#define S1 6
#define S2 7
#define OUT 13

bool Var_S1;
bool Var_S2;

void setup() {
  // put your setup code here, to run once:
pinMode(S1,INPUT);
pinMode(S2,INPUT);
pinMode(OUT,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

Var_S1=digitalRead(S1);
Var_S2=digitalRead(S2);

if(Var_S1 || Var_S2)
{
  digitalWrite(OUT,HIGH);
}
else{
  digitalWrite(OUT,LOW);
}
}
