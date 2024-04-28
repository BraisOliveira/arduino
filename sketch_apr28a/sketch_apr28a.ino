int reading;
int piezo = 8;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(piezo, OUTPUT);

}

void loop() {
  Serial.println(reading);
  delay(500);
 
  reading = analogRead(A0);

  if (reading > 400){  
    tone (piezo, 500, 1000);
    delay(1000);
    }
}
