import smbus
import time
bus = smbus.SMBus(1)

# This is the address we setup in the Arduino Program
address = 0x08

def requestData():
  bus.write_byte(address, 0)

def readValue():
  return bus.read_byte(address)

while True:
  
  # Send a 0 to trigger the Ardino's reading
  requestData()
  
  # Wait for a bit
  time.sleep(0.5)

  # Get the value from the Arduino
  number = readValue()
  print(number)
