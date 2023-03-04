#include <Adafruit_NeoPixel.h>
#include <Keypad.h>

#define ROWS 4
#define COLS 4

int PIN = 8;
int NUMPIXELS = 31;
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB);
int RanR, RanG, RanB;

byte rowPins[ROWS] = {7, 6, 5, 4};
byte colPins[COLS] = {3, 2, 1, 0};

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'},
};

Keypad customKeypad = Keypad(
  makeKeymap(hexaKeys),
  rowPins,
  colPins,
  ROWS,
  COLS
);

void setup()
{
  randomSeed(analogRead(A0));
  pixels.begin();
}

void loop()
{
  RanR = random(0,256);
  RanG = random(0,256);
  RanB = random(0,256);
  delay(100);
  redirect();
}
void redirect()
{
  char customKey = customKeypad.getKey();
  if (customKey == '1'){
    clear();
    colf3();
    pixels.setPixelColor(16, RanR, RanG, RanB);
  }
  if (customKey == '2'){
    clear();
    row1();
    row4();
    row6();
    pixels.setPixelColor(4, RanR, RanG, RanB);
    pixels.setPixelColor(8, RanR, RanG, RanB);
    pixels.setPixelColor(19, RanR, RanG, RanB);
  }
  if (customKey == '3'){
    clear();
    row1();
    row4();
    row6();
    colf4();
  }
  if (customKey == 'A'){
    clear();
    colf1();
    colf4();
    row3();
    row6();
  }
  if (customKey == '4'){
    clear();
    colf4();
    row4();
    pixels.setPixelColor(16, RanR, RanG, RanB);
    pixels.setPixelColor(20, RanR, RanG, RanB);
  }
  if (customKey == '5'){
    clear();
    row6();
    row4();
    row1();
    pixels.setPixelColor(16, RanR, RanG, RanB);
    pixels.setPixelColor(7, RanR, RanG, RanB);
    pixels.setPixelColor(11, RanR, RanG, RanB);
  }
  if (customKey == '6'){
    clear();
    colf1();
    row1();
    row4();
    row6();
    pixels.setPixelColor(16, RanR, RanG, RanB);
    pixels.setPixelColor(7, RanR, RanG, RanB);
    pixels.setPixelColor(11, RanR, RanG, RanB);
  }
  if (customKey == 'B'){
    clear();
    colf1();
    row1();
    row4();
    pixels.setPixelColor(18, RanR, RanG, RanB);
    pixels.setPixelColor(21, RanR, RanG, RanB);
    pixels.setPixelColor(22, RanR, RanG, RanB);
  }
  if (customKey == '7'){
    clear();
    row6();
    pixels.setPixelColor(19, RanR, RanG, RanB);
    pixels.setPixelColor(14, RanR, RanG, RanB);
    pixels.setPixelColor(10, RanR, RanG, RanB);
    pixels.setPixelColor(6, RanR, RanG, RanB);
    pixels.setPixelColor(2, RanR, RanG, RanB);
  }
  if (customKey == '8'){
    clear();
    colf1();
    colf4();
    row6();
    row4();
    row1();
  }
  if (customKey == '9'){
    clear();
    colf1();
    row6();
    row4();
    row1();
    pixels.setPixelColor(16, RanR, RanG, RanB);
  }
  if (customKey == 'C'){
    clear();
    colf1();
    row6();
    row1();
  }
  if (customKey == '*'){
    clear();
    pixels.setPixelColor(30, RanR, RanG, RanB);
    pixels.setPixelColor(29, RanR, RanG, RanB);
    pixels.setPixelColor(28, RanR, RanG, RanB);
    pixels.setPixelColor(27, RanR, RanG, RanB);
    pixels.setPixelColor(26, RanR, RanG, RanB);
    pixels.setPixelColor(25, RanR, RanG, RanB);
    pixels.setPixelColor(24, RanR, RanG, RanB);
  }
  if (customKey == '0'){
    clear();
    colf1();
    colf4();
    row1();
    row6();
  }
  if (customKey == '#'){
    clear();
    colf2();
    colf3();
    row3();
    row4();
  }
  if (customKey == 'D'){
    clear();
    colf1();
    pixels.setPixelColor(1, RanR, RanG, RanB);
    pixels.setPixelColor(2, RanR, RanG, RanB);
    pixels.setPixelColor(7, RanR, RanG, RanB);
    pixels.setPixelColor(11, RanR, RanG, RanB);
    pixels.setPixelColor(15, RanR, RanG, RanB);
    pixels.setPixelColor(19, RanR, RanG, RanB);
    pixels.setPixelColor(21, RanR, RanG, RanB);
    pixels.setPixelColor(22, RanR, RanG, RanB);
  }
  pixels.show();
  delay(100);
}
void colf1()
{
  pixels.setPixelColor(0, RanR, RanG, RanB);
  pixels.setPixelColor(4, RanR, RanG, RanB);
  pixels.setPixelColor(8, RanR, RanG, RanB);
  pixels.setPixelColor(12, RanR, RanG, RanB);
  pixels.setPixelColor(16, RanR, RanG, RanB);
  pixels.setPixelColor(20, RanR, RanG, RanB);
  pixels.show();
}
  
void colf2()
{
  pixels.setPixelColor(1, RanR, RanG, RanB);
  pixels.setPixelColor(5, RanR, RanG, RanB);
  pixels.setPixelColor(9, RanR, RanG, RanB);
  pixels.setPixelColor(13, RanR, RanG, RanB);
  pixels.setPixelColor(17, RanR, RanG, RanB);
  pixels.setPixelColor(21, RanR, RanG, RanB);
  pixels.show();
}
  
void colf3()
{
  pixels.setPixelColor(2, RanR, RanG, RanB);
  pixels.setPixelColor(6, RanR, RanG, RanB);
  pixels.setPixelColor(10, RanR, RanG, RanB);
  pixels.setPixelColor(14, RanR, RanG, RanB);
  pixels.setPixelColor(18, RanR, RanG, RanB);
  pixels.setPixelColor(22, RanR, RanG, RanB);
  pixels.show();
}

void colf4()
{
  pixels.setPixelColor(3, RanR, RanG, RanB);
  pixels.setPixelColor(7, RanR, RanG, RanB);
  pixels.setPixelColor(11, RanR, RanG, RanB);
  pixels.setPixelColor(15, RanR, RanG, RanB);
  pixels.setPixelColor(19, RanR, RanG, RanB);
  pixels.setPixelColor(23, RanR, RanG, RanB);
  pixels.show();
}

void row1()
{
  pixels.setPixelColor(0, RanR, RanG, RanB);
  pixels.setPixelColor(1, RanR, RanG, RanB);
  pixels.setPixelColor(2, RanR, RanG, RanB);
  pixels.setPixelColor(3, RanR, RanG, RanB);
  pixels.show();
}
void row2()
{
  pixels.setPixelColor(4, RanR, RanG, RanB);
  pixels.setPixelColor(5, RanR, RanG, RanB);
  pixels.setPixelColor(6, RanR, RanG, RanB);
  pixels.setPixelColor(7, RanR, RanG, RanB);
  pixels.show();
}
void row3()
{
  pixels.setPixelColor(8, RanR, RanG, RanB);
  pixels.setPixelColor(9, RanR, RanG, RanB);
  pixels.setPixelColor(10, RanR, RanG, RanB);
  pixels.setPixelColor(11, RanR, RanG, RanB);
  pixels.show();
}
void row4()
{
  pixels.setPixelColor(12, RanR, RanG, RanB);
  pixels.setPixelColor(13, RanR, RanG, RanB);
  pixels.setPixelColor(14, RanR, RanG, RanB);
  pixels.setPixelColor(15, RanR, RanG, RanB);
  pixels.show();
}
void row5()
{
  pixels.setPixelColor(16, RanR, RanG, RanB);
  pixels.setPixelColor(17, RanR, RanG, RanB);
  pixels.setPixelColor(18, RanR, RanG, RanB);
  pixels.setPixelColor(19, RanR, RanG, RanB);
  pixels.show();
}
void row6()
{
  pixels.setPixelColor(20, RanR, RanG, RanB);
  pixels.setPixelColor(21, RanR, RanG, RanB);
  pixels.setPixelColor(22, RanR, RanG, RanB);
  pixels.setPixelColor(23, RanR, RanG, RanB);
  pixels.show();
}
void clear()
{
  for(int i = 0; i < NUMPIXELS; i++){
    pixels.setPixelColor(i, 0, 0, 0);
  }
  pixels.show();
  delay(100);
}