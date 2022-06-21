void setup() {
  // put your setup code here, to run once:
esplora
}

void loop() {
  // put your main code here, to run repeatedly:
 Esplora.writeRGB(255, 0, 0);
 delay(1000); 
 Esplora.writeRGB(0, 255, 0);
 delay(1000);
 Esplora.writeRGB(0, 0, 255);
 delay(1000);
 Esplora.writeRGB(255, 255, 0);
 delay(1000);                 
  Esplora.writeRGB(0, 255, 255);
  delay(1000);                  
  Esplora.writeRGB(255, 0, 255); 
  delay(1000);                  
  Esplora.writeRGB(255, 255, 255); 
  delay(1000);                  
}
