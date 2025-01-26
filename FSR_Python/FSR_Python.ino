const int fsrPin1 = A0; // h
const int fsrPin2 = A1; // e
const int fsrPin3 = A2; // Enter
const int fsrPin4 = A3; // l
const int fsrPin5 = 14; // o

char inputArray[10]; // Array to store the characters
int currentIndex = 0; // Index for the array

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(fsrPin1, INPUT); // Set FSR pin 1 as input
  pinMode(fsrPin2, INPUT); // Set FSR pin 2 as input
  pinMode(fsrPin3, INPUT); // Set FSR pin 3 as input
  pinMode(fsrPin4, INPUT); // Set FSR pin 4 as input
  pinMode(fsrPin5, INPUT); // Set FSR pin 5 as input
}

void loop() {
  int fsr1Val = analogRead(fsrPin1); // Read the value of FSR pin 1
  int fsr2Val = analogRead(fsrPin2); // Read the value of FSR pin 2
  int fsr3Val = analogRead(fsrPin3); // Read the value of FSR pin 3
  int fsr4Val = analogRead(fsrPin4); // Read the value of FSR pin 4
  int fsr5Val = analogRead(fsrPin5); // Read the value of FSR pin 5

  // If FSR pin 1 has pressure, store 'h' in the array
  if (fsr1Val > 50) {
    inputArray[currentIndex++] = 'h';
    //Serial.println('h');
    delay(500); // Delay for stability
  }

  // If FSR pin 2 has pressure, store 'e' in the array
  if (fsr2Val > 50) {
    inputArray[currentIndex++] = 'e';
    //Serial.println('e');
    delay(500); // Delay for stability
  }

  // If FSR pin 4 has pressure, store 'l' in the array
  if (fsr4Val > 50) {
    inputArray[currentIndex++] = 'l';
    //Serial.println('l');
    delay(500); // Delay for stability
  }

  // If FSR pin 5 has pressure, store 'o' in the array
  if (fsr5Val > 50) { // Increased threshold to avoid false positives
    inputArray[currentIndex++] = 'o';
    //Serial.println('o');
    delay(500); // Delay for stability
  }

  // If FSR pin 3 has pressure, send the accumulated word to Python
  if (fsr3Val > 50) {
    inputArray[currentIndex] = '\0'; // Null-terminate the array
    sendToPython(inputArray); // Call method to send the word to Python
    currentIndex = 0; // Reset the index
    delay(500); // Delay for stability
  }
}

void sendToPython(char *word) {
  Serial.println(word); // Send the word to Python
}
