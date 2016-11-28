int motor1 = ;
int motor2 = ;
int speed1 = ;
int speed2 = ;

int button = ;
int sensors[5] = {A0, A1, A2, A3, A4};

int bl_avrg;
int wh_avrg;
int tresshold;

int getAvrg() {}
void sumTresshold()
{
  tresshold = ((wh_tr - bl_tr)/2)+wh_tr; 
}
void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  while (true) {
    if (button == HIGH) {
      bl_avrg = getAvrg();
    }
  }

  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
  delay(1000);
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);

  wh_tr = getAvrg();
  sumTresshold();

}

void loop() {
}
