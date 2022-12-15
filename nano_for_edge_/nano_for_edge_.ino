
// in this code nano will genarate data for two patients
#include <SoftwareSerial.h>

SoftwareSerial patient_1(2, 3);
SoftwareSerial patient_2(4, 5);
void dataSender(int patient_number);
void setup() {
  Serial.begin(9600);
  patient_1.begin(9600);
  patient_2.begin(9600);
}
void loop() {
  dataSender(1);
  delay(2000);
  dataSender(2);
  delay(3000);
}
void dataSender(int patient_number) {
  if (patient_number == 1) {
    Serial.println("Patient 1");
    patient_1.print("SKdRiOAIL4NMiAkgrfmq@");

    // temperature
    patient_1.print(random(35, 37));
    patient_1.print(".");
    patient_1.print(random(1, 1000));
    patient_1.print("!");

    // position
    patient_1.print("spine_position");
    patient_1.print("!");

    // GSR
    patient_1.print(random(1, 3));
    patient_1.print(".");
    patient_1.print(random(1, 1000));

    patient_1.print(",");

    patient_1.print(random(100000, 999999));
    patient_1.print(".");
    patient_1.print(random(1, 100));

    patient_1.print(",");

    patient_1.print(random(0, 3));
    patient_1.print(".");
    patient_1.print(random(1, 100));
    patient_1.print("!");

    // snore
    patient_1.print(random(1, 3));
    patient_1.print(".");
    patient_1.print(random(1, 100));
    patient_1.print("!");
    patient_1.println("#");

  } else if (patient_number == 2) {
    Serial.println("Patient 2");
    patient_2.print("3a2v3Vlb5UD6RFx0Eyg3@");

    // temperature
    patient_2.print(random(35, 37));
    patient_2.print(".");
    patient_2.print(random(1, 1000));
    patient_2.print("!");

    // position
    patient_2.print("Spine_position");
    patient_2.print("!");

    // GSR
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
    patient_2.print(random(1, 3));
    patient_2.print(".");
    patient_2.print(random(1, 100));
    patient_2.print("!");
    patient_2.println("#");
  } else {
    Serial.println("Invalid patient number");
  }
}