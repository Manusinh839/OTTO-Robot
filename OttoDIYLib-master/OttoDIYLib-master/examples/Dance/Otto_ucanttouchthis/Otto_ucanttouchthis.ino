//----------------------------------------------------------------
//-- Otto Dance U Can't Touch This by Ada Sarp Şahin
//-- https://www.ottodiy.com/
//-----------------------------------------------------------------
#include <Otto.h>
Otto Otto;
#define LeftLeg 2 
#define RightLeg 3
#define LeftFoot 4 
#define RightFoot 5 
#define Buzzer  13 

void setup() {
  Otto.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer); //Set the servo pins and Buzzer pin
  Otto.sing(S_connection); //Otto wake up!
  Otto.home();
  delay(50);
}

void loop() {
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,1000,30,1);
  Otto.moonwalker(1,1000,30,-1);
  Otto.moonwalker(1,1000,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(150);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  delay(100);
  Otto.jitter(8,900,30);
  delay(500);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(150);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  delay(100);
  Otto.jitter(8,900,30);
  delay(500);
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(500);
  Otto.home();
  Otto.moonwalker(1,950,30,1);
  Otto.moonwalker(1,950,30,-1);
  Otto.moonwalker(1,950,30,1); 
  delay(150);
  Otto.home();
  Otto.moonwalker(1,1000,30,1);
  Otto.moonwalker(1,1000,30,-1);
  Otto.moonwalker(1,1000,30,1); 
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  delay(150);
  Otto.home();
  Otto.swing(3,1000,30);
  Otto.home();
  Otto.ascendingTurn(8,870,30);
  Otto.home();
  Otto.jitter(8,900,30);
  delay(150);
  Otto.home();
  Otto.updown(8,870,30);
  Otto.tiptoeSwing(7,900,30);
  delay(150);
  Otto.home();
  delay(10000);
}
