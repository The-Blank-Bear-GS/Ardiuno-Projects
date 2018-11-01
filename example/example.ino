void setup() 
{
  Serial.begin(57600);
}

void loop() 
{
  Serial.print("Hello");
  Serial.println("World.");
  delay(500);
}
