int sensors[5] = {A0, A1, A2, A3, A4};
int sensorsCount = 5
bool is_it_bl[];
int blackTr;
int arHelper = 0;
char directions[];
char getDirection() {
  for (int i = 0; i < sensorsCount; i++) {
    is_it_bl[i] = analogRead(sensors[i]) < blackTr;
  }
  if (is_it_bl[0]) {
    return 'R';
  }
  if (is_it_bl[2]) {
    return 'F';
  }
  if (is_it_bl[4]) {
    return 'L';
  }
}
void setup() {
  
}

void loop() {
  directions[arHelper] = getDirection();
  atHelper+=1
}
