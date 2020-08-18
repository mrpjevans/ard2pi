#include <Wire.h>

//PhotoResistor Pin (A0)
int lightPin = 0;

void setup() {

  // Start i2c and set my address to 8
  Wire.begin(0x08);

  // When a request is made, call this function
  Wire.onRequest(sendData);

}

// Don't do anything in the loop
void loop() {
  delay(100);
}


// Send the current reading to the requester
void sendData(){
  int lightLevel = analogRead(lightPin);
  Wire.write(lightLevel);
}
