#include <Stepper.h>

const int stepsPerRevolution = 64;  // change this to fit the number of steps per revolution
// for your motor

int rpm = 1;

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 32, 35, 34, 39);
Stepper myStepper2(stepsPerRevolution, 33, 25, 26, 27);

int stepCount1 = 0;  
int stepCount2 = 0;    // number of steps the motor has taken

void setup() {
  // initialize the serial port:
  Serial.begin(9600);
  myStepper.setSpeed(rpm);
  myStepper2.setSpeed(rpm);
}
}

void loop() {
  // step one step:
  myStepper.step(1);
  myStepper2.step(1);
  Serial.print("steps 1:");
  Serial.println(stepCount1);
  Serial.print("steps 2:");
  Serial.println(stepCount2);
  stepCount1++;
  stepCount2++;
  delay(500);
}
