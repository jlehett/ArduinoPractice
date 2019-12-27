#include "pitches.h"
 
// notes in the melody:
int song[] = {
    NOTE_D3, 200, 300,
    NOTE_A3, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_A4, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_AS5, 200, 300,

    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_D3, 200, 300,
    NOTE_A3, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_A4, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_D3, 200, 300,
    NOTE_A3, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_A4, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    
    NOTE_G5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_D3, 200, 300,
    NOTE_A3, 200, 300, 
    NOTE_D4, 200, 300,
    NOTE_A4, 200, 300,

    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_AS5, 200, 300,
    NOTE_C6, 200, 300,
    NOTE_D2, 200, 300,

    NOTE_A2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,

    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,

    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D2, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,

    NOTE_D4, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_A4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,

    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D1, 200, 300,
    NOTE_D2, 200, 300,

    NOTE_D5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_FS3, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_C5, 200, 300,

    NOTE_A2, 200, 300,
    NOTE_D1, 200, 300,
    NOTE_D2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_FS3, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_A2, 200, 300,

    NOTE_D5, 200, 300,
    NOTE_C5, 200, 300,
    NOTE_A4, 200, 600,
    NOTE_D1, 200, 300,
    NOTE_D2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,

    NOTE_D2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D2, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D2, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D3, 200, 300,

    NOTE_FS3, 200, 300,
    NOTE_A3, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_FS5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_A5, 200, 600,
    NOTE_G5, 200, 600,
    NOTE_FS5, 200, 600,
    NOTE_D5, 200, 600,

    NOTE_A2, 200, 300,
    NOTE_E3, 200, 300,
    NOTE_C5, 200, 300,
    NOTE_C4, 200, 300,
    NOTE_E4, 200, 300,
    NOTE_C5, 200, 300,
    NOTE_C5, 200, 300,
    NOTE_C5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_E5, 200, 300,
    NOTE_E5, 200, 600,

    NOTE_D5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_F3, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_F4, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_A5, 200, 600,

    NOTE_G5, 200, 600,
    NOTE_F5, 200, 600,
    NOTE_D5, 200, 600,
    NOTE_G2, 200, 300,
    NOTE_C5, 200, 300,
    NOTE_A4, 200, 300,
    NOTE_B3, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,

    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_A5, 200, 600,
    NOTE_F5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_D2, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_D3, 200, 300,
    NOTE_F3, 200, 300,

    NOTE_A3, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_A3, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_A2, 200, 300,
    NOTE_A2, 200, 300,

    NOTE_F5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_C4, 200, 300,
    NOTE_E4, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_A5, 200, 300,
    NOTE_C3, 200, 300,

    NOTE_F5, 200, 300,
    NOTE_F5, 250, 300,
    NOTE_F5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_AS3, 200, 300,
    NOTE_D4, 200, 300,
    NOTE_F4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_F5, 200, 300,

    NOTE_D5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D3, 200, 300,
    NOTE_AS2, 200, 300,
    NOTE_F2, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_G5, 200, 300,
    NOTE_AS2, 200, 300,
    NOTE_G5, 200, 1200,

    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D6, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_D3, 200, 300,

    NOTE_D5, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_C2, 200, 300,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,

    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 600,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_D3, 200, 300,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 600,
    
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_D5, 200, 600,
    NOTE_D5, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 300,
    NOTE_D6, 200, 600,

    NOTE_D6, 200, 600,
    NOTE_G3, 200, 600,
    NOTE_G4, 200, 300,
    NOTE_D5, 200, 300,
    NOTE_A5, 200, 600,
    NOTE_A5, 200, 1200,
    NOTE_G5, 200, 300,

    NOTE_D4, 200, 300,
    NOTE_G5, 200, 600,
    NOTE_G5, 150, 300,
    NOTE_G5, 200, 600,
    NOTE_G5, 150, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_D5, 200, 600,
    NOTE_A5, 200, 1200,

    NOTE_G5, 200, 600,

    NOTE_G5, 200, 600,
    NOTE_G5, 150, 300,
    NOTE_G5, 200, 600,
    NOTE_G5, 150, 300,
    NOTE_G5, 200, 300,
    NOTE_F5, 200, 300,
    NOTE_D5, 200, 600,
};

int PIN_SELECTED;
 
void setup() {
    for (int i=2; i < 11; i++) {
        pinMode(i, OUTPUT);
        digitalWrite(i, LOW);
    }
}
 
void loop() {  
  for (int thisNote = 3*0; thisNote < sizeof(song)/sizeof(int); thisNote += 3) {
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
    tone(13, song[thisNote], song[thisNote+1]/2.0);

    // Output the voice after several minutes
    delay(song[thisNote+2]/2.0);

    // Write LOW to LED
    digitalWrite(PIN_SELECTED, LOW);
  }

   
  // restart after two seconds 
  delay(0);
}