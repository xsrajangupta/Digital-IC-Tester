#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
// Pin definitions
int A_in = 2;
int B_in = 3;
int AND_out = 4;
int OR_out  = 5;
int NOT_out = 6;
int btn_AND = 7;
int btn_OR  = 8;
int btn_NOT = 9;
void setup() {
  pinMode(A_in, OUTPUT);
  pinMode(B_in, OUTPUT);
  pinMode(AND_out, INPUT);
  pinMode(OR_out, INPUT);
  pinMode(NOT_out, INPUT);
  pinMode(btn_AND, INPUT_PULLUP);
  pinMode(btn_OR, INPUT_PULLUP);
  pinMode(btn_NOT, INPUT_PULLUP);
  lcd.begin(16,2);   // use begin (more reliable)
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("IC TESTER");
  lcd.setCursor(0,1);
  lcd.print("READY");
  delay(2000);
  lcd.clear();
}
void loop() {
  if(digitalRead(btn_AND) == LOW) {
    testAND();
  }
  else if(digitalRead(btn_OR) == LOW) {
    testOR();
  }
  else if(digitalRead(btn_NOT) == LOW) {
    testNOT();
  }
}
// -------- AND TEST --------
void testAND() {
  lcd.clear();
  lcd.print("Testing AND");
  delay(1000);
  int correct = 1;
  int A[4] = {0,0,1,1};
  int B[4] = {0,1,0,1};
  int expected[4] = {0,0,0,1};
  for(int i=0;i<4;i++) {
    digitalWrite(A_in, A[i]);
    digitalWrite(B_in, B[i]);
    delay(20);
    int out = digitalRead(AND_out);
    if(out != expected[i]) {
      correct = 0;
    }
  }
  lcd.clear();
  if(correct)
    lcd.print("AND IC GOOD");
  else
    lcd.print("AND IC FAULTY");
  delay(2000);
}
// -------- OR TEST --------
void testOR() {
  lcd.clear();
  lcd.print("Testing OR");
  delay(1000);
  int correct = 1;
  int A[4] = {0,0,1,1};
  int B[4] = {0,1,0,1};
  int expected[4] = {0,1,1,1};
  for(int i=0;i<4;i++) {
    digitalWrite(A_in, A[i]);
    digitalWrite(B_in, B[i]);
    delay(20);
    int out = digitalRead(OR_out);
    if(out != expected[i]) {
      correct = 0;
    }
  }
  lcd.clear();
  if(correct)
    lcd.print("OR IC GOOD");
  else
    lcd.print("OR FAULTY");
  delay(2000);
}
// -------- NOT TEST --------
void testNOT() {
  lcd.clear();
  lcd.print("Testing NOT");
  delay(1000);
  int correct = 1;
  int A[2] = {0,1};
  int expected[2] = {1,0};
  for(int i=0;i<2;i++) {
    digitalWrite(A_in, A[i]);
    delay(20);
    int out = digitalRead(NOT_out);
    if(out != expected[i]) {
      correct = 0;
    }
  }
  lcd.clear();
  if(correct)
    lcd.print("NOT IC GOOD");
  else
    lcd.print("NOT IC FAULTY");
  delay(2000);
}