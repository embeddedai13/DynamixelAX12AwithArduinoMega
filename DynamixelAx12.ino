#include <DynamixelSerial.h>

void setup(){
Dynamixel.setSerial(&Serial); // &Serial - Arduino UNO/NANO/MICRO, &Serial1, &Serial2, &Serial3 - Arduino Mega
Dynamixel.begin(1000000,2);  // Inicialize the servo at 1 Mbps and Pin Control 2
delay(1000);
}

void loop(){

  
//  Dynamixel.moveSpeed(1,random(200,800),random(200,800));
   Dynamixel.ledStatus(1,ON);
  Dynamixel.move(1,0);  // Move the Servo radomly from 200 to 800
  Dynamixel.move(2,0);
  delay(1000);
  Dynamixel.move(1,300);  // Move the Servo radomly from 200 to 800
  Dynamixel.move(2,300);
  delay(1000);
  Dynamixel.move(1,400);  // Move the Servo radomly from 200 to 800
  Dynamixel.move(2,400);
  delay(1000);
  Dynamixel.move(1,500);
  Dynamixel.move(2,500);// Move the Servo radomly from 200 to 800
  delay(1000);
  Dynamixel.move(1,600);
  Dynamixel.move(2,600);// Move the Servo radomly from 200 to 800
  delay(1000);
  Dynamixel.move(1,700);
  Dynamixel.move(2,700);// Move the Servo radomly from 200 to 800
  delay(1000);
  Dynamixel.move(1,800);
  Dynamixel.move(2,800);// Move the Servo radomly from 200 to 800
  delay(1000);
  Dynamixel.move(1,900);
  Dynamixel.move(2,900);// Move the Servo radomly from 200 to 800
  delay(1000);
  Dynamixel.move(1,950);
  Dynamixel.move(2,950);// Move the Servo radomly from 200 to 800
  delay(1000);
  Dynamixel.move(1,1000);
  Dynamixel.move(2,1000);// Move the Servo radomly from 200 to 800
  delay(1000);

   
//  delay(2000);
//  Dynamixel.setEndless(1,ON);
//  delay(4000);
// Dynamixel.setEndless(1,OFF);
//  Dynamixel.turn(1,RIGTH,1000);
//  delay(1000);
//  Dynamixel.turn(1,LEFT,1000);
//  delay(1000);
  
/* 
  Dynamixel.moveRW(1,512);
  delay(1000);
  Dynamixel.action();*/
  Dynamixel.ledStatus(1,OFF);
 
delay(5000);

}
