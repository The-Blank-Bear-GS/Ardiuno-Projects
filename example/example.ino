void setup() 
{
  Serial.begin(57600);
}

void loop() 
{
  Serial.print("Hello"); //Print hello
  Serial.println("World."); //Print World and drop a line
  delay(1750); //Delay for 1.75 seconds
}
