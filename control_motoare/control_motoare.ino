#include <Arduino.h>

#define enA 9
#define in1 6
#define in2 7


#define enB 11
#define in3 12
#define in4 13

//int motor1A = 7;
//int motor1B = 6;
//int motor2A = 5;
//int motor2B = 4;

void setup(){

  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  // Set initial rotation direction
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //pinMode(motor1A, OUTPUT);
  //pinMode(motor1B, OUTPUT);
  //pinMode(motor2A, OUTPUT);
  //pinMode(motor2B, OUTPUT);
}

void loop() {

  analogWrite(enA, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  analogWrite(enB, 255);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);  
  //digitalWrite(motor2A, 255);
  //digitalWrite(motor2B, 0);
  //delay(1000);

}