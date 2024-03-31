
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

char txtIntro[] = "PRESS A BUTTON:";
const int buttonPin8 = 8;
const int buttonPin9 = 9;
const int ledPin10 = 10;
const int ledPin11= 11;


void setup() {
  //Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(buttonPin8, INPUT_PULLUP);
  pinMode(ledPin10, OUTPUT);
}

void loop() {
  //Serial.println("START");
  lcd.setCursor(0,0);
  lcd.print(txtIntro);
  lcd.setCursor(0,1);
  lcd.print("================");

  int buttonState1 = digitalRead(buttonPin8);
  int buttonState2 = digitalRead(buttonPin9);
  if(buttonState1 == HIGH) {
    char txtStarShipA[] = "Vostok 1";
    char txtStarShipB[] = "CCCP - 1960";
    digitalWrite(ledPin10, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(txtStarShipA);
    lcd.setCursor(0,1);
    lcd.print(txtStarShipB);
    delay(10000);
    digitalWrite(ledPin10, LOW);
  }
  if(buttonState2 == HIGH) {
    char txtStarShipA[] = "Falcon Heavy";
    char txtStarShipB[] = "SpaceX - 2018";
    digitalWrite(ledPin11, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(txtStarShipA);
    lcd.setCursor(0,1);
    lcd.print(txtStarShipB);
    delay(10000);
    digitalWrite(ledPin11, LOW);
  }

}
