#include "IRremote.h"

// Define Pins
#define RECEIVER 11 // IR Receiver Pin number
#define RED 9       // Red Channel Multi-color LED
#define GREEN 6     // Green Channel Multi-color LED
#define BLUE 3      // Blue Channel Multi-color LED

// Define IR Hex Codes
#define IR_POWER 0xFFA25D
#define IR_0     0xFF6897
#define IR_1     0xFF30CF
#define IR_2     0xFF18E7
#define IR_3     0xFF7A85
#define IR_4     0xFF10EF
#define IR_5     0xFF38C7
#define IR_6     0xFF5AA5
#define IR_7     0xFF42BD
#define IR_8     0xFF4AB5
#define IR_9     0xFF52AD

/*-----( Declare objects )-----*/
IRrecv irrecv(RECEIVER);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'


void setup()   /*----( SETUP: RUNS ONCE )----*/
{
    irrecv.enableIRIn(); // Start the receiver

    // Setup LEDs
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);

    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);

}/*--(end setup )---*/


// Power flag
bool isOn = false;

// Saved RGB values
float redValue = 255;
float greenValue = 255;
float blueValue = 255;

void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{
    if (irrecv.decode(&results)) // have we received an IR signal?

    {
        switch(results.value) {

            case IR_POWER:
                if (isOn == false) {
                    isOn = true;
                    poweron();
                } else {
                    isOn = false;
                    poweroff();
                }
                break;
            case IR_0:
                preset0();
                if (isOn) poweron();
                break;
            case IR_1:
                preset1();
                if (isOn) poweron();
                break;
            case IR_2:
                preset2();
                if (isOn) poweron();
                break;
            case IR_3:
                preset3();
                if (isOn) poweron();
                break;
            case IR_4:
                preset4();
                if (isOn) poweron();
                break;
            case IR_5:
                preset5();
                if (isOn) poweron();
                break;
            case IR_6:
                preset6();
                if (isOn) poweron();
                break;
            case IR_7:
                preset7();
                if (isOn) poweron();
                break;
            case IR_8:
                preset8();
                if (isOn) poweron();
                break;
            case IR_9:
                preset9();
                if (isOn) poweron();
                break;
        }

        irrecv.resume(); // receive the next value
    }  
}/* --(end main loop )-- */


void poweroff() {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
}

void poweron() {
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
}

// Setups
void preset0() {
    redValue = 255;
    greenValue = 255;
    blueValue = 255;
}

void preset1() {
    redValue = 255;
    greenValue = 0;
    blueValue = 0;
}

void preset2() {
    redValue = 0;
    greenValue = 255;
    blueValue = 0;
}

void preset3() {
    redValue = 0;
    greenValue = 0;
    blueValue = 255;
}

void preset4() {

}

void preset5() {

}

void preset6() {

}

void preset7() {

}

void preset8() {

}

void preset9() {

}