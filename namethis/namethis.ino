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

void setup() {
  while (true) {
    if (button == HIGH) {
      bl_avrg = getAvrg();
    }
  }
}

void loop() {
}
