
// in this code nano will genarate data for two patients
#include <SoftwareSerial.h>

SoftwareSerial patient_2(2, 3);
void setup() {
  Serial.begin(9600);
  patient_2.begin(9600);
}
void loop() {

  Serial.print("SKdRiOAIL4NMiAkgrfmq@");
  patient_2.print("3a2v3Vlb5UD6RFx0Eyg3");
  // temperature
  Serial.print(random(35, 37));
  Serial.print(".");
  Serial.print(random(1, 1000));
  Serial.print("!");

  patient_2.print(random(35, 37));
  patient_2.print(".");
  patient_2.print(random(1, 1000));
  patient_2.print("!");

  // position
  Serial.print("spine_position");
  Serial.print("!");

  patient_2.print("Spine_position");
  patient_2.print("!");

  // GSR
  Serial.print(random(1, 3));
  Serial.print(".");
  Serial.print(random(1, 1000));

  Serial.print(",");

  Serial.print(random(100000, 999999));
  Serial.print(".");
  Serial.print(random(1, 100));

  Serial.print(",");

  Serial.print(random(0, 3));
  Serial.print(".");
  Serial.print(random(1, 100));
  Serial.print("!");

  patient_2.print(random(1, 3));
  patient_2.print(".");
  patient_2.print(random(1, 1000));

  patient_2.print(",");

  patient_2.print(random(100000, 999999));
  patient_2.print(".");
  patient_2.print(random(1, 100));

  patient_2.print(",");

  patient_2.print(random(0, 3));
  patient_2.print(".");
  patient_2.print(random(1, 100));
  patient_2.print("!");

  // snore
  Serial.print(random(1, 3));
  Serial.print(".");
  Serial.print(random(1, 100));
  Serial.print("!");
  Serial.println("#");

  patient_2.print(random(1, 3));
  patient_2.print(".");
  patient_2.print(random(1, 100));
  patient_2.print("!");
  patient_2.println("#");

  delay(2000);
}
