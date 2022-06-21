#define vm 8
#define hm 9



void setup() {
  // put your setup code here, to run once:
pinMode(vm,OUTPUT);
pinMode(hm,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("---------XY plotter---------");
  delay(1000);
  void square();
  
}
void square(){
  analogWrite(vm,100);
  delay(1000);
  analogWrite(vm,0);
  delay(1000);
  analogWrite(hm,100);
  delay(1000);
  analogWrite(hm,0);
  delay(1000);
  analogWrite(vm,-100);
  delay(1000);
  analogWrite(vm,0);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(hm,100);
  delay(1000);
  analogWrite(hm,0);

  
}
void rectangle(){
  analogWrite(vm,100);
  analogWrite(hm,200);
  analogWrite(vm,-100);
  analogWrite(hm,-200);
}
void SIS(){
  analogWrite(hm,100);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(vm,-100);
  delay(1000);
  analogWrite(hm,100);
  delay(1000);
  analogWrite(vm,-100);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(hm,200);
  delay(1000);
  analogWrite(vm,100);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(hm,200);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(vm,-100);
  delay(1000);
  analogWrite(hm,100);
  delay(1000);
  analogWrite(hm,100);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(vm,-100);
  delay(1000);
  analogWrite(hm,100);
  delay(1000);
  analogWrite(vm,-100);
  delay(1000);
  analogWrite(hm,-100);
  delay(1000);
  analogWrite(hm,100);

  
}

