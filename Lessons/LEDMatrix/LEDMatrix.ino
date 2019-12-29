//We always have to include the library
#include "LedControl.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to LOAD(CS)
 pin 10 is connected to the CLK 
 We have only a single MAX72XX.
 */
LedControl lc=LedControl(12,10,11,1);

/* we always wait a bit between updates of the display */
unsigned long delaytime1=500;
unsigned long delaytime2=50;
void setup() {
    /*
    The MAX72XX is in power-saving mode on startup,
    we have to do a wakeup call
    */
    lc.shutdown(0,false);
    /* Set the brightness to a medium values */
    lc.setIntensity(0,4);
    /* and clear the display */
    lc.clearDisplay(0);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix. 
 (you need at least 5x7 leds to see the whole chars)
 */
void writeArduinoOnMatrix() {
    /* here is the data for the characters */
    byte r[8]={B00000000,B00000000,B00110010,B01001100,B01001000,B01001000,B01111110,B00000000};
    byte o[8]={B00000000,B00011000,B00100100,B01000010,B01000010,B00100100,B00011000,B00000000};
    byte n[8]={B00000000,B01111110,B00000100,B00001000,B00010000,B00100000,B01111110,B00000000};
    byte i[8]={B00000000,B01000010,B01000010,B01111110,B01111110,B01000010,B01000010,B00000000};

    /* now display them one by one with a small delay */
    lc.setRow(0,0,r[0]);
    lc.setRow(0,1,r[1]);
    lc.setRow(0,2,r[2]);
    lc.setRow(0,3,r[3]);
    lc.setRow(0,4,r[4]);
    lc.setRow(0,5,r[5]);
    lc.setRow(0,6,r[6]);
    lc.setRow(0,7,r[7]);
    delay(delaytime1);
    lc.setRow(0,0,o[0]);
    lc.setRow(0,1,o[1]);
    lc.setRow(0,2,o[2]);
    lc.setRow(0,3,o[3]);
    lc.setRow(0,4,o[4]);
    lc.setRow(0,5,o[5]);
    lc.setRow(0,6,o[6]);
    lc.setRow(0,7,o[7]);
    delay(delaytime1);
    lc.setRow(0,0,n[0]);
    lc.setRow(0,1,n[1]);
    lc.setRow(0,2,n[2]);
    lc.setRow(0,3,n[3]);
    lc.setRow(0,4,n[4]);
    lc.setRow(0,5,n[5]);
    lc.setRow(0,6,n[6]);
    lc.setRow(0,7,n[7]);
    delay(delaytime1);
    lc.setRow(0,0,i[0]);
    lc.setRow(0,1,i[1]);
    lc.setRow(0,2,i[2]);
    lc.setRow(0,3,i[3]);
    lc.setRow(0,4,i[4]);
    lc.setRow(0,5,i[5]);
    lc.setRow(0,6,i[6]);
    lc.setRow(0,7,i[7]);
    delay(delaytime1);
}

/*
  This function lights up a some Leds in a row.
 The pattern will be repeated on every row.
 The pattern will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */
void rows() {
    for(int row=0;row<8;row++) {
        delay(delaytime2);
        lc.setRow(0,row,B10100000);
        delay(delaytime2);
        lc.setRow(0,row,(byte)0);
        for(int i=0;i<row;i++) {
            delay(delaytime2);
            lc.setRow(0,row,B10100000);
            delay(delaytime2);
            lc.setRow(0,row,(byte)0);
        }
    }
}

/*
  This function lights up a some Leds in a column.
 The pattern will be repeated on every column.
 The pattern will blink along with the column-number.
 column number 4 (index==3) will blink 4 times etc.
 */
void columns() {
    for(int col=0;col<8;col++) {
            delay(delaytime2);
            lc.setColumn(0,col,B00100000);
            delay(delaytime2);
            lc.setColumn(0,col,(byte)0);
            for(int i=0;i<col;i++) {
            delay(delaytime2);
            lc.setColumn(0,col,B00100000);
            delay(delaytime2);
            lc.setColumn(0,col,(byte)0);
        }
    }
}

/* 
 This function will light up every Led on the matrix.
 The led will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */
void single() {
    for(int row=0;row<8;row++) {
        for(int col=0;col<8;col++) {
            delay(delaytime2);
            lc.setLed(0,row,col,true);
            delay(delaytime2);
            for(int i=0;i<col;i++) {
                lc.setLed(0,row,col,false);
                delay(delaytime2);
                lc.setLed(0,row,col,true);
                delay(delaytime2);
            }
        }
    }
}

void loop() { 
    writeArduinoOnMatrix();
}