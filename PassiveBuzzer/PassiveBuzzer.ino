#include "pitches.h"
 
// notes in the melody:
int song[] = {
    NOTE_B5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_B5, 400, 600,
    
    NOTE_B5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_B5, 400, 600,
    
    NOTE_B5, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_G5, 400, 500,
    NOTE_A5, 100, 150,
    NOTE_B5, 700, 1100,

    NOTE_C6, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_C6, 300, 400,

    NOTE_C6, 100, 150,
    NOTE_C6, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_B5, 200, 300,

    NOTE_B5, 100, 150,
    NOTE_B5, 100, 150,
    NOTE_B5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_A5, 500, 600,
    NOTE_D6, 400, 600,

    NOTE_B5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_B5, 400, 600,
    
    NOTE_B5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_B5, 400, 600,
    
    NOTE_B5, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_G5, 400, 500,
    NOTE_A5, 100, 150,
    NOTE_B5, 700, 1100,

    NOTE_C6, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_C6, 300, 400,

    NOTE_C6, 100, 150,
    NOTE_C6, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_B5, 200, 300,

    NOTE_B5, 100,  150,
    NOTE_B5, 100,  150,
    NOTE_D6, 200,  300,
    NOTE_D6, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_G5, 800, 1000,

    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_B5, 200, 300, 
    NOTE_A5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_D5, 800, 1000,

    NOTE_D5, 75,  150,
    NOTE_D5, 75,  150,
    NOTE_D5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_E5, 800, 1000,

    NOTE_E5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_FS5,800, 1000,

    NOTE_D6, 200, 300,
    NOTE_E6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_B5, 800, 1000,

    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_B5, 200, 300, 
    NOTE_A5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_D5, 800, 1000,

    NOTE_D5, 75,  150,
    NOTE_D5, 75,  150,
    NOTE_D5, 200, 300,
    NOTE_B5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_E5, 800, 1000,

    NOTE_E5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_B5, 200, 300, 
    NOTE_A5, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,

    NOTE_D6, 200, 300,
    NOTE_E6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_G5, 400, 600,

    NOTE_D6, 400, 600
};

int PIN_SELECTED;
 
void setup() {
    for (int i=2; i < 11; i++) {
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }
}
 
void loop() {  
  for (int thisNote = 0; thisNote < sizeof(song)/sizeof(int); thisNote += 3) {
    // Grab the appropriate PIN
    if (song[thisNote] == NOTE_A5) PIN_SELECTED = 6;
    else if (song[thisNote] == NOTE_B5) PIN_SELECTED = 7;
    else if (song[thisNote] == NOTE_D5) PIN_SELECTED = 2;
    else if (song[thisNote] == NOTE_E5) PIN_SELECTED = 3;
    else if (song[thisNote] == NOTE_FS5) PIN_SELECTED = 4;
    else if (song[thisNote] == NOTE_G5) PIN_SELECTED = 5;
    else if (song[thisNote] == NOTE_C6) PIN_SELECTED = 8;
    else if (song[thisNote] == NOTE_D6) PIN_SELECTED = 9;
    else PIN_SELECTED = 10;

    // Write HIGH to LED
    digitalWrite(PIN_SELECTED, HIGH);

    // Play the tune
    tone(13, song[thisNote], song[thisNote+1]/1.25);

    // Output the voice after several minutes
    delay(song[thisNote+2]/1.25);

    // Write LOW to LED
    digitalWrite(PIN_SELECTED, LOW);
  }

   
  // restart after two seconds 
  delay(0);
}