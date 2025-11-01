#define smokeSensor A0     
#define buzzer 8           
#define redLED 9           
#define greenLED 10        
#define blueLED 11         

int threshold;             

void setup() {
  pinMode(smokeSensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  Serial.begin(9600);

  calibrateSensor();       
}

void loop() {
  int smokeValue = analogRead(smokeSensor);

  Serial.print("Smoke Value: ");
  Serial.println(smokeValue);

  if (smokeValue > threshold + 100) {
    // High danger level
    digitalWrite(buzzer, HIGH);
    setRGB(255, 0, 0); // Red
  } else if (smokeValue > threshold) {
    // Moderate level
    digitalWrite(buzzer, LOW);
    setRGB(255, 255, 0); // Yellow
  } else {
    // Safe level
    digitalWrite(buzzer, LOW);
    setRGB(0, 255, 0); // Green
  }

  delay(2000);  // Adjust delay as needed
}

void setRGB(int r, int g, int b) {
  analogWrite(redLED, r);
  analogWrite(greenLED, g);
  analogWrite(blueLED, b);
}

void calibrateSensor() {
  int baseline = 0;
  for (int i = 0; i < 100; i++) {
    baseline += analogRead(smokeSensor);
    delay(50);
  }
  threshold = baseline / 100 + 50; 
  Serial.println("Calibrated threshold: " + String(threshold));
}
