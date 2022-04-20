/* Example sketch to control a 28BYJ-48 stepper motor with ULN2003 driver board and Arduino UNO. More info: https://www.makerguides.com */

// Include the Arduino Stepper.h library:
#include <Stepper.h>

#define echoPin 19 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 18 //attach pin D3 Arduino to pin Trig of HC-SR04

#define echoPin2 21 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin2 20 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration, duration2; // variable for the duration of sound wave travel
int distance, distance2; // variable for the distance measurement

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

void func1()
{








  if (distance > 30 && distance2 > 30)
  {
    //delay(100);
    digitalWrite(motor2pin2, LOW);
    //  x=0;}
  }
}

void setup() {
  // Set the speed to 5 rpm:
  myStepper.setSpeed(80);

  Serial.begin(9600);
  int x = 1;
  myStepper.step(300); //- kiyanne dakunuta
  //myStepper.step(120);
  


  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
  delay(800);
  digitalWrite(motor2pin2,LOW); 
  
  //myStepper.step(-300);
  //myStepper.step(120);

 // digitalWrite(motor2pin2, LOW);


 // digitalWrite(motor2pin1, LOW);

  //myStepper.step(-120);
}





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
