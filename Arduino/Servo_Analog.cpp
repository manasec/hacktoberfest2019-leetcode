#include <Servo.h>
//JRA_I
//Just Robot Arm I 2019/10/12

Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;


void servo_yellow(){
	int angulo;
	angulo = analogRead(0);
  	angulo = map(angulo,0,1023,0,180);
  
  servo0.write(angulo);
  delay(20);
}

void servo_blue(){
	int angulo;
  	angulo = analogRead(1);
 	angulo = map(angulo,0,1023,0,180);
  
  servo1.write(angulo);
  delay(20);
}

void servo_green(){
	int angulo;
  	angulo = analogRead(2);
  	angulo = map(angulo,0,1023,0,180);
  
  servo2.write(angulo);
  delay(20);

}

void servo_gray(){
  int angulo;
  angulo = analogRead(3);
  angulo = map(angulo,0,1023,0,180);
  
 servo3.write(angulo);
  delay(20);
  
}

void setup()
{
  servo0.attach(0);
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
}

void loop()
{  
 	servo_yellow();
 	servo_blue();
  	servo_green();
  	servo_gray();
}