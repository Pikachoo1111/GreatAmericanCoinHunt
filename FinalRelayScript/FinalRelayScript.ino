int ledPin = 13; // The pin you want to control (changed to pin 13)

void setup() {
  Serial.begin(9600); // Set the baud rate to match your configuration
  pinMode(6, OUTPUT);
  digitalWrite(6, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    // Data is available to read
    char receivedChar = Serial.read(); // Read a character
    if (receivedChar == '1') { // Check if the character is '1'

      digitalWrite(5, HIGH);
      delay(10);
      digitalWrite(5, LOW); 
    }
    if (receivedChar == '3') { // Check if the character is '3'
      digitalWrite(6, HIGH);
      // Process the received character (receivedChar) here
    }
    if (receivedChar == '4')  {
      digitalWrite(6, LOW);
    }
  }
}
