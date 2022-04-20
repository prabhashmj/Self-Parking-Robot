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

 myStepper.step(300); //wamata 

    digitalWrite(motor2pin2, LOW);
  analogWrite(motor2pin1, 200);
  //delay(50);
    digitalWrite(motor2pin2,LOW);
  myStepper.step(-300);


  /*digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  //delay(1000);
  digitalWrite(motor2pin2, LOW);*/
   
 

   digitalWrite(motor2pin1, LOW);
 // analogWrite(motor2pin2, 140);



/* myStepper.step(-300);   
 myStepper.step(120);*/

   //digitalWrite(motor2pin1, LOW);
  //analogWrite(motor2pin2, 200);
  
 

  
  

  
// myStepper.step(-120); 
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



}
