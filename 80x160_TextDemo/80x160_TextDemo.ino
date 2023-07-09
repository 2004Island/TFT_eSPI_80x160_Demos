#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft=TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setRotation(3);
}

void loop() {
  
  textTest(1);
  delay(2000);

  textTest(2);
  delay(2000);

  // Clock Text Demo
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);

  tft.drawString("02:43", 0, 0, 7);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("07/05/2022", 0, 55, 4);

  delay(2000);

}

void textTest(int fontType) {

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);

  tft.drawString("The quick brown fox", 0, 0, fontType);
  tft.drawString("jumped over the lazy dog", 0, 20, fontType);
  tft.drawString("01234567890!@#$%^&*()", 0, 40, fontType);
  tft.drawString("~<>?:;\'\"[]\{}|-_+=", 0, 60, fontType);
  
}