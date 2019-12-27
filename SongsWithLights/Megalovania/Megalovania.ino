#include "pitches.h"
 
// notes in the melody:
float song[] = {
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_D5, 2, 2,

    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,

    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,

    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,

    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,

    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,

    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,

    NOTE_C4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_B3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,

    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_AS3, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 2, 2,
    NOTE_F4, 1, 1,
    NOTE_F4, 2, 2,

    NOTE_F4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 2, 2,
    NOTE_D4, 3, 3,
    NOTE_D4, 2, 2,
    NOTE_F4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_F4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_GS4, 2, 2,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 3, 3,

    NOTE_F4, 2, 2,
    NOTE_F4, 1, 1,
    NOTE_F4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_GS4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_C5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_D5, 2, 2,
    NOTE_D5, 2, 2,
    NOTE_D5, 1, 1,
    NOTE_A4, 1, 1,
    NOTE_D5, 1, 1,
    NOTE_C5, 9, 9,

    NOTE_A4, 2, 2,
    NOTE_A4, 1, 1,
    NOTE_A4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_G4, 5, 5,
    NOTE_A4, 2, 2,

    NOTE_A4, 1, 1,
    NOTE_A4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_D5, 2, 2,
    NOTE_A4, 1, 1,
    NOTE_G4, 2, 2,
    NOTE_D5, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_C5, 2, 2,
    NOTE_A4, 2, 2,

    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 2, 2,
    NOTE_E4, 1, 1,
    NOTE_F4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_C5, 17, 17,

    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 0.5, 0.5,
    NOTE_F4, 0.5, 0.5,
    NOTE_D4, 0.5, 0.5,
    NOTE_F4, 0.5, 0.5,
    NOTE_G4, 9, 9,
    NOTE_GS4, 2, 2,

    NOTE_A4, 1, 1,
    NOTE_C5, 2, 2,
    NOTE_A4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_E4, 1, 1,
    NOTE_F4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_GS4, 2, 2,
    NOTE_C5, 2, 2,
    NOTE_CS5, 2, 2,
    NOTE_GS4, 2, 2,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 9, 9,

    NOTE_F3, 2, 2,
    NOTE_G3, 2, 2,
    NOTE_A3, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_E4, 4, 4,
    NOTE_D4, 4, 4,
    NOTE_E4, 4, 4,
    
    NOTE_F4, 4, 4,
    NOTE_G4, 4, 4,
    NOTE_E4, 4, 4,
    NOTE_A4, 8, 8,
    NOTE_A4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_FS4, 1, 1,

    NOTE_F4, 1, 1,
    NOTE_E4, 1, 1,
    NOTE_DS4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_CS4, 8, 8,
    NOTE_DS4, 16, 16,

    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 0.5, 0.5,
    NOTE_F4, 0.5, 0.5,
    NOTE_D4, 0.5, 0.5,
    NOTE_E4, 0.5, 0.5,
    NOTE_G4, 9, 9,
    NOTE_GS4, 2, 2,

    NOTE_A4, 2, 2,
    NOTE_C5, 2, 2,
    NOTE_A4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_E4, 1, 1,
    NOTE_F4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_A4, 2, 2,
    NOTE_C5, 2, 2,
    NOTE_CS5, 2, 2,
    NOTE_GS4, 2, 2,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 7, 7,

    NOTE_F3, 2, 2,
    NOTE_G3, 2, 2,
    NOTE_A3, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_E4, 4, 4,
    NOTE_D4, 4, 4,
    NOTE_E4, 4, 4,

    NOTE_F4, 4, 4,
    NOTE_G4, 4, 4,
    NOTE_E4, 4, 4,
    NOTE_A4, 8, 8,
    NOTE_A4, 1, 1,
    NOTE_GS4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_FS4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_E4, 1, 1,

    NOTE_DS4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_CS4, 8, 8,
    NOTE_DS4, 10, 10,
    NOTE_B3, 12, 12,

    NOTE_F4, 4, 4,
    NOTE_E4, 8, 8,
    NOTE_D4, 8, 8,
    
    NOTE_F4, 32, 32,

    NOTE_B3, 12, 12,
    NOTE_F4, 4, 4,
    NOTE_E4, 8, 8,

    NOTE_D4, 8, 8,
    NOTE_D4, 32, 32,

    NOTE_B3, 12, 12,

    NOTE_F4, 4, 4,
    NOTE_E4, 8, 8,
    NOTE_D4, 8, 8,

    NOTE_F4, 32, 32,

    NOTE_B3, 12, 12,
    NOTE_F4, 4, 4,
    NOTE_E4, 8, 8,

    NOTE_D4, 8, 8,
    NOTE_D4, 14, 14,

    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,

    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_CS4, 1, 1,
    NOTE_CS4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_C4, 1, 1,

    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 1, 1,
    NOTE_F4, 2, 2,

    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_CS4, 1, 1,
    NOTE_CS4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,

    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_C4, 1, 1,
    NOTE_D5, 2, 2,
    NOTE_A4, 3, 3,
    NOTE_GS4, 2, 2,
    NOTE_G4, 2, 2,
    NOTE_F4, 2, 2,
    NOTE_D4, 1, 1,
    NOTE_F4, 1, 1,
    NOTE_G4, 1, 1,
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
    if (
        song[thisNote] == NOTE_A1 || song[thisNote] == NOTE_A2 ||
        song[thisNote] == NOTE_A3 || song[thisNote] == NOTE_A4 ||
        song[thisNote] == NOTE_A5 || song[thisNote] == NOTE_A6
        ) PIN_SELECTED = 2;
    else if (
        song[thisNote] == NOTE_AS1 || song[thisNote] == NOTE_AS2 ||
        song[thisNote] == NOTE_AS3 || song[thisNote] == NOTE_AS4 ||
        song[thisNote] == NOTE_AS5 || song[thisNote] == NOTE_AS6
        ) PIN_SELECTED = 3;
    else if (
        song[thisNote] == NOTE_B1 || song[thisNote] == NOTE_B2 ||
        song[thisNote] == NOTE_B3 || song[thisNote] == NOTE_B4 ||
        song[thisNote] == NOTE_B5 || song[thisNote] == NOTE_B6
        ) PIN_SELECTED = 4;
    else if (
        song[thisNote] == NOTE_C1 || song[thisNote] == NOTE_C2 ||
        song[thisNote] == NOTE_C3 || song[thisNote] == NOTE_C4 ||
        song[thisNote] == NOTE_C5 || song[thisNote] == NOTE_C6
        ) PIN_SELECTED = 5;
    else if (
        song[thisNote] == NOTE_D1 || song[thisNote] == NOTE_D2 ||
        song[thisNote] == NOTE_D3 || song[thisNote] == NOTE_D4 ||
        song[thisNote] == NOTE_D5 || song[thisNote] == NOTE_D6
        ) PIN_SELECTED = 6;
    else if (
        song[thisNote] == NOTE_E1 || song[thisNote] == NOTE_E2 ||
        song[thisNote] == NOTE_E3 || song[thisNote] == NOTE_E4 ||
        song[thisNote] == NOTE_E5 || song[thisNote] == NOTE_E6
        ) PIN_SELECTED = 7;
    else if (
        song[thisNote] == NOTE_F1 || song[thisNote] == NOTE_F2 ||
        song[thisNote] == NOTE_F3 || song[thisNote] == NOTE_F4 ||
        song[thisNote] == NOTE_F5 || song[thisNote] == NOTE_F6
        ) PIN_SELECTED = 8;
    else if (
        song[thisNote] == NOTE_G1 || song[thisNote] == NOTE_G2 ||
        song[thisNote] == NOTE_G3 || song[thisNote] == NOTE_G4 ||
        song[thisNote] == NOTE_G5 || song[thisNote] == NOTE_G6
        ) PIN_SELECTED = 9;
    else PIN_SELECTED = 10;

    // Write HIGH to LED
    digitalWrite(PIN_SELECTED, HIGH);

    // Play the tune
    tone(13, song[thisNote], song[thisNote+1]*90.0*1.25);

    // Output the voice after several minutes
    delay(song[thisNote+2]*100.0*1.25);

    // Write LOW to LED
    digitalWrite(PIN_SELECTED, LOW);
  }

   
  // restart after two seconds 
  delay(0);
}