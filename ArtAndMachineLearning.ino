int thumb;
int first_finger;
int second_finger;
#include "FlexLibrary.h"

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int thumb = analogRead(A0);
  int first_finger = analogRead(A1);
  int second_finger = analogRead(A2);

  // Serial.print(thumb);
  // Serial.println();

  // Serial.print(first_finger);
  // Serial.println();

  // Serial.print(second_finger);
  // Serial.println();

  //LOVE(0,0,1)
  if (thumb >= 350 && first_finger >= 350 && second_finger < 350) {
    Serial.print("LOVE");
    Serial.println();
    delay(1000);
  }

  //AGREE(1,1,1)
  if (thumb < 350 && first_finger < 350 && second_finger < 350) {
    Serial.print("AGREE");
    Serial.println();
    delay(1000);

  }

  //UNITY(1,0,0)
  else if (thumb < 350 && first_finger >= 350 && second_finger >= 350) {
    Serial.print("UNITY");
    Serial.println();
    delay(1000);

  }

  //LETTER D(1,0,1)
  else if (thumb < 350 && first_finger >= 350 && second_finger < 350) {
    Serial.print("D");
    Serial.println();
    delay(1000);

  }

  //NUMBER 10(0,1,1)
  else if (thumb >= 350 && first_finger < 350 && second_finger < 350) {
    Serial.print("10");
    Serial.println();
    delay(1000);

  }

  else {
    Serial.println();
     delay(1000);
  }
}