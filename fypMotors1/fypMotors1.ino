/* Example sketch to control a 28BYJ-48 stepper motor with ULN2003 driver board and Arduino UNO. More info: https://www.makerguides.com */

// Include the Arduino Stepper.h library:
#include <Stepper.h>

#define echoPin 17 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 16 //attach pin D3 Arduino to pin Trig of HC-SR04

#define echoPin2 15 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin2 14 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration,duration2; // variable for the duration of sound wave travel
int distance,distance2; // variable for the distance measurement

// Define number of steps per rotation:
const int stepsPerRevolution = 256;
int motor2pin1 = 3;
int motor2pin2 = 5;

// Wiring:
// Pin 8 to IN1 on the ULN2003 driver
// Pin 9 to IN2 on the ULN2003 driver
// Pin 10 to IN3 on the ULN2003 driver
// Pin 11 to IN4 on the ULN2003 driver

// Create stepper object called 'myStepper', note the pin order:
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
    // Set the speed to 5 rpm:
  myStepper.setSpeed(80);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT  
  // Begin Serial communication at a baud rate of 9600:
 
  pinMode(trigPin2, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin2, INPUT); // Sets the echoPin as an INPUT  
  Serial.begin(9600);
int x=1;
 myStepper.step(-300);   
 myStepper.step(120);

   digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 140);

while(x==1)
{


  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; 
    Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");



  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration2 = pulseIn(echoPin2, HIGH);
  // Calculating the distance
  distance2 = duration2 * 0.034 / 2; 
    Serial.print("Distance: ");
  Serial.print(distance2);
  Serial.println(" cm");






  
if(distance>30 && distance2>30)
{
  //delay(100);
  digitalWrite(motor2pin2, LOW);
  x=0;}
}


/* myStepper.step(-300);   
 myStepper.step(120);*/

   //digitalWrite(motor2pin1, LOW);
  //analogWrite(motor2pin2, 200);
  
      Serial.println("clockwise");
  myStepper.step(300);      //wamata harawuna
 //delay(20);

   digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  delay(300);
  digitalWrite(motor2pin2, LOW);
  
for(int i=0;i<4;i++){
  


    myStepper.step(-300);      //dakunata harawuna
 //delay(20);
    analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  delay(500);
  digitalWrite(motor2pin1, LOW);

      Serial.println("clockwise");
  myStepper.step(300);      //wamata harawuna
 //delay(20);

   digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  delay(300);
  digitalWrite(motor2pin2, LOW);
}

  
 /*   Serial.println("clockwise");
  myStepper.step(300);      //wamata harawuna
 //delay(20);

   digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  delay(300);
  digitalWrite(motor2pin2, LOW);*/
  
 myStepper.step(-120); 
}
  // Step one revolution in the other direction:
 /* Serial.println("counterclockwise");       //mul position ekata awa
  myStepper.step(120);
 // delay(20);

    // Step one revolution in the other direction:
 Serial.println("counterclockwise")5
  myStepper.step(400);
  //delay(20);
    
 Serial.println("counterclockwise");
  myStepper.step(-120);
  //delay(20);*/

  //  Serial.println("clockwise");
//  myStepper.step(300);      //dakunata harawuna
  //delay(20);
  
 /* // Step one revolution in the other direction:
  Serial.println("counterclockwise");       //mul position ekata awa
  myStepper.step(600);
  delay(20);

    // Step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(256);
  delay(20);
    
  Serial.println("counterclockwise");
  myStepper.step(-160);
  delay(20);*/



  /*analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  delay(1500);
    for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin2, LOW);
  analogWrite(motor2pin1, i);}

  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  delay(1000);  
  for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, i);}*/





 /*digitalWrite(motor2pin1,LOW );
  analogWrite(motor2pin2, 200);
  delay(1000);
   digitalWrite(motor2pin1,LOW );
  digitalWrite(motor2pin2, LOW);*/

  
  


void loop() {



    // Step one revolution in one direction:
 /* Serial.println("clockwise");
  myStepper.step(-stepsPerRevolution);
  delay(20);*/


  // put your main code here, to run repeatedly:   
//  digitalWrite(motor2pin1, HIGH);
 // digitalWrite(motor2pin2, LOW);

  /*analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  delay(5000);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  delay(5000);  
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);*/

  //digitalWrite(motor1pin1, LOW);
 // digitalWrite(motor1pin2, HIGH);

  /*digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 150);
  delay(5000);*/
}
