# Arduino HSV to RGB Converter

This project converts HSV (Hue, Saturation, Value) color values into RGB (Red, Green, Blue) values and displays the corresponding color using a single RGB LED connected to an Arduino board.

## Overview

HSV is a common way to represent colors based on their hue, saturation, and brightness, which is often more intuitive for humans than the RGB color model. This Arduino-based converter takes HSV inputs and calculates the equivalent RGB values to control the LED, showing the exact color visually.

## Features

- Inputs HSV color values via the serial monitor.
- Converts HSV to RGB using Arduino code.
- Controls an RGB LED connected to Arduino pins (typically pins 9, 10, and 11) through PWM to display the color.
- Includes resistor connections to protect the LED.
- Can be easily tested and simulated on platforms like Tinkercad.

## Hardware Required

- Arduino Uno (or any compatible Arduino board)
- Common cathode RGB LED
- 3 resistors (220Ω recommended)
- Connecting wires
- Breadboard 

## How to Use

1. Connect the RGB LED to Arduino pins with resistors according to the wiring diagram.
2. Upload the provided Arduino code (`hsvtorgb.ino`) to your Arduino board.
3. Open the serial monitor and input the HSV values when prompted.
4. The RGB LED will light up with the corresponding color.

## Learning Outcomes

- Understand the HSV and RGB color models.
- Learn basic Arduino programming with serial input.
- Practice PWM control for LED color mixing.
- Gain experience with hardware connections and circuit protection.

Feel free to explore, modify, and enhance this project!
