
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

char txtIntro[] = "PREMA NUN BOTON:";
const int pinPulsador = 8;


void setup() {
  //Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(pinPulsador, INPUT_PULLUP);
}

void loop() {
  //Serial.println("START");
  lcd.setCursor(0,0);
  lcd.print(txtIntro);
  lcd.setCursor(0,1);
  lcd.print("================");

  int estadoPulsador = digitalRead(pinPulsador);
  if(estadoPulsador == HIGH) {
    lcd.clear();
    //lcd.scrollDisplayRight();
    char txtIntro[] = "NAVE CCCP";
    lcd.print(txtIntro);
    delay(15000);
  }

}
