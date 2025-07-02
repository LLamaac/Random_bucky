#include <Keyboard.h>
#include <Mouse.h>
int MaxNote = 8;
int MinNote = 1;
int Note = 2;
int DeepChanceMax = 21;
int DeepChanceMin = 1;
int DeepChance = 15;
float HoldTime = 1;
float HoldTimeMax = 1300;
float HoldTimeMin = 100;
int MouseMoveChanceMax = 21;
int MouseMoveChanceMin = 1;
int MouseMoveChance = 1;
float MouseMoveMax = 150;
float MouseMoveMin = -150;
float Mousey = 0;
float Mousex = 0;
void setup() {

  Keyboard.begin();
  Mouse.begin();
}




void loop() {
  Note = random(MinNote, MaxNote);
  DeepChance = random(DeepChanceMin, DeepChanceMax);
  HoldTime = random(HoldTimeMin, HoldTimeMax);
  MouseMoveChance = random(MouseMoveChanceMin, MouseMoveChanceMax);
  Mousey = random(MouseMoveMin, MouseMoveMax);
  Mousex = random(MouseMoveMin, MouseMoveMax);
  
    if(MouseMoveChance > 14)
  {
        Mouse.move(Mousex, Mousey, 0);
  }
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
    if(MouseMoveChance > 14)
  {
        Mouse.move(Mousex, Mousey, 0);
  }
      if(MouseMoveChance > 14)
  {
        Mouse.move(Mousex, Mousey, 0);
  }
      if(MouseMoveChance > 14)
  {
        Mouse.move(Mousex, Mousey, 0);
  }
      if(MouseMoveChance > 14)
  {
        Mouse.move(Mousex, Mousey, 0);
  }
  delay(HoldTime);
  Keyboard.releaseAll();
  
}
