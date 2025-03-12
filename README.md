# Bluetooth Mecanum Wheel Robot

This repository provides the necessary instructions and code to control a **Bluetooth-enabled robot** with **Mecanum wheels**. The robot can be controlled via Bluetooth commands sent from a mobile app or any Bluetooth-enabled device.

## Required Components
Here is the list of components you'll need for this project:

- **Arduino Uno**
- **Motor Driver**
- **4 DC Motors**
- **Mecanum Wheels (4 wheels)**
- **Bluetooth Module (HC-05 or HC-06)**
- **Power Supply/Battery**

## Circuit Connections
### Motor Driver to Arduino:
- **Motor A (Front Left):**
  - IN1 to pin 11
  - IN2 to pin 10
- **Motor B (Front Right):**
  - IN3 to pin 3
  - IN4 to pin 5
- **Enable Pins:**
  - ENA to pin 6
  - ENB to pin 9

### Bluetooth Module to Arduino:
- **TX** to RX (pin 0)
- **RX** to TX (pin 1)

### Power Supply:
- **Power to the motor driver and Arduino**

## Code
The code for controlling the robot via Bluetooth commands is provided in the `robot_bluetooth_mecanum.ino` file.

## App for Control

For controlling the car, you can use the **Bluetooth RC Controller** you can download it from [here](https://bluetooth-rc-car.fr.softonic.com/android).
