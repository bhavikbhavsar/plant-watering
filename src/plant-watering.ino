//for 12 hrs interval and 15 seconds duration
unsigned long interval  = 1000 * 60 * 60 * 12;
unsigned long duration = 1000 * 15;

void trigger() {
  digitalWrite(5, LOW);
  delay(duration);
  digitalWrite(5, HIGH);
  
}

void setup() {
  pinMode(5, OUTPUT);
  digitalWrite(5, LOW);
}

void loop() {
  trigger();
  delay(interval);
}
