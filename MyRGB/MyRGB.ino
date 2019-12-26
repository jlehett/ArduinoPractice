// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

// Global Variables controlling RGB colors
float red, green, blue;
float valueJump = 0.005;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);
}

// main loop
void loop()
{
  // Modulate red
  red = 255.0;
  blue = 0.0;
  while (red >= 0.0)
  {
    red -= valueJump;
    blue += valueJump;
    analogWrite(RED, red);
    analogWrite(BLUE, blue);
  }
  // Modulate blue
  red = 0.0;
  blue = 255.0;
  while (blue >= 0.0)
  {
    blue -= valueJump;
    red += valueJump;
    analogWrite(BLUE, blue);
    analogWrite(RED, red);
  }
}
