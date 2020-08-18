//PhotoResistor Pin (A0)
int lightPin = 0;
                 
void setup()
{
  // Set up serial port
  Serial.begin(115200);
}

void loop() {

  // Get the current reading
  int lightLevel = analogRead(lightPin);

  // Send it to the serial port
  Serial.println(lightLevel);

  // Wait a bit then repeat
  delay(500);
  
}
