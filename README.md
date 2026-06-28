#  Digital IC Tester

An Arduino-based **Digital IC Tester** that automatically verifies the functionality of **7400-series TTL Logic ICs** using truth-table validation. The system applies all possible input combinations to the IC under test, compares the outputs with expected values, and displays the result on a **16×2 LCD**.

![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?logo=arduino&logoColor=white)
![Language](https://img.shields.io/badge/Language-Arduino%20C++-blue)
![Platform](https://img.shields.io/badge/Platform-Embedded%20Systems-success)
![License](https://img.shields.io/badge/License-MIT-green)

---

##  Project Overview

Testing digital ICs manually using datasheets and oscilloscopes is time-consuming and prone to human error. This project automates the testing process by generating all possible input combinations, reading the IC outputs, and validating them against stored truth tables.

The tester provides a quick **PASS/FAIL** result on a 16×2 LCD, making it useful for electronics laboratories, educational institutes, and repair workshops.

---

##  Features

- Automated truth-table verification
- Supports common 7400-series TTL ICs
- Push-button based IC selection
- Real-time LCD result display
- Detects faulty ICs automatically
- Fast and user-friendly testing
- Portable and low-cost design

---

##  Hardware Components

- Arduino Uno (ATmega328P)
- 16×2 LCD Display
- Breadboard
- Push Buttons
- Jumper Wires
- 7404 (NOT Gate)
- 7408 (AND Gate)
- 7432 (OR Gate)
- USB Cable

---

##  Software Used

- Arduino IDE
  
  

---

##  Repository Structure

```
Digital-IC-Tester
│
├── documents
│   └── Report.pdf
│
├── images
│   ├── block_diagram.png
│   ├── testing.png
│   ├── hardware circuit.png
│  
│
├── src
│   └── Digital_IC_Tester.ino
│
├── README.md
├── LICENSE
└── .gitignore
```

---

##  Working Principle

1. Power ON the Arduino Uno.
2. Select the desired IC using push buttons.
3. Arduino generates all possible input combinations.
4. Outputs from the IC are read.
5. Results are compared with the stored truth table.
6. LCD displays whether the IC is **GOOD** or **FAULTY**.

---

## Supported ICs

| IC | Function |
|----|----------|
| 7404 | Hex NOT Gate |
| 7408 | Quad 2-input AND Gate |
| 7432 | Quad 2-input OR Gate |

---

##  Test Results

The project was tested with both functional and intentionally faulty ICs.

- ✔ Correctly identified all working ICs
- ✔ Successfully detected faulty ICs
- ✔ Reliable truth-table verification
- ✔ Fast response time

---

## 📷Project Images

Place your images inside the **images** folder.

### Hardware Setup

![Setup](images/setup.jpg)

### Circuit Diagram

![Circuit](images/circuit_diagram.png)

### Testing 

![AND](images/testing_and.jpg)

### Testing OR Gate

![OR](images/testing_or.jpg)

### Testing NOT Gate

![NOT](images/testing_not.jpg)

---

## 🎥 Project Demonstration

Watch the complete working model here:

**▶ Google Drive Video**

https://drive.google.com/file/d/1xPILlLeKeK-KiLPB_d2OFwuPdc2gzpxe/view?usp=sharing

---

## 🚀 Future Improvements

- Support additional 7400-series ICs
- Support CMOS 4000-series ICs
- Automatic IC identification
- ESP32-based wireless version
- PC GUI for detailed testing
- Test report logging

---

## 📚 Applications

- Electronics Laboratories
- Educational Institutions
- Embedded Systems Learning
- IC Testing & Verification
- Repair and Maintenance Workshops

---

## 👨‍💻 Author

**Srajan Gupta**

B.Tech Electronics and Communication Engineering  
VIT Vellore

📧 Email: **srajang544@gmail.com**

---

## ⭐ If you found this project useful

Please consider giving it a **Star ⭐** on GitHub.
