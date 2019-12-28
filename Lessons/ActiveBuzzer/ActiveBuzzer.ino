// Define Pins
#define BUZZER 12

void setup() {
    pinMode(BUZZER, OUTPUT);
}

void loop() {
    unsigned char i;
    while (1) {
        for (i=0; i<20; i++) {
            digitalWrite(BUZZER, HIGH);
            delay(1);
            digitalWrite(BUZZER, LOW);
            delay(1);
        }
        for (i=0; i<20; i++) {
            digitalWrite(BUZZER, HIGH);
            delay(2);
            digitalWrite(BUZZER, LOW);
            delay(2);
        }

        delay(250);
    }
}