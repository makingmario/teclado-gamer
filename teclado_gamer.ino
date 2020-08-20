/*  
    Teclado Gamer rápido
    por: Mario de Making Robotics Colombia
    se usa: arduino LEONARDO + Shield Joystick keyes (trae una sección para prototipado)
    https://www.youtube.com/MakingRoboticsColombia
*/

#include "Keyboard.h" // incluye libreria Keyboard

void setup() {
  pinMode(2, INPUT_PULLUP);  //
  pinMode(3, INPUT_PULLUP);  //
  pinMode(4, INPUT_PULLUP);  //
  pinMode(5, INPUT_PULLUP);  //
  pinMode(6, INPUT_PULLUP);  //

  pinMode(13,OUTPUT);
  Keyboard.begin();          //
}

void loop() {
 if (digitalRead(6) == LOW) {
    // Keyboard.press('a');//
     Keyboard.press('q');//lol    
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

  if (digitalRead(5) == LOW) {
     //Keyboard.press('s');//   
      Keyboard.press('w');//lol   
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

  if (digitalRead(4) == LOW) {
     //Keyboard.press('w');//   
      Keyboard.press('e');//lol   
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

  if (digitalRead(3) == LOW) {
     //Keyboard.press('d');//   
      Keyboard.press('r');//lol   
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

   if (digitalRead(2) == LOW) {
    // Keyboard.press(' ');//dinosaurio chrome   
     Keyboard.press('b');//lol
     delay(200);
     Keyboard.releaseAll();//libero todas las teclas usadas
  }

}
