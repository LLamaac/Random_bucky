#include "Keyboard.h"
#include <SPI.h>
#include <Wire.h>

int MaxNote = 8;
int MinNote = 1;
int Note = 2;
int DeepChanceMax = 21;
int DeepChanceMin = 1;
int DeepChance = 15;
float HoldTime = 1;
float HoldTimeMax = 1300;
float HoldTimeMin = 100;
int JumpChanceMax = 21;
int JumpChanceMin = 1;
int JumpChance = 1;
void setup() {

  Keyboard.begin();

}




void loop() {
  Note = random(MinNote, MaxNote);
  DeepChance = random(DeepChanceMin, DeepChanceMax);
    JumpChance = random(JumpChanceMin, JumpChanceMax);
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
      if(Note == 6)
  {
      Keyboard.press('e');

  }
      if(Note > 6)
  {
      Keyboard.press(' ');

  }

  if(DeepChance > 14)
  {
    Keyboard.press(KEY_LEFT_SHIFT); 
  }
  delay(HoldTime);
  Keyboard.releaseAll();
  
}
