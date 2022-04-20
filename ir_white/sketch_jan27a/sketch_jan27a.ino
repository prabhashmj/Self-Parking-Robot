int IRSensor = 3; // connect ir sensor to arduino pin 7

void setup() 
{
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  Serial.begin(9600); // open the serial port at 9600 bps:
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1)
    Serial.print("HIGH-   No Obstacle/Black Surface\n"); 
  else
    Serial.print("LOW-    Obstacle Detected/White Surface\n"); 
  
}
