
/*
Robotics with the BOE Shield – ServosOppositeDirections
Generate a servo full speed counterclockwise signal with pin 13 and
full speed clockwise signal with pin 12.
*/

#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

void setup()                                 // Built in initialization block
{
 servoLeft.attach(13);                      // Attach left signal to pin 13
 servoRight.attach(12);                     // Attach right signal to pin 12
}

void loop()                                  // Main loop auto-repeats
{

   delay(11000);
   digitalWrite(11, HIGH);
   delay(500);
   digitalWrite(11, LOW);
   digitalWrite(10, HIGH);
   delay(500);
   digitalWrite(10, LOW);          // the money never lie know
   digitalWrite(11, HIGH);
   delay(500);
   digitalWrite(11, LOW);
   digitalWrite(10, HIGH);
   delay(500);
   digitalWrite(10, LOW);
   delay(200);
                                    //flashing is over
  
   servoLeft.writeMicroseconds(1700);         //I'm the One yeah
   servoRight.writeMicroseconds(1300);
   delay(500);
   servoLeft.writeMicroseconds(1300);         // 1.7 ms -> counterclockwise
   servoRight.writeMicroseconds(1700);  
   delay(500);// 1.3 ms -> clockwise
   servoLeft.write(-90);
   delay(500);
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1300);
   delay(500);
   servoLeft.write(90);
   delay(700);
  
   servoLeft.writeMicroseconds(1300);         //Early morning ... ride now
   servoRight.writeMicroseconds(1300);
   delay(400);
   servoRight.writeMicroseconds(1300);
   servoLeft.writeMicroseconds(1300);
   delay(500);
   servoRight.writeMicroseconds(1700);         //I'm the One yeah
   servoLeft.writeMicroseconds(1300);
   delay(500);
   servoRight.writeMicroseconds(1300);
   servoLeft.writeMicroseconds(1700);
   delay(500);
   servoLeft.write(-90);
   servoLeft.writeMicroseconds(1700);         //Hear you sick of all those
   servoRight.writeMicroseconds(1300);
   delay(500);
   servoLeft.write(90);
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1300);
   delay(100);
   servoLeft.write(90);
   servoRight.writeMicroseconds(3400);
   servoLeft.writeMicroseconds(2600);
   delay(300);
   delay(500);
   servoLeft.write(-90);
   servoRight.writeMicroseconds(1700);         //Don't let the only real one
   servoLeft.writeMicroseconds(1300);
   delay(500);
   servoLeft.write(90);
   servoRight.writeMicroseconds(1700);
   servoLeft.writeMicroseconds(1300);
   delay(500);
   servoLeft.write(90);
   servoLeft.writeMicroseconds(2600);
   servoRight.writeMicroseconds(3400);
  
  
   delay(15000);
}

