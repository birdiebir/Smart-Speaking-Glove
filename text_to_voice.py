import serial
import pyttsx3
import time

# Initialize the text-to-speech engine
engine = pyttsx3.init()

# Set properties for a more natural and extended speech
engine.setProperty('rate', 100)  # Speed of speech (default is around 200)
engine.setProperty('volume', 1.0)  # Volume level (0.0 to 1.0)

# Optionally, change the voice if you have multiple voices available
voices = engine.getProperty('voices')
for voice in voices:
    print(f"Voice: {voice.name}")
    # Choose a voice that sounds more natural to you
    # For example, to select a specific voice:
    # if "desired_voice_name" in voice.name:
    #     engine.setProperty('voice', voice.id)

# Replace 'COM3' with your actual Arduino serial port
arduino_port = 'COM3'
baudrate = 9600

def speak(text):
    engine.say(text)
    engine.runAndWait()

# Establish serial connection
ser = serial.Serial(arduino_port, baudrate, timeout=1)
time.sleep(2)  # Allow time for the connection to establish

# Flag to skip the first read
first_read = True

try:
    while True:
        if ser.in_waiting > 0:
            word = ser.readline().strip()
            if first_read:
                first_read = False
                continue  # Skip the first word

            try:
                decoded_word = word.decode('utf-8', errors='ignore')  # Decode the bytes to a string, ignoring errors
                if decoded_word:  # Ensure the decoded word is not empty
                    speak(decoded_word)  # Speak the received word
                    print(decoded_word)
                    time.sleep(0.5)  # Add a pause between words/sentences
            except UnicodeDecodeError as e:
                print(f"Decoding error: {e}")
except KeyboardInterrupt:
    pass
finally:
    ser.close()
