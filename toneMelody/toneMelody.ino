#include "pitches.h"

// notes in the melody:
int melody[] = {
    GS4, GS4, GS4, FS4, GS4, GS4, FS4, GS4,
    0, DS4, CS4, DS4, E4, DS4, CS4, DS4,
    DS5, GS5, B5, FS5, GS5, DS5,
    DS5, GS5, B5, FS5, CS5, DS5,
    DS5, GS5, B5, FS5, GS5, DS5, FS5, CS5, GS4, CS5, DS5, CS5, DS5, GS4,
    DS5, GS5, B5, FS5, CS5, DS5,
    DS5, GS5, B5, FS5, GS5, GS5,
    DS5, GS5, B5, FS5, GS5, DS5, FS5, CS5, GS4, CS5, DS5, CS5, DS5, GS4,
    GS4, DS5, DS5, DS5, 
    0, GS4, B4, CS5,
    DS5, DS5, DS5,
    GS4, B4, CS5, 
    DS5, FS5, DS5, 
    DS5, FS5, DS5, 
    DS5, FS5, DS5, FS5, GS5,
    GS4, B4, CS5,//DAKEDO
    DS5, DS5, DS5,//NAINAINAI
    GS4, B4, CS5, //KOREMO
    DS5, DS5, DS5,//NAINAINAI
    GS4, B4, CS5,
    DS5, FS5, DS5, 
    DS5, FS5, DS5,
    GS5, FS5, GS5, DS6, GS5,//SAKOTAETE
    B4, CS5, DS5, 
    B5, AS5, FS5, 
    CS5, B4, CS5, B4, DS5,
    GS4, DS5, CS5,//NANTE
    GS4, DS5, CS5,//WATASHI
    DS5, FS5, B5, AS5, FS5, CS5, DS5,//WAKARANAIKUTESA
    B4, CS5, DS5, B5, AS5, FS5, CS5,
    B4, CS5, FS5, DS5, GS4, DS5,
    CS5, CS5, CS5, CS5, CS5,
    B4, CS5, B4, CS5, B4, CS5,
    E5, DS5, E5, DS5, 
    GS5, G5, GS5, G5, GS5, AS5,
    E5, G5, A5, E6, A5,
    G5, A5, E6, A5, G5, A5,
    E5, G5, A5, C6, B5, G5,
    A5, B5, C6, D6, F6, E6, //究極のアイドル
    A5, E6, A5, 
    G5, A5, E6, A5, G5, A5,//金輪賽
    E5, G5, A5, C6, B5,
    G5, A5, A5, G5, A5, C6,
    A5, G5, A5, C6, D6, E6,
    A5, G5, A5, C6, D6, E6,
    A5, C6, D6, C6, D6, C6, D6, E6,
    A5, C6, G5, A5, E5, G5, 
    A5, G5, A5, C6, D6, E6,
    A5, G5, A5, C6, D6, E6, D6, E6,
    A5, C6, G5, A5, E5, A5, A5, G5, A5
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  4, 4, 4, 8, 4, 4, 8, 3, //8
  3, 4, 4, 4, 4, 4, 4, 4, //8
  4, 8, 8, 8, 8, 3, //6
  8, 8, 8, 8, 8, 3, //6
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, //14
  8, 8, 8, 8, 8, 3, //6
  8, 8, 8, 8, 8, 3, //6
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 3, //14
  4, 4, 4, 4, //4
  16, 8, 8, 8, //3
  4, 4, 4, //3
  8, 8, 8, //3
  8, 8, 4, //3
  8, 8, 4, //3
  8, 8, 8, 8, 5, //5
  8, 8, 8,
  4, 4, 4,
  8, 8, 8,
  4, 4, 4,
  8, 8, 8, 
  8, 8, 4,
  8, 8, 8,
  4, 8, 8, 8, 4,
  8, 8, 4,
  8, 4, 4,
  4, 8, 8, 8, 4, 
  8, 8, 4,
  8, 8, 4,
  8, 8, 8, 8, 8, 8, 4,
  8, 8, 4, 8, 4, 4, 4,
  8, 8, 8, 4, 8, 8,
  4, 4, 5, 5, 3,
  8, 8, 8, 8, 8, 8,
  8, 3, 8, 3,
  8, 4, 8, 8, 8, 4,
  8, 8, 4, 4, 4,//5
  8, 4, 8, 8, 8, 4,//6
  8, 8, 4, 4, 4, 8,//6
  4, 8, 8, 8, 4, 4,//6
  4, 4, 4,
  8, 4, 8, 8, 8, 4,
  8, 8, 4, 4, 4,
  8, 4, 4, 8, 4, 4,
  3, 8, 8, 8, 8, 8,
  3, 8, 8, 8, 8, 8,
  4, 4, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 8, 
  3, 8, 8, 8, 8, 8,
  3, 8, 8, 8, 8, 8, 8, 8,
  8, 8, 8, 8, 8, 4, 4, 8, 3
};

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
