//int LEDs[] = {8,9,7,6,4,3,2};        // for Arduino microcontroller
//int LEDs[] = {D2,D1,D3,D4,D6,D7,D8}; // for ESP8266 microcontroller
int LEDs[] = {22, 23, 1, 3, 19, 18, 5, 21};    // for ESP32 microcontroller

//num = {g, f, e, d, c, b, a, DP}
int one[] = {0, 0, 0, 0, 1, 1, 0, 0};
int two[] = {1, 0, 1, 1, 0, 1, 1, 0};
int three[] = {1, 0, 0, 1, 1, 1, 1, 0};
int four[] = {1, 1, 0, 0, 1, 1, 0, 0};
int five[] = {1, 1, 0, 1, 1, 0, 1, 0};
int six[] = {1, 1, 1, 1, 1, 0, 1, 0};
int seven[] = {0, 0, 0, 0, 1, 1, 1, 0};
int seven_sp[] = {0, 1, 0, 0, 1, 1, 1, 0};
int eight[] = {1, 1, 1, 1, 1, 1, 1, 0};
int nine[] = {1, 1, 0, 1, 1, 1, 1, 0};
int zero[] = {0, 1, 1, 1, 1, 1, 1, 0};

int one_d[] = {0, 0, 0, 0, 1, 1, 0, 1};
int two_d[] = {1, 0, 1, 1, 0, 1, 1, 1};
int three_d[] = {1, 0, 0, 1, 1, 1, 1, 1};
int four_d[] = {1, 1, 0, 0, 1, 1, 0, 1};
int five_d[] = {1, 1, 0, 1, 1, 0, 1, 1};
int six_d[] = {1, 1, 1, 1, 1, 0, 1, 1};
int seven_d[] = {0, 0, 0, 0, 1, 1, 1, 1};
int seven_sp_d[] = {0, 1, 0, 0, 1, 1, 1, 1};
int eight_d[] = {1, 1, 1, 1, 1, 1, 1, 1};
int nine_d[] = {1, 1, 0, 1, 1, 1, 1, 1};
int zero_d[] = {0, 1, 1, 1, 1, 1, 1, 1};

void setup() {
  for (int i = 0; i<=7; i++) pinMode(LEDs[i], OUTPUT);
}

void loop() {
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], one[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], two[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], three[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], four[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], five[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], six[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], seven[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], seven_sp[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], eight[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], nine[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], zero[i]);
 delay(2000);

 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], one_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], two_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], three_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], four_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], five_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], six_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], seven_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], seven_sp_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], eight_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], nine_d[i]);
 delay(2000);
 for (int i = 0; i<=7; i++) digitalWrite(LEDs[i], zero_d[i]);
 delay(2000);
}
