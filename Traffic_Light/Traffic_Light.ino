// Pin assignments for LEDs
const int RED_LIGHT_PIN = 2;
const int YELLOW_LIGHT_PIN = 3;
const int GREEN_LIGHT_PIN = 4;

// Timings for each light in milliseconds
const int RED_LIGHT_DURATION = 5000;    // 5 seconds
const int YELLOW_LIGHT_DURATION = 2000; // 2 seconds
const int GREEN_LIGHT_DURATION = 5000;  // 5 seconds

void setup() {
  // Initialize LED pins as output
  pinMode(RED_LIGHT_PIN, OUTPUT);
  pinMode(YELLOW_LIGHT_PIN, OUTPUT);
  pinMode(GREEN_LIGHT_PIN, OUTPUT);
}

void loop() {
  // RED light on
  digitalWrite(RED_LIGHT_PIN, HIGH);
  delay(RED_LIGHT_DURATION);
  digitalWrite(RED_LIGHT_PIN, LOW);

  // GREEN light on
  digitalWrite(GREEN_LIGHT_PIN, HIGH);
  delay(GREEN_LIGHT_DURATION);
  digitalWrite(GREEN_LIGHT_PIN, LOW);

  // YELLOW light on
  digitalWrite(YELLOW_LIGHT_PIN, HIGH);
  delay(YELLOW_LIGHT_DURATION);
  digitalWrite(YELLOW_LIGHT_PIN, LOW);
}
