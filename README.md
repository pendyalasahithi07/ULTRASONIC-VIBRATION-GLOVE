# Smart Ultrasonic Vibration Glove for Visually Impaired

## Overview

The Smart Ultrasonic Vibration Glove is a wearable assistive device designed to help visually impaired individuals detect nearby obstacles and navigate safely. The system uses ultrasonic sensors to measure the distance to obstacles and provides tactile feedback through a vibration motor.

## Features

* Real-time obstacle detection
* Dual ultrasonic sensors for wider coverage
* Vibration feedback instead of audio alerts
* Lightweight and portable design
* Low-cost implementation using readily available components

## Hardware Components

* Arduino Nano
* 2 × HC-SR04 Ultrasonic Sensors
* Vibration Motor
* Battery Pack
* Connecting Wires
* Glove Structure

## Working Principle

1. Ultrasonic sensors continuously scan the surroundings.
2. Distance to obstacles is calculated using the echo time.
3. Arduino Nano processes the sensor data.
4. If an obstacle is within the threshold distance, the vibration motor is activated.
5. The vibration intensity increases as the obstacle gets closer.

## Project Structure

```
Smart-Ultrasonic-Vibration-Glove/
│
├── code.c
├── README.md
```

## Applications

* Assistive technology for visually impaired individuals
* Elderly assistance systems
* Wearable navigation devices
* Smart safety systems

## Future Enhancements

* GPS navigation integration
* Bluetooth and mobile application support
* AI-based object recognition
* Voice guidance system
* Additional sensors for 360° obstacle detection

