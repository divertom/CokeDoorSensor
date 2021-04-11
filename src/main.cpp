#include <Arduino.h>

#define DoorSensorPin 15
bool bDoorIsOpen = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(DoorSensorPin, INPUT);

  Serial.println("Sensor initialized");
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(DoorSensorPin) == 1)
  {
    //door open
    if (!bDoorIsOpen) Serial.println("DoorOpen");
    bDoorIsOpen = true;
  }
  else
  {
    //door closed
    if(bDoorIsOpen) Serial.println("DoorClosed");
    bDoorIsOpen = false;

  }

  delay(100);

}