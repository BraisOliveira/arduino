import processing.serial.*;

Serial myPort;

void setup() {
  //printArray(Serial.list());
  myPort = new Serial(this, "port name (see in Arduino IDE)", 9600);
  size(400, 600);
  ellipseMode(CENTER);
}

void draw() {
  background(0);
  fill(255, 0, 0);
  circle(200, 300, 300);
}
