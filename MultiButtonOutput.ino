const int buttonPins[3] = {2, 3, 4};
const int ledPins[3] = {11, 12, 13};

bool ledStates[3] = {false, false, false};
unsigned long lastPress[3] = {0, 0, 0};
const unsigned long debounceDelay = 50;

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(buttonPins[i], INPUT); // use INPUT_PULLUP if using internal pull-ups
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    if (digitalRead(buttonPins[i]) == HIGH && millis() - lastPress[i] > debounceDelay) {
      ledStates[i] = !ledStates[i];                    // Toggle LED state
      digitalWrite(ledPins[i], ledStates[i]);          // Update LED
      lastPress[i] = millis();                         // Update debounce timer
      while (digitalRead(buttonPins[i]) == HIGH);      // Wait for button release
    }
  }
}
