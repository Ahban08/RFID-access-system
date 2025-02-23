# RFID-access-system

## Overview
This project implements a RFID-Based Access Control System that integrates MFRC-522. The system encompasses architecture design, discrete event modeling, hardware-software co-design, and integration testing.

## System Components
1. RFID Reader Module: MFRC-522
+ A high-performance RFID module used for reading RFID tags.
+ Communicates data efficiently to the main controller for processing.
2. ESP32
+ Serves as the main controller, providing Wi-Fi and Bluetooth connectivity.
+ Manages data processing, system logic, and communication with peripheral devices.
3. LCD 1602A
+ A 16x2 character LCD used for real-time display of system status and user feedback.
4. Tactile Button (6×6×5 mm)
+ A compact push-button switch used for user input, such as system reset or manual overrides.

## File Structure
```
RFID-access-system/
├── src/                       # Source code for the project
│   ├── hls/                   # High-Level Synthesis (HLS) files
│   │   ├── Grafcet_design.json  # JSON file representing the Grafcet model
│   │   └── Synthesis_of_Grafcet.c # C implementation of the Grafcet-based design
│   └── firmware/              # Firmware and application logic
│       └── ESP32_RFID_Google_Spreadsheet_Attendance.ino # Arduino-compatible code for ESP32
└── docs/                      # Documentation
    └── database_info.md       # Details about database configuration and usage
```