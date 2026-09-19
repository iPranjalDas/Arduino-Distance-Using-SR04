// ============================================================================
// Project: Arduino-Distance-Using-SR04
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

int trig = 2;   // can be a digital only pin
int echo = 3;   // has to be a PWM
float timeduration, distance;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  timeduration = pulseIn(echo, HIGH);   // finds the time of pulse in pin 
  // in this case LOW-HIGH-LOW pulse
  distance = 0.034*timeduration/2;
  Serial.print("Distance in cm : ");
  Serial.println(distance);
  delay(100);
}

// Author Footprint: //Pranjal Das
