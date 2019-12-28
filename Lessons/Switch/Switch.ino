// Define Pins
#define RED 6
#define BLUE 5
#define BUTTON 2

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(BUTTON) == LOW) {
        digitalWrite(RED, HIGH);
        digitalWrite(BLUE, LOW);
    } else {
        digitalWrite(RED, LOW);
        digitalWrite(BLUE, HIGH);
    }
}