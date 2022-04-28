#include <MotorDriver.h>

const int greenLED = 8;
const int yellowLED = 9;
const int redLED = 10;
const int greenButton = 7;
const int yellowButton = 6;
const int redButton = 5;
// Motor A connections
int enA = 13;
int in1 = 12;
int in2 = 4;
// Motor B connections
int enB = 11;
int in3 = 3;
int in4 = 2;



void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(greenButton, INPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(yellowButton, INPUT);
  pinMode(redLED, OUTPUT);
  pinMode(redButton, INPUT);
  // Set all the motor control pins to outputs
//  pinMode(enA, OUTPUT);
//  pinMode(enB, OUTPUT);
//  pinMode(in1, OUTPUT);
//  pinMode(in2, OUTPUT);
//  pinMode(in3, OUTPUT);
//  pinMode(in4, OUTPUT);
  
  // Turn off motors - Initial state
//  digitalWrite(in1, LOW);
//  digitalWrite(in2, LOW);
//  digitalWrite(in3, LOW);
//  digitalWrite(in4, LOW);
//  analogWrite(enA, 255);
//  analogWrite(enB, 255);
}
void loop() {
  if (digitalRead(greenButton) == LOW) {
    digitalWrite(greenLED, HIGH);
    // Turn on motor A & B
    //digitalWrite(in1, HIGH);
    //digitalWrite(in2, LOW);

  }
  else {
    digitalWrite(greenLED, LOW);
    //digitalWrite(in1, LOW);
    //digitalWrite(in2, LOW);

    
    
  }
  if (digitalRead(yellowButton) == LOW) {
    digitalWrite(yellowLED, HIGH);
    //digitalWrite(in3, HIGH);
    //digitalWrite(in4, LOW);

  }
  else {
    digitalWrite(yellowLED, LOW);
    //digitalWrite(in3, LOW);
    //digitalWrite(in4, LOW);

  }
  if (digitalRead(redButton) == LOW) {
    digitalWrite(redLED, HIGH);
  }
  else {
    digitalWrite(redLED, LOW);
  }
}

