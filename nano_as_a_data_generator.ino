void setup() { Serial.begin(115200); }
void loop() {
  Serial.print("SKdRiOAIL4NMiAkgrfmq@");

  // temperature
  Serial.print(random(35, 37));
  Serial.print(".");
  Serial.print(random(1, 1000));
  Serial.print("!");

  // position
  Serial.print("spine_position");
  Serial.print("!");

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

  // snore
  Serial.print(random(1, 3));
  Serial.print(".");
  Serial.print(random(1, 100));
  Serial.print("!");
  Serial.println("#");
  delay(2000);
}
