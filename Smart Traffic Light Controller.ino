// Smart Traffic Light Controller using ESP8266 NodeMCU

const int RED = D5;
const int YELLOW = D6;
const int GREEN = D7;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  // Red light ON for 5 seconds
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  delay(5000);

  // Green light ON for 5 seconds
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(5000);

  // Yellow light ON for 5 seconds
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(5000);
}