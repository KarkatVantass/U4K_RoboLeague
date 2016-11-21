int sensors[5] = {A0, A1, A2, A3, A4};
bool is_it_bl[];
int blackTr
char Mapper() {
  for (int i = 0; i < 5; i++) {
    is_it_bl[i] = analogRead(sensors[i])<blackTr;
  }
  if(is_it)
}
void setup() {

}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
