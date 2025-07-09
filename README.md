# MultiButtonOutput

## Description
This Arduino project controls different outputs using three push buttons. Each button is connected to a separate output.

## Components
- Arduino Uno
- 3 Push Buttons
- 3 Outputs (2 LED and 1 Buzzer)
- 2 Resistors for LEDs
- 3 Resistors for Buttons
- Breadboard
- Jumper Wires
- USB Cable

## Circuit Overview
- Each push button is connected to a digital input pin with a pull-down resistor to ensure stable readings.
- Each output device (two LEDs and one buzzer) is connected to a digital output pin with current-limiting resistors for LEDs.
- The Arduino reads the state of each button and activates the corresponding output when pressed.

## How It Works
1. The Arduino continuously checks the state of all three buttons.
2. When a button is pressed, it activates its assigned output.
3. When the button is released, the output turns OFF.
