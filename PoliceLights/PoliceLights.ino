// Define Pins
#define RED 6
#define BLUE 5

// Global variables controlling RGB colors
float red, blue;
float valueJump = 0.05;
float maxValue = 100.0;
float minValue = 0.0;

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(BLUE, OUTPUT);

    digitalWrite(RED, LOW);
    digitalWrite(BLUE, LOW);
}

void loop() {
    // Increase red, decrease blue
    red = minValue;
    blue = maxValue;
    while (red <= maxValue && blue >= minValue) {
        analogWrite(RED, red);
        analogWrite(BLUE, blue);
        red += valueJump;
        blue -= valueJump;
    }
    // Decrease red, increase blue
    red = maxValue;
    blue = minValue;
    while (red >= minValue && blue <= maxValue) {
        analogWrite(RED, red);
        analogWrite(BLUE, blue);
        red -= valueJump;
        blue += valueJump;
    }
}
