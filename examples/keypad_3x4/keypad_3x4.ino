/*
Dieser Code benutzt die Keypad Bibliothek von Mark Stanley und Alexander Brevig
Installiere dafür die Bibliothek "Keypad" in der Arduino IDE
*/

#include "Keypad.h"

const byte ROWS = 4; //vier Zeilen
const byte COLS = 3; //drei Spalten
char hexaKeys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {5,4,3,2}; //mit den Zeilen verbundene Pins
byte colPins[COLS] = {8,7,6}; //mit den Spalten verbundene Pins

Keypad Tastenfeld = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
}

void loop() {
    char Key = Tastenfeld.getKey();

    if (key) {
        Serial.println(Key);
    }
}