#include <TFT_eSPI.h>
#include <SPI.h>

#define TFT_BLUE 0x013F

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setRotation(3);
}

void loop() {
  
  for (int i = 0; i <= 5; i++) {
    lineShapeDemo();
  }

  for (int i = 0; i <= 5; i++) {
    fillShapeDemo();
  }

  lineDemo();

  tft.fillScreen(TFT_BLACK);
  
}

void lineShapeDemo() {

  for (int i = 30; i <= 80; i++) {
    tft.drawTriangle(10, 10, 10, 30, i, 30, TFT_RED);
    tft.drawRect(90, 10, i/3, i/3, TFT_YELLOW);
    tft.drawCircle(25, 55, i/4.5, TFT_BLUE);
    tft.drawEllipse(120, 20, i/3, i/5, TFT_GREEN);
    tft.drawRoundRect(40, 10, i/2, i/3, 5, TFT_ORANGE);
    tft.drawString("Shapes Demo", 70, 50, 2);
    delay(8);
    tft.fillRect(0, 0, 70, 80, TFT_BLACK);
    tft.fillRect(0, 0, 160, 40, TFT_BLACK);
  }

  for (int i = 80; i >= 30; i--) {
    tft.drawTriangle(10, 10, 10, 30, i, 30, TFT_RED);
    tft.drawRect(90, 10, i/3, i/3, TFT_YELLOW);
    tft.drawCircle(25, 55, i/4.5, TFT_BLUE);
    tft.drawEllipse(120, 20, i/3, i/5, TFT_GREEN);
    tft.drawRoundRect(40, 10, i/2, i/3, 5, TFT_ORANGE);
    tft.drawString("Shapes Demo", 70, 50, 2);
    delay(8);
    tft.fillRect(0, 0, 70, 80, TFT_BLACK);
    tft.fillRect(0, 0, 160, 40, TFT_BLACK);
  }

}

void fillShapeDemo() {

  for (int i = 30; i <= 80; i++) {
    tft.fillTriangle(10, 10, 10, 30, i, 30, TFT_RED);
    tft.fillRect(90, 10, i/3, i/3, TFT_YELLOW);
    tft.fillCircle(25, 55, i/4.5, TFT_BLUE);
    tft.fillEllipse(120, 20, i/3, i/5, TFT_GREEN);
    tft.fillRoundRect(40, 10, i/2, i/3, 5, TFT_ORANGE);
    tft.drawString("Shapes Demo", 70, 50, 2);
    delay(12);
    tft.fillRect(0, 0, 70, 80, TFT_BLACK);
    tft.fillRect(0, 0, 160, 40, TFT_BLACK);
  }

  for (int i = 80; i >= 30; i--) {
    tft.fillTriangle(10, 10, 10, 30, i, 30, TFT_RED);
    tft.fillRect(90, 10, i/3, i/3, TFT_YELLOW);
    tft.fillCircle(25, 55, i/4.5, TFT_BLUE);
    tft.fillEllipse(120, 20, i/3, i/5, TFT_GREEN);
    tft.fillRoundRect(40, 10, i/2, i/3, 5, TFT_ORANGE);
    tft.drawString("Shapes Demo", 70, 50, 2);
    delay(12);
    tft.fillRect(0, 0, 70, 80, TFT_BLACK);
    tft.fillRect(0, 0, 160, 40, TFT_BLACK);
  }

}

void lineDemo() {

  tft.fillScreen(TFT_BLACK);

  for (int i = 0; i <= 80; i = i + 8) {
    tft.drawLine(0, 80, 160, i, TFT_YELLOW);
    delay(50);
  }

  for (int i = 0; i <= 160; i = i + 8) {
    tft.drawLine(0, 80, i, 0, TFT_YELLOW);
    delay(50);
  }

  tft.drawString("Line Demo", 70, 50, 2);
  delay(2000);
  tft.fillScreen(TFT_BLACK);

  for (int i = 0; i <= 160; i = i + 8) {
    tft.drawFastVLine(i, 0, 80, TFT_GREEN);
    delay(50);
  }

  for (int i = 0; i <= 80; i = i + 8) {
    tft.drawFastHLine(0, i, 160, TFT_BLUE);
    delay(50);
  }

  tft.drawString("H/V Line Demo", 50, 50, 2);
  delay(2000);

}