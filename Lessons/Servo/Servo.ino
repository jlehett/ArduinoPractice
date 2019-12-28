#include <Servo.h>
Servo myservo;



void setup(){
    myservo.attach(9);
    myservo.write(90);// move servos to center position -> 90°
} 
void loop(){
    myservo.write(0);// move servos to center position -> 90°
    delay(250);
    myservo.write(90);// move servos to center position -> 60°
    delay(250);
}