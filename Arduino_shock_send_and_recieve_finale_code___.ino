#include <SoftwareSerial.h>
SoftwareSerial HC05 (0,1);
// these constants won't change:
const int knockSensor = A0; // the piezo is connected to analog pin 0
const int threshold = 50;  // threshold value to decide when the detected sound is a knock or not


// these variables will change:
int sensorReading = 0;      // variable to store the value read from the sensor pin

void setup() {
  HC05.begin(9600)
  ;Serial.begin(9600);       // use the serial port
  
}

void loop() {
  // read the sensor and store it in the variable sensorReading:
  sensorReading = analogRead(knockSensor);

  // if the sensor reading is greater than the threshold:
  if (sensorReading >= threshold) {
    Serial
    // update the LED pin itself:
    // send the string "Knock!" back to the computer, followed by newline
    ;Serial.println("accident detected!");
  }
  delay(200);  // delay to avoid overloading the serial port buffer
}
