# Smoke-Detector-with-RGB
This project is to detect smoke levels using an MQ-2 smoke sensor and provide visual and auditory alerts based on the detected smoke concentration.

![image](https://blueprint.hackclub.com/user-attachments/blobs/proxy/eyJfcmFpbHMiOnsiZGF0YSI6NzM1NCwicHVyIjoiYmxvYl9pZCJ9fQ==--d14ae88fdf1666034c91dd0607a6c722cdba57a8/image.png)

This Arduino code is for a smoke detection system that uses a smoke sensor, a buzzer, and an RGB LED to show air quality levels. The smoke sensor connects to analog pin A0. The buzzer and red, green, and blue LEDs connect to digital pins 8, 9, 10, and 11. During setup, the system calibrates the smoke sensor by averaging 100 readings to find a threshold value for normal air conditions. In the main loop, the code reads the smoke level and compares it to this threshold. If the smoke level is much higher than the threshold, it activates the buzzer and lights the red LED to indicate danger. For moderate smoke levels, it shows a yellow light without the buzzer. If the air is clean, the green LED lights up. The system updates every 2 seconds, providing real-time smoke detection and alerts using sound and color indicators.

BOM-
| **S.No.** | **Component Name**                               | **Price (INR)** | **Qty** | **Total (INR)** | **Price (USD)** | **Total (USD)** |
| --------- | ------------------------------------------------ | --------------- | ------- | --------------- | --------------- | --------------- |
| 1         | Male to Male Jumper Wires (20cm) 40pcs           | ₹45             | 1       | ₹45             | $0.54           | $0.54           |
| 2         | GL12 840 Points Solderless Breadboard            | ₹53             | 1       | ₹53             | $0.64           | $0.64           |
| 3         | Arduino UNO R3 SMD ATmega328 Compatible Board    | ₹209            | 1       | ₹209            | $2.51           | $2.51           |
| 4         | 3.7 V 2500 mAh 18650 Li-Ion Battery              | ₹79             | 1       | ₹79             | $0.95           | $0.95           |
| 5         | RGB LED (Common Anode) Pack of 10                | ₹29             | 1       | ₹29             | $0.35           | $0.35           |
| 6         | Active Buzzer Module 3.3 V–5 V                   | ₹27             | 1       | ₹27             | $0.32           | $0.32           |
| 7         | MQ-2 Gas Sensor Module (for LPG, CH4, CO, Smoke) | ₹88             | 1       | ₹88             | $1.06           | $1.06           |
| **—**     | **Total**                                        | **₹530**        | **—**   | **₹530**        | **$7.00**       | **$7.00**       |
