#define trig1 9
#define echo1 10
#define trig2 7
#define echo2 8

#define motorPin 5

void setup() {
  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);

  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);

  pinMode(motorPin, OUTPUT);
}

int getDistance(int trigPin, int echoPin) {
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  return distance;
}

void loop() {
  int d1 = getDistance(trig1, echo1);
  int d2 = getDistance(trig2, echo2);

  // If ANY sensor detects obstacle
  if ((d1 > 0 && d1 < 50) || (d2 > 0 && d2 < 50)) {
    digitalWrite(motorPin, HIGH);
  } else {
    digitalWrite(motorPin, LOW);
  }

  delay(100);
}