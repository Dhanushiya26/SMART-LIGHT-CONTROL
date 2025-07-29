TASK-1:SMART LIGHT CONTROL

COMPANY:CODTECH IT SOLUTION

NAME:V.DHANUSHIYA

INTERN ID: CT04DH2000

DOMAIN:INTERNET OF THINGS

DURATION:4 WEEKS

MENTOR:NEELA SANTHOSH

This project is part of the CodTech IoT Internship.  

It demonstrates how to control an LED connected to an Arduino board using text commands entered in the Serial Monitor.

- Arduino Uno
- 1 x LED
- 1 x 220Ω Resistor
- Breadboard (optional)
- Jumper wires

Instead of using a physical switch or a mobile app, this project uses the Serial Monitor to simulate LED control.

When the user types `"ON"` or `"OFF"` in the monitor, the LED turns on or off accordingly.

- LED anode (+) connected to Pin 13 of Arduino
 
- LED cathode (-) connected to GND through a 220Ω resistor

- code summary
  
The Arduino listens for text input via serial.
- `"ON"` → LED turns ON
- `"OFF"` → LED turns OFF
- Any other input → Shows error message

1. Upload the `task1_led_serial.ino` file to your Arduino board
2. Open the Serial Monitor (baud rate 9600)
3. Type `ON` and press Enter → LED turns ON
4. Type `OFF` → LED turns OFF

Simulation link

https://www.tinkercad.com/things/9XFoESgUumd-task-2-home-automation-system-/editel?sharecode=xImQIR_zCRe_O2gg4Wf2u9Yo4RO-DI2TZxq2vEIrLuQ

OUTPUT

