#include "Keyboard.h"

int MaxNote = 5;
int MinNote = 1;
int Note = 2;
int DeepChanceMax = 21;
int DeepChanceMin = 1;
int DeepChance = 15;
float HoldTime = 1;
float HoldTimeMax = 1300;
float HoldTimeMin = 100;

void setup() {

  Keyboard.begin();
}

void loop() {
  Note = random(MinNote, MaxNote);
  DeepChance = random(DeepChanceMin, DeepChanceMax);
  HoldTime = random(HoldTimeMin, HoldTimeMax);
  if(Note == 1)
  {
      Keyboard.press('w');
  }
    if(Note == 2)
  {
      Keyboard.press('a');
  }
    if(Note == 3)
  {
      Keyboard.press('s');
  }
    if(Note == 4)
  {
      Keyboard.press('d');
  }
    if(Note == 5)
  {
      Keyboard.press('q');
  }
      if(Note == 5)
  {
      Keyboard.press('e');
  }
      if(Note == 5)
  {
      Keyboard.press(' ');
  }
  if(DeepChance > 14)
  {
   Keyboard.press('m');
  }
  delay(HoldTime);
  Keyboard.releaseAll();
}
