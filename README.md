# 🚦 Smart Traffic Light Controller Using ESP8266

A simple IoT-ready traffic light controller prototype built using an **ESP8266 NodeMCU** and three LEDs. The system demonstrates the sequential operation of red, green, and yellow traffic signals using programmed timing delays.

## 📌 Project Overview

This project demonstrates the basic working principle of a traffic light system using a microcontroller. The ESP8266 controls three LEDs in sequence, simulating the signals used to manage road traffic.

The project was developed as an Electronics and Communication Engineering (ECE) academic project.

## 🎯 Objectives

- Understand microcontroller-based control systems.
- Implement sequential switching of traffic signals.
- Learn GPIO output control using the ESP8266.
- Explore the fundamentals of embedded systems.

## 🛠️ Components Used

- ESP8266 NodeMCU development board
- Red LED
- Yellow LED
- Green LED
- 220 Ω current-limiting resistors
- Breadboard
- Jumper wires
- USB power supply
- Arduino IDE

## 🔌 Pin Connections

| Traffic Signal | ESP8266 Pin |
|---|---|
| Red LED | D5 |
| Yellow LED | D6 |
| Green LED | D7 |

**Note:** Each LED should have an appropriate current-limiting resistor. Verify the actual wiring against the source code before assembling the circuit.

## ⚙️ Working Principle

The ESP8266 controls the three LEDs through its digital output pins.

1. **Red signal:** The red LED turns ON for 5 seconds.
2. **Green signal:** The green LED turns ON for 5 seconds.
3. **Yellow signal:** The yellow LED turns ON for 5 seconds.
4. The sequence repeats continuously.

The program uses `digitalWrite()` to control the LEDs and `delay(5000)` to set each signal's duration.

## 💻 Software Used

- Arduino IDE
- ESP8266 board support package
- C/C++ (Arduino framework)
- GitHub for source-code hosting and project documentation

## 🚀 How to Use

1. Install the Arduino IDE.
2. Install ESP8266 board support through the Arduino IDE Boards Manager.
3. Open `Smart Traffic Light Controller.ino`.
4. Select the appropriate ESP8266 NodeMCU board and COM port.
5. Connect the LEDs according to the pin-connection table.
6. Upload the program to the ESP8266.
7. Observe the repeating traffic-light sequence.

**Hardware note:** The prototype was developed using a college-provided ESP8266 board. A compatible board is required to reproduce the physical demonstration.

## 🔮 Future Improvements

- Add vehicle detection using IR sensors.
- Implement pedestrian crossing control.
- Adjust signal duration based on traffic density.
- Add an IoT dashboard for remote monitoring.
- Develop a multi-directional traffic signal system.

## 📚 Learning Outcomes

- Microcontroller GPIO programming
- Sequential logic and timing control
- Embedded systems fundamentals
- Hardware-software integration
- Technical documentation and version control

## 👨‍💻 Project Status

**Status:** Basic prototype completed.

This repository contains the Arduino source code and project report. The current implementation demonstrates a basic timed traffic-light sequence and is not intended for deployment on real roads.

## 📄 Documentation

Refer to `Smart_Traffic_Light_Controller_Report_Final.docx` for the project report.

## 📜 License

This project is available for educational and learning purposes. Please contact the author before redistributing it as your own work.
