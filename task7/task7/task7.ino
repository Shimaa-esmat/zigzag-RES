#include <LiquidCrystal.h>
#include <Keypad.h>

const byte rows = 4;
const byte cols = 4;
char keys[rows][cols] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte rowpins[rows] = {13,12,11,10};
byte colpins[cols] = {9,8,7,6};
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
Keypad keypad = Keypad (makeKeymap (keys),rowpins ,colpins, cols, rows);

void setup() {
 lcd.begin(16,2);
 lcd.setCursor(0,0);
 
}

void loop() {
 char key = keypad.getKey();

 lcd.setCursor(0,0);
 lcd.print("press char    ");
if (key) {
  lcd.setCursor(0,1);
  lcd.print(key);
}

}
