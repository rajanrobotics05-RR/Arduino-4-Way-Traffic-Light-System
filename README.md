🚦 Project Overview

The Arduino-Based 4-Way Traffic Light Control System is a beginner-friendly electronics and embedded systems project developed by Rajan Robotics.

This project demonstrates how an Arduino UNO can control four traffic signal modules representing the North, South, East, and West directions of a road intersection.

The system operates in a sequential manner. One direction receives a GREEN signal while the remaining three directions display RED. A YELLOW signal indicates the transition before the next direction gets permission to move.

🎯 Project Objectives

- Understand Arduino digital input/output operations.
- Learn traffic signal sequencing.
- Explore embedded C programming.
- Understand real-world traffic signal control logic.
- Develop practical electronics and prototyping skills.

Developed by: Rajan Robotics
Tagline: Vision to Reality

![Rajan Robotics - Arduino Traffic Light Prototype](RR_Arduino_traffic_signal.png)

*Figure 1: Arduino-Based 4-Way Traffic Light Prototype developed by Rajan Robotics.*

🧰 Components Required

The following components are used to build the 4-way traffic light prototype.

S.No.| Component| Quantity
1| Arduino UNO| 1
2| 3-LED Traffic Light Module (Red, Yellow, Green)| 4
3| Mini Breadboard| 4
4| Male-to-Male Jumper Wires| As required
5| USB Cable| 1
6| Computer with Arduino IDE| 1

🛠️ Software Requirements

- Arduino IDE
- Arduino UNO Board Package
- USB Driver (if required)

Note: The Arduino UNO is powered through USB or a suitable 5V supply. Check whether the traffic-light modules have built-in current-limiting resistors.


🔌 Circuit Connections

Each traffic-light module has three control inputs:

- Red (R)
- Yellow (Y)
- Green (G)

Arduino UNO Pin Mapping

Direction| Red| Yellow| Green
North| D2| D3| D4
East| D5| D6| D7
South| D8| D9| D10
West| D11| D12| D13

Common Connections

- Connect all module GND pins to Arduino GND.
- Connect each signal input to its corresponding Arduino digital pin.
- Connect Arduino UNO to the computer using a USB cable.

Important

Verify the traffic-light module pinout before connecting. If the modules do not have built-in current-limiting resistors, use suitable external resistors for the LEDs.

Controller: Arduino UNO
Number of traffic-light modules: 4
Total signal outputs: 12


⚙️ Working Principle

The system controls four traffic signals independently: North, East, South, and West.

The traffic lights operate sequentially, allowing only one direction to receive a GREEN signal at a time. The remaining three directions display RED.

🚦 Traffic Signal Sequence

Step| North| East| South| West| Duration
1| GREEN| RED| RED| RED| 5 sec
2| YELLOW| RED| RED| RED| 2 sec
3| RED| GREEN| RED| RED| 5 sec
4| RED| YELLOW| RED| RED| 2 sec
5| RED| RED| GREEN| RED| 5 sec
6| RED| RED| YELLOW| RED| 2 sec
7| RED| RED| RED| GREEN| 5 sec
8| RED| RED| RED| YELLOW| 2 sec

After completing all four directions, the sequence repeats continuously.

Key Features

- Independent control of four traffic signals.
- Three RED signals remain ON while one direction is active.
- Automatic sequential operation.
- Adjustable GREEN and YELLOW timings.
- Simple Arduino-based control logic.
