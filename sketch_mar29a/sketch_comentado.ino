#include <LiquidCrystal.h>  // Incluye la biblioteca LiquidCrystal para el control del LCD

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  // Inicializa un objeto LiquidCrystal para el LCD

char txtIntro[] = "PRESS A BUTTON:";  // Define un texto para mostrar en la primera línea del LCD

const int buttonPin8 = 8;  // Define el pin al que está conectado el primer botón
const int buttonPin9 = 9;  // Define el pin al que está conectado el segundo botón
const int ledPin10 = 10;   // Define el pin al que está conectado el primer LED
const int ledPin11 = 11;   // Define el pin al que está conectado el segundo LED

void setup() {
  //Serial.begin(9600);  // Inicializa la comunicación serial (comentado, utilidad de debug)
  lcd.begin(16,2);  // Inicializa el LCD con 16 columnas y 2 filas
  pinMode(buttonPin8, INPUT_PULLUP);  // Configura el pin del primer botón como entrada con resistencia de pull-up
  pinMode(ledPin10, OUTPUT);  // Configura el pin del primer LED como salida
}

void loop() {
  //Serial.println("START");  // Imprime un mensaje en el monitor serial (comentado)
  lcd.setCursor(0,0);  // Establece la posición del cursor del LCD en la primera columna y primera fila
  lcd.print(txtIntro);  // Imprime el texto de introducción en el LCD
  lcd.setCursor(0,1);  // Establece la posición del cursor del LCD en la primera columna y segunda fila
  lcd.print("================");  // Imprime una línea de separación en el LCD

  int buttonState1 = digitalRead(buttonPin8);  // Lee el estado del primer botón
  int buttonState2 = digitalRead(buttonPin9);  // Lee el estado del segundo botón
  
  // Comprueba si se presionó el primer botón
  if(buttonState1 == HIGH) {
    char txtStarShipA[] = "Vostok 1";  // Define el texto para el primer botón
    char txtStarShipB[] = "CCCP - 1960";  // Define el texto para el primer botón
    digitalWrite(ledPin10, HIGH);  // Enciende el primer LED
    lcd.clear();  // Borra el contenido del LCD
    lcd.setCursor(0,0);  // Establece la posición del cursor del LCD en la primera columna y primera fila
    lcd.print(txtStarShipA);  // Imprime el texto para el primer botón en el LCD
    lcd.setCursor(0,1);  // Establece la posición del cursor del LCD en la primera columna y segunda fila
    lcd.print(txtStarShipB);  // Imprime el texto para el primer botón en el LCD
    delay(10000);  // Espera 10 segundos
    digitalWrite(ledPin10, LOW);  // Apaga el primer LED
  }
  
  // Comprueba si se presionó el segundo botón
  if(buttonState2 == HIGH) {
    char txtStarShipA[] = "Falcon Heavy";  // Define el texto para el segundo botón
    char txtStarShipB[] = "SpaceX - 2018";  // Define el texto para el segundo botón
    digitalWrite(ledPin11, HIGH);  // Enciende el segundo LED
    lcd.clear();  // Borra el contenido del LCD
    lcd.setCursor(0,0);  // Establece la posición del cursor del LCD en la primera columna y primera fila
    lcd.print(txtStarShipA);  // Imprime el texto para el segundo botón en el LCD
    lcd.setCursor(0,1);  // Establece la posición del cursor del LCD en la primera columna y segunda fila
    lcd.print(txtStarShipB);  // Imprime el texto para el segundo botón en el LCD
    delay(10000);  // Espera 10 segundos
    digitalWrite(ledPin11, LOW);  // Apaga el segundo LED
  }
}
