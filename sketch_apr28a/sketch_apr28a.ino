int reading;
int piezo = 8;
int red = 6;
int yellow = 5;
int green = 4;

void setup() {
  Serial.begin(9600);
  
  pinMode(A0, INPUT);
  pinMode(piezo, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  
  for (int i = 4; i < 7; i++) {
    digitalWrite(i, LOW);
  }
}


void loop() {
  Serial.println(reading);
  delay(500);

  reading = analogRead(A0);

  if (reading > 400) {
    tone (piezo, 1500, 1500);
    delay(800);
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    delay(1200);
    digitalWrite(red, LOW);
  } 
  
  if (reading > 200 && reading < 401) {
    tone (piezo, 1000, 1000);
    delay(800);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
    delay(1200);
    digitalWrite(yellow, LOW);
    } 
    
    if (reading < 201) {
        digitalWrite(green, HIGH);
      }
}
