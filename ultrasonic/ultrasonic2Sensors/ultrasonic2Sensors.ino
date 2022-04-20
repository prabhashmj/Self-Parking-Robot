// ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by Arbi Abdul Jabbaar
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //
#define echoPin2 15 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin2 14
#define echoPin1 17 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin1 16 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration1; // variable for the duration of sound wave travel
int distance1; // variable for the distance measurement
long duration2; // variable for the duration of sound wave travel
int distance2;
void setup() {
  pinMode(trigPin1, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin1, INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin2, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin2, INPUT);
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  
  
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
 
 
  duration1 = pulseIn(echoPin1, HIGH);
  
 
  distance1 = duration1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
 
  
  Serial.print("Distance 1: ");
  Serial.print(distance1);
  Serial.println(" cm");
  

  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
   digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
   distance2 = duration2 * 0.034 / 2;
   Serial.print("Distance 2: ");
  Serial.print(distance2);
  Serial.println(" cm");
}
