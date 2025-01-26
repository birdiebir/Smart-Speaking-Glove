Smart Speaking Glove: Bridging the Communication Gap

🚀 Project Overview
The Smart Speaking Glove is an innovative assistive technology designed to empower individuals with speech and hearing impairments. By leveraging an ESP32 microcontroller and Finger Resistor Sensors (FSRs) placed on each finger, this glove translates simple gestures into spoken words. It provides a novel and intuitive way to communicate without requiring prior knowledge of sign language.

This project integrates hardware and software seamlessly to enable real-time gesture-to-speech translation, fostering inclusivity and accessibility for people with communication challenges.

🎯 Key Features
Intuitive Alphabetical Input: Each finger is equipped with an FSR, enabling easy gesture-based input for forming words.

Real-Time Speech Conversion: The system uses a Python-based text-to-speech (TTS) engine (pyttsx3) to vocalize inputs, offering immediate auditory feedback.

Customizable and Scalable: Thresholds for FSR sensitivity can be adjusted, and the system can be expanded to support more complex gestures or phrases.

Accessible Design: The glove eliminates the need for users to know sign language, focusing on simplicity and practicality.

💡 How It Works
Input Detection: FSRs detect finger pressure, translating specific gestures into corresponding characters (e.g., 'h', 'e', 'l', 'o').

Word Formation: A microcontroller (ESP32) collects inputs, forms words, and sends them via serial communication to a Python program.

Speech Output: The Python program converts received words into speech using a TTS engine, providing real-time audio feedback.

🔧 Hardware Components
ESP32 Microcontroller: The brain of the system, handling sensor input and serial communication.

Finger Resistor Sensors (FSRs): Mounted on each finger to detect pressure and map it to specific characters.

Power Supply: Powers the ESP32 and connected sensors.

🖥️ Software Integration
Arduino Code
Reads input from FSRs.
Maps gestures to characters.
Sends accumulated words to the Python program via serial communication.
Python Code
Decodes incoming serial data.
Converts text to speech using the pyttsx3 library.
Provides error handling for robust performance.
🌟 Project Value
Accessibility: Enables individuals with speech and hearing impairments to communicate more effectively.
Innovation: Combines hardware and software to address real-world challenges in an elegant way.
Impact: Breaks communication barriers and fosters inclusivity, enhancing the quality of life for users.
