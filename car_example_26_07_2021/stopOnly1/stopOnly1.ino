#include <Stepper.h>
const int stepsPerRevolution = 256;
int motor2pin1 = 3;
int motor2pin2 = 5;
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);
#define echoPin2 15 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin2 14
#define echoPin1 17 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin1 16 //attach pin D3 Arduino to pin Trig of HC-SR04
#define echoPin3 19 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin3 18 

// defines variables
long duration1; // variable for the duration of sound wave travel
int distance1; // variable for the distance measurement
long duration2; // variable for the duration of sound wave travel
int distance2;
long duration3; // variable for the duration of sound wave travel
int distance3;
void setup() {
  pinMode(trigPin1, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin1, INPUT); // Sets the echoPin as an INPUT
  pinMode(trigPin2, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin3, INPUT);
  pinMode(motor2pin1, OUTPUT);
   pinMode(motor2pin2, OUTPUT);
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
/* stepper center***/

    myStepper.setSpeed(80);
  center();
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

  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);
   digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);
  duration3 = pulseIn(echoPin3, HIGH);
   distance3 = duration3 * 0.034 / 2;
   Serial.print("Distance 3: ");
  Serial.print(distance3);
  Serial.println(" cm");
if(distance3>= 10)
{forward();}
if(distance3< 10)
    {
      center();
      Stop();
    }
 
}


void center()
{

 myStepper.step(-500);      //dakunata harawuna
  delay(20);
 myStepper.step(135);
  delay(20);
}

void forward()
{
  analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  //delay(800);
   /* for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin2, LOW);
  analogWrite(motor2pin1, i);
   delay(5);}*/
}

void backward()
{
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
   delay(400);
      /* for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin2, i);
  analogWrite(motor2pin1, LOW);
  delay(5);} */
}

void right()
{
   myStepper.step(-300);      
  delay(20);
}
void right_center()
{
  myStepper.step(130);      
  delay(20);
}

void left()
{
  myStepper.step(300);      
  delay(20);
}

void left_center()
{
  myStepper.step(-120);      
  delay(20);
}

void Stop()
{
  digitalWrite(motor2pin1, LOW);
  digitalWrite(motor2pin2, LOW);
}
