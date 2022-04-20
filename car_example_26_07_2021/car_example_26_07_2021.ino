#include <Stepper.h>
int echoPin1=15; // attach pin D2 Arduino to pin Echo of HC-SR04
int trigPin1=14; //attach pin D3 Arduino to pin Trig of HC-SR04
int echoPin2=17; // attach pin D2 Arduino to pin Echo of HC-SR04
int trigPin2=16; //attach pin D3 Arduino to pin Trig of HC-SR04
// defines variables
long duration1; // variable for the duration of sound wave travel
int distance1; // variable for the distance measurement
long duration2; // variable for the duration of sound wave travel
int distance2; // variable for the distance measurement
const int stepsPerRevolution = 256;
int motor2pin1 = 3;
int motor2pin2 = 5;
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);


void setup() {  
  pinMode(trigPin1, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin1, INPUT); // Sets the echoPin as an INPUT              
 pinMode(trigPin2, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin2, INPUT); // Sets the echoPin as an INPUT  
  Serial.print(9600);
  // Set the speed to 5 rpm:
  myStepper.setSpeed(80);
  
  


  
    Serial.println("clockwise");
  myStepper.step(-300);      //dakunata harawuna
  delay(20);
  
  // Step one revolution in the other direction:
  Serial.println("counterclockwise");       //mul position ekata awa
  myStepper.step(140);
  delay(20);
}
 
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin1, LOW);
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);
  
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  digitalWrite(trigPin2, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration1 = pulseIn(echoPin1, HIGH);
  duration2 = pulseIn(echoPin2, HIGH);
  // Calculating the distance
  distance1 = duration1 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
   distance2 = duration2 * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance1: ");
  Serial.print(distance1);
  Serial.println(" cm");
  Serial.print("Distance2: ");
  Serial.print(distance2);
  Serial.println(" cm");
  
  int x1=distance1;
            int x2=distance2;
               
if((x1>=x2-2) && (x1<=x2+2)) 
  {
    //forward
    analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  delay(1500);
    for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin2, LOW);
  analogWrite(motor2pin1, i);}
    
  }
  else if(x1<(x2+2))
  {
    //turn left & backward
    myStepper.step(256);
  delay(20);
  digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
   delay(1000); 

    //forward 
    myStepper.step(-300);      //dakunata harawuna
  delay(20);
  
  // Step one revolution in the other direction:
  Serial.println("counterclockwise");       //mul position ekata awa
  myStepper.step(140);
  delay(20);
    analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  delay(1500);
    for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin2, LOW);
  analogWrite(motor2pin1, i);}
  }
  else
  {
        //turn right & backward
        myStepper.step(-160);
  delay(20);
        digitalWrite(motor2pin1, LOW);
  analogWrite(motor2pin2, 200);
   delay(1000); 

    //forward 
     myStepper.step(-300);      //dakunata harawuna
  delay(20);
  
  // Step one revolution in the other direction:
  Serial.println("counterclockwise");       //mul position ekata awa
  myStepper.step(140);
  delay(20);
    analogWrite(motor2pin1, 200);
  digitalWrite(motor2pin2, LOW);
  delay(1500);
    for(int i=200;i>=0;i--)
  {digitalWrite(motor2pin2, LOW);
  analogWrite(motor2pin1, i);}
  }
  delay(500);
}
