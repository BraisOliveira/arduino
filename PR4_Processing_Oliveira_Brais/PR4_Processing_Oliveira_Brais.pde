import processing.serial.*;

Serial myPort;
String val;

void setup() {
  //printArray(Serial.list());
  myPort = new Serial(this, "/dev/ttyACM0", 9600);
  myPort.bufferUntil('\n');
  size(400, 600);
  ellipseMode(CENTER);
}

void draw() {
  
background(0);
int sensorValue = int(val.trim());

if (sensorValue < 201) {                
    text("Sensor Value: " + sensorValue, 10, 30);
    circle(200, 300, 300);
    fill(0, 255, 0);
  }
  
if (sensorValue > 200 & sensorValue < 401) {                
    text("Sensor Value: " + sensorValue, 10, 30);
    circle(200, 300, 300);
    fill(255, 255, 0);
  }
  
if (sensorValue < 400) {                
    text("Sensor Value: " + sensorValue, 10, 30);
    circle(200, 300, 300);
    fill(255, 0, 0);
  }

}

void serialEvent(Serial myPort) {
  val = myPort.readStringUntil('\n');
}
