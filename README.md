# Raspberry Pi, meet Arduino

Connecting the Arduino to Raspberry Pi - Article for Hackspace

Here you'll find the listings featured in the above article.

- Listing 1- ard2pi
- Listing 2 - ard2pi_12c
- Listing 3 - readi2c.py

The first two listings should be opened in the Arduino IDE and 'flashed' to your Arduino.

For the Python script to work on the raspberry Pi, you need to ensure 'smbus' is installed:

```
sudo apt install python3-pip
pip3 install smbus
```

You will now be able to run the I2C 'listener':

```
python3 readi2c.py
```
