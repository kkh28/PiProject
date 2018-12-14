#include "pitch.h"
#include "length.h"
#include <Adafruit_CircuitPlayground.h>

void playNote(int frequency, int duration, bool hold = false){
//  if (!CircuitPlayground.slideSwitch() ) {
//    return;
//  }
//  if (hold) {
//    CircuitPlayground.playTone(frequency, duration + duration/32, false);
//  }
//  else {
    CircuitPlayground.playTone(frequency, duration);
//  }
}

void setup() {
  // Initialize serial output and Circuit Playground library.
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void birthday(){
  playNote(NOTE_D4, EIGHTH, true);
  playNote(NOTE_D4, EIGHTH);
  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_FS4, HALF);

  playNote(NOTE_D4, EIGHTH, true);
  playNote(NOTE_D4, EIGHTH);
  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);

  playNote(NOTE_D4, EIGHTH, true);
  playNote(NOTE_D4, EIGHTH);
  playNote(NOTE_D5, QUARTER);
  playNote(NOTE_B4, QUARTER);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_FS4, QUARTER);
  playNote(NOTE_E4, QUARTER);

  playNote(NOTE_C5, EIGHTH, true);
  playNote(NOTE_C5, EIGHTH);
  playNote(NOTE_B4, QUARTER);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);
}

void mary(){
  playNote(NOTE_AS4, QUARTER);
  playNote(NOTE_GS4, QUARTER);
  playNote(NOTE_FS4, QUARTER);
  playNote(NOTE_GS4, QUARTER);
  playNote(NOTE_AS4, QUARTER, true);
  playNote(NOTE_AS4, QUARTER, true);
  playNote(NOTE_AS4, HALF);

  playNote(NOTE_GS4, QUARTER, true);
  playNote(NOTE_GS4, QUARTER, true);
  playNote(NOTE_GS4, HALF);

  playNote(NOTE_AS4, QUARTER);
  playNote(NOTE_CS4, QUARTER, true);
  playNote(NOTE_CS4, HALF);

  playNote(NOTE_AS4, QUARTER);
  playNote(NOTE_GS4, QUARTER);
  playNote(NOTE_FS4, QUARTER);
  playNote(NOTE_GS4, QUARTER);
  playNote(NOTE_AS4, QUARTER, true);
  playNote(NOTE_AS4, QUARTER, true);
  playNote(NOTE_AS4, QUARTER, true);

  playNote(NOTE_AS4, QUARTER);
  playNote(NOTE_GS4, QUARTER, true);
  playNote(NOTE_GS4, QUARTER);
  playNote(NOTE_AS4, QUARTER);
  playNote(NOTE_GS4, QUARTER);
  playNote(NOTE_FS4, HALF);
}

void twinkle(){
  playNote(NOTE_C4, QUARTER, true);
  playNote(NOTE_C4, QUARTER);
  playNote(NOTE_G4, QUARTER, true);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_A4, QUARTER, true);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);

  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, QUARTER, true);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_C4, HALF);

  playNote(NOTE_G4, QUARTER, true);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, HALF);

  playNote(NOTE_G4, QUARTER, true);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, HALF);

  playNote(NOTE_C4, QUARTER, true);
  playNote(NOTE_C4, QUARTER);
  playNote(NOTE_G4, QUARTER, true);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_A4, QUARTER, true);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);

  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, QUARTER, true);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_C4, HALF+QUARTER);
}

void buns(){
  playNote(NOTE_B4, QUARTER);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);

  playNote(NOTE_B4, QUARTER);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);

  playNote(NOTE_G4, SIXTEENTH, true);
  playNote(NOTE_G4, SIXTEENTH, true);
  playNote(NOTE_G4, SIXTEENTH, true);
  playNote(NOTE_G4, SIXTEENTH);
  playNote(NOTE_A4, SIXTEENTH, true);
  playNote(NOTE_A4, SIXTEENTH, true);
  playNote(NOTE_A4, SIXTEENTH, true);
  playNote(NOTE_A4, SIXTEENTH);

  playNote(NOTE_B4, QUARTER);
  playNote(NOTE_A4, QUARTER);
  playNote(NOTE_G4, HALF);
}

void jingle(){
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, HALF, true);
  
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, HALF, true);

  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_C4, QUARTER);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_E4, WHOLE);

  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER, true);

  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);

  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_D4, QUARTER, true);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_E4, QUARTER);

  playNote(NOTE_D4, HALF);
  playNote(NOTE_G4, HALF);

  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, HALF, true);
  
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, HALF, true);

  playNote(NOTE_E4, QUARTER);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_C4, QUARTER);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_E4, WHOLE);

  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER, true);
  playNote(NOTE_F4, QUARTER, true);

  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);
  playNote(NOTE_E4, QUARTER, true);

  playNote(NOTE_G4, QUARTER, true);
  playNote(NOTE_G4, QUARTER);
  playNote(NOTE_F4, QUARTER);
  playNote(NOTE_D4, QUARTER);
  playNote(NOTE_C4, WHOLE);
}
void loop() {
  int x;
  if(Serial.available() > 0) {
     x = Serial.read();
  }

if(x == 97){
birthday();
}

if(x == 98) {
mary();
}

if(x == 99) {
twinkle();
}

if(x == 100) {
buns();
}

if(x == 101) {
jingle();
}

}
