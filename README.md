# IOT-SECURITY-SYSTEM

COMPANY : CODTECH IT SOLUTIONS

NAME : MAJJI VASISTARAM

INTERN ID : CT04DF2108

DOMAIN : INTERNET OF THINGS

DURATION : 4 WEEKS

MENTOR : NEELA SANTOSH

As part of Task 3 in my IoT internship at CodTech, I designed and simulated a basic motion-detection security system using Arduino. The objective of this task was to create a system that can detect motion, alert the user, and simulate how real-world smart security systems work. I used Tinkercad, an online circuit simulator, to build and test this project. Since Tinkercad doesn’t support cameras or mobile notifications, I simulated alerts using an LED and the Serial Monitor to show real-time detection messages. This gave me a solid understanding of how sensors can be used in IoT-based security systems to detect activity in a space.

In the circuit, I used a PIR (Passive Infrared) sensor to detect human motion. The PIR sensor was connected to digital pin 4 of the Arduino. An LED was connected to digital pin 7 and acted as a visual alert system. When the PIR sensor detects motion, it sends a HIGH signal to the Arduino, which in turn turns on the LED and prints the message "Motion detected !!" in the Serial Monitor. When there is no motion, the LED remains off. I wrote a simple Arduino code to control this behavior, using digitalRead() to get input from the PIR sensor and digitalWrite() to control the LED. The Serial.begin(9600) function was used to enable communication with the Serial Monitor so I could view real-time alerts during the simulation. A short delay was added to stabilize the sensor reading and prevent flickering.

This task helped me understand the core concept of motion sensing in IoT-based security systems. Although I worked in a simulation environment, the logic and hardware interaction were realistic and useful. In a real-world project, this system could be extended by adding a camera (like an ESP32-CAM) to capture images when motion is detected, and alerts could be sent to a user’s mobile app or email using platforms like Blynk, Telegram, or IFTTT. This task showed me how IoT can be applied in home and office security systems in a cost-effective way. I also improved my skills in circuit simulation, sensor integration, and basic coding logic. Overall, Task 3 was an excellent learning experience that combined sensor technology, Arduino programming, and real-time feedback—all of which are essential in developing smart security solutions.

OUTPUT

![Image](https://github.com/user-attachments/assets/414d8ea2-d5d7-4af0-a61b-e1386a9fb2fa)
