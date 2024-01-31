// Motor pins
const int motor1Pin1 = 10;
const int motor1Pin2 = 11;
const int motor2Pin1 = 9;
const int motor2Pin2 = 8;

// Servo pin
const int servoPin = 13;

// Ultrasonic sensor pins
const int triggerPin = 7;
const int echoPin = 6;

// Distance threshold
const int distanceThreshold = 10;

// Robot speed
const int speed = 255;

void setup() {
  // Initialize motors
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

  // Initialize servo
  pinMode(servoPin, OUTPUT);

  // Initialize ultrasonic sensor
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Move forward
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);

  // Check for obstacles
  int distance = getDistance();

  if (distance < distanceThreshold) {
    // Stop the car
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    digitalWrite(motor2Pin1, LOW);
    digitalWrite(motor2Pin2, LOW);

    // Turn the car left
    turnLeft();
  }
}

int getDistance() {
  // Send trigger pulse
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  // Wait for echo pulse
  long duration = pulseIn(echoPin, HIGH);

  // Calculate distance
  int distance = duration * 0.034 / 2;

  return distance;
}

void turnLeft() {
  // Turn the servo left
  for (int i = 0; i < 180; i++) {
    analogWrite(servoPin, i);
    delay(10);
  }
}

void turnRight() {
  // Turn the servo right
  for (int i = 180; i >= 0; i--) {
    analogWrite(servoPin, i);
    delay(10);
  }
}