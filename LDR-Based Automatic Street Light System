const int sensorPin = 0;   // LDR connected to A0
const int ledPin = 9;      // LED connected to pin 9
 
int lightCal;              // Calibration value
int lightVal;              // Current light value
 
void setup() {
  pinMode(ledPin, OUTPUT);
  lightCal = analogRead(sensorPin);   // Read initial light value
}
 
void loop() {
  lightVal = analogRead(sensorPin);   // Read LDR value
 
  if (lightVal < lightCal - 50) {
    digitalWrite(ledPin, HIGH);       // Turn LED ON (dark)
  } 
  else {
    digitalWrite(ledPin, LOW);        // Turn LED OFF (bright)
  }
}
