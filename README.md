# **Smart Speaking Glove: Bridging the Communication Gap**

## 🚀 Project Overview  
The **Smart Speaking Glove** is an innovative assistive technology designed to empower individuals with speech and hearing impairments. By leveraging an **ESP32 microcontroller** and **Finger Resistor Sensors (FSRs)** placed on each finger, this glove translates simple gestures into spoken words. It provides a novel and intuitive way to communicate without requiring prior knowledge of sign language.  

This project integrates hardware and software seamlessly to enable real-time gesture-to-speech translation, fostering inclusivity and accessibility for people with communication challenges.  

---

## 🎯 Key Features  
- **Intuitive Alphabetical Input**: Each finger is equipped with an FSR, enabling easy gesture-based input for forming words.  
- **Real-Time Speech Conversion**: The system uses a Python-based text-to-speech (TTS) engine (**pyttsx3**) to vocalize inputs, offering immediate auditory feedback.  
- **Customizable and Scalable**: Thresholds for FSR sensitivity can be adjusted, and the system can be expanded to support more complex gestures or phrases.  
- **Accessible Design**: The glove eliminates the need for users to know sign language, focusing on simplicity and practicality.  

---

## 💡 How It Works  
1. **Input Detection**: FSRs detect finger pressure, translating specific gestures into corresponding characters (e.g., 'h', 'e', 'l', 'o').  
2. **Word Formation**: The **ESP32 microcontroller** collects inputs, forms words, and sends them via serial communication to a Python program.  
3. **Speech Output**: The Python program converts received words into speech using a TTS engine, providing real-time audio feedback.  

---

## 🔧 Hardware Components  
- **ESP32 Microcontroller**: The brain of the system, handling sensor input and serial communication.  
- **Finger Resistor Sensors (FSRs)**: Mounted on each finger to detect pressure and map it to specific characters.  
- **Power Supply**: Powers the ESP32 and connected sensors.  

---

## 🖥️ Software Integration  

### Arduino Code: **FSR_Python.ino**  
- Reads input from FSRs.  
- Maps gestures to characters.  
- Sends accumulated words to the Python program via serial communication.  

### Python Code: **text_to_voice.py**  
- Decodes incoming serial data.  
- Converts text to speech using the **pyttsx3** library.  
- Provides error handling for robust performance.  

---

## 🌟 Project Value  
- **Accessibility**: Enables individuals with speech and hearing impairments to communicate more effectively.  
- **Innovation**: Combines hardware and software to address real-world challenges in an elegant way.  
- **Impact**: Breaks communication barriers and fosters inclusivity, enhancing the quality of life for users.  

---  

## 💻 Getting Started  

### Prerequisites  
- ESP32 microcontroller.  
- Finger Resistor Sensors (FSRs).  
- Arduino IDE for uploading the firmware.  
- Python installed with the `pyttsx3` library.  

### Installation  
1. **Set up the hardware**: Connect the FSRs to the ESP32 as per the pin mapping in the Arduino code.  
2. **Upload Arduino code**: Use the Arduino IDE to upload the **FSR_Python.ino** code to the ESP32.  
3. **Run the Python script**: Install the required Python dependencies and execute the **text_to_voice.py** script to enable gesture-to-speech conversion.  

---

## 📝 See Detailed Project Report  
For a comprehensive overview of the **Smart Speaking Glove** project, including design decisions, challenges, and implementation details, visit the detailed project report on Behance:  
[Smart Speaking Glove - Detailed Project Report](https://www.behance.net/gallery/200491767/Smart-Speaking-Glove)  

---

## 🤝 Contribution  
Contributions are welcome! Feel free to fork this repository and submit pull requests for enhancements, bug fixes, or new features.   

---

### 🌟 Let’s bridge the communication gap together!
