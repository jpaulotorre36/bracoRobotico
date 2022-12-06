#include <Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;
int ang1 = 90;
int ang2 = 90;
int ang3 = 90;
int ang4 = 90;

void setup() {
  motor1.attach(5);
  motor2.attach(6);
  motor3.attach(7);
  motor4.attach(8);
  motor1.write(ang1);
  motor2.write(ang2);
  motor3.write(ang3);
  motor4.write(ang4);
  
}

void loop() {
  ang1=map(analogRead(pot1), 0, 1023, 0, 180);
  motor1.write(ang1);
  ang2=map(analogRead(pot2), 0, 1023, 0, 180);
  motor2.write(ang2);
  ang3=map(analogRead(pot3), 0, 1023, 0, 180);
  motor3.write(ang3);
  ang4=map(analogRead(pot4), 0, 1023, 0, 90);
  motor4.write(ang4);
}
