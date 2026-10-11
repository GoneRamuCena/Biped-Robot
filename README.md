# 🤖 6-DOF Biped Walking Robot Using Arduino Mega

A **6-Degree-of-Freedom (6-DOF) Biped Walking Robot** developed using Arduino Mega and six servo motors. This project focuses on building a bipedal robotic system, integrating its hardware components, and implementing a walking strategy through servo motor control.

## 📌 Project Overview

Bipedal robots use two legs to achieve locomotion. In this project, a six-servo robotic structure was assembled and controlled using an Arduino Mega microcontroller.

The project involves mechanical assembly, servo motor integration, power supply connections, gait planning, and programming using the Arduino IDE.

## 🎯 Project Objectives

* Design and assemble a 6-DOF biped walking robot.
* Integrate six servo motors with a servo shield.
* Interface the servo control system with an Arduino Mega.
* Implement a walking strategy using gait planning.
* Control the robot's movements using Arduino code.

## 🛠️ Hardware Requirements

| Component       |        Quantity | Purpose                              |
| --------------- | --------------: | ------------------------------------ |
| Arduino Mega    |               1 | Main microcontroller                 |
| Servo Motors    |               6 | Control the robot's joint movements  |
| Servo Shield    |               1 | Connect and control the servo motors |
| Batteries       | 2 power sources | Supply power to the system           |
| Jumper Wires    |     As required | Electrical connections               |
| Screws and Nuts |     As required | Mechanical assembly                  |
| Clamps          |     As required | Assembly and securing components     |
| USB Cable       |               1 | Programming the Arduino              |

## 💻 Software Requirements

* **Arduino IDE** — For programming the Arduino Mega.
* **Adafruit Library** — Used for servo control, as applicable to the selected servo shield.
* **Arduino Code** — Contains the robot's servo control and walking sequence.
* **CAD File** — Used as a reference for the biped robot's mechanical structure.

## ⚙️ System Architecture

The robot consists of three primary subsystems:

1. **Mechanical Structure:** The assembled biped frame supports the six servo motors.
2. **Control System:** The Arduino Mega executes the programmed servo movements.
3. **Power System:** Batteries provide power to the servo shield and connected servos.

### Working Principle

The Arduino Mega executes the programmed movement sequence, controlling the servo motors to move the robot's joints. A planned gait coordinates these movements to produce a walking sequence.

## 🔌 Circuit Connections

### 1. Servo Motors to Servo Shield

* Arrange the six servo motors according to the robot's mechanical structure.
* Connect each servo motor to its designated port on the servo shield.
* Ensure that the servo connections match the motor positions used in the Arduino program.

### 2. Servo Shield to Arduino Mega

The presentation specifies the following connections:

| Servo Shield | Arduino Mega |
| ------------ | ------------ |
| VCC          | 5V           |
| GND          | GND          |
| SDL          | SDL          |
| SDA          | SDA          |

**Note:** Verify the actual board labels and wiring before powering the circuit. I²C-based servo shields commonly use SDA and SCL; confirm the shield's pinout because the presentation lists SDL.

### 3. Power Supply Connections

| Servo Shield | Battery                         |
| ------------ | ------------------------------- |
| VCC          | Positive terminal (Anode)       |
| GND          | Negative terminal (Cathode/GND) |

**Important:** Confirm the servo shield's power input requirements and battery voltage before connecting the batteries. Use a suitable power supply for the servos and ensure a common ground where required. Do not connect a battery directly to the Arduino's 5V pin unless the power arrangement explicitly supports it.

## 🚶 Walking Strategy and Gait Planning

Gait planning determines the sequence of joint movements required for bipedal locomotion.

The walking strategy for this project involves:

1. Planning the required servo movements.
2. Defining the sequence of joint positions for a walking cycle.
3. Programming the movement sequence in Arduino code.
4. Uploading the program to the Arduino Mega.
5. Testing and adjusting the movements to improve walking stability.

The exact joint angles, timing values, and gait equations depend on the implemented Arduino code.

## 🔧 Project Procedure

1. Assemble the mechanical structure of the biped robot.
2. Install the six servo motors in their designated positions.
3. Connect the servo motors to the servo shield.
4. Connect the servo shield to the Arduino Mega.
5. Connect the battery power sources according to the circuit requirements.
6. Develop the walking strategy through gait planning.
7. Write or configure the Arduino program in the Arduino IDE.
8. Upload the program to the Arduino Mega.
9. Test the robot's movements and adjust the gait as necessary.

## ✅ Results

A **6-DOF biped walking robot using Arduino Mega** was assembled as the final outcome of the project.

The completed system integrates six servo motors, a servo shield, a microcontroller, and a planned walking sequence.

![6-DOF Biped Walking Robot](https://github.com/GoneRamuCena/Biped-Robot/blob/5e02fa5b696b822cc8d95d87eb50490072252f1a/Project%20Details/Biped%20Robot.png)


🎥 Project Demo Video
https://www.linkedin.com/posts/gone-ramu-2155092b2_project-biped-walking-robot-project-ugcPost-7497627939728158720-TytX/?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAEsumfEBdfpbRoL04rRFCpsATJalW3cUVUA

## 🚀 Future Improvements

Potential improvements include:

* Implementing more stable and repeatable walking gaits.
* Adding an Inertial Measurement Unit (IMU) for orientation feedback.
* Exploring inverse kinematics for joint-angle calculation.
* Integrating computer vision for environmental perception.
* Investigating neural networks and machine learning for adaptive robot control.


These are proposed enhancements, not features claimed to be implemented in the current version.


**Note : For more project details go through the Project Details section and see the pdf**






