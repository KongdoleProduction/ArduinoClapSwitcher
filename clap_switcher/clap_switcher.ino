#include <Servo.h>

Servo servo;
int servo_pin = 2;
float sensor_threshold_high = 2;  // increase this if sensor is too sensitive
float sensor_threshold_low = 1;
float sensor_ambient;

int servo_on = 1200;  // change this value if servo "ON" position is not correct 
int servo_off = 1700; // change this value if servo "OFF" position is not correct
int servo_on_time = 400;  // increase this if servo turns off too quickly

void setup() {
  /* mic sensor power on */
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);

  /* mic ambient sampling */
  int sample_num = 100;
  long temp = 0;
  for(int i=0; i<sample_num; i++) {
    int sensor_value = analogRead(A2);
    temp += sensor_value;
    delay(1);
  }
  sensor_ambient = temp / sample_num;

  Serial.begin(115200);
  Serial.println(sensor_ambient);
}

bool clapDetected();
void turnSwtich();

void loop() {

  if (clapDetected()) {
    turnSwitch();
  }
}

bool clapDetected() {
  int sensor_value = analogRead(A2);
  if (sensor_value > sensor_ambient + sensor_threshold_high) {
    Serial.print("high");
    for (int i=0; i<5; i++) {
      delay(10);
      sensor_value = analogRead(A2);
      if (sensor_value < sensor_ambient + sensor_threshold_low) {
        Serial.println("clap!");
        return true;
      }
    }
  }
  return false;
}

/* toggle switch on and off */
void turnSwitch() {
  static bool isOn = true;
  servo.attach(servo_pin);
  if (isOn) {
    servo.writeMicroseconds(servo_off);
    isOn = false;
  } else {
    servo.writeMicroseconds(servo_on);
    isOn = true;
  }
  delay(servo_on_time);
  servo.detach();
}

