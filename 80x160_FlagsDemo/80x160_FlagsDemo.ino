#include <TFT_eSPI.h>
#include <SPI.h>

#define TFT_BLUE 0x013F
#define TFT_NAVY 0x08AF
#define TFT_LIGHTNAVY 0x2133
#define TFT_DARKGREEN 0x3485

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.setRotation(3);
}

void loop() {
  unitedStates();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 60, 160, 20, TFT_BLACK);

  japan();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 60, 160, 20, TFT_BLACK);

  czechRepublic();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 59, 160, 20, TFT_BLACK);

  austria();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 60, 160, 20, TFT_BLACK);

  netherlands();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 60, 160, 20, TFT_BLACK);

  russia();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 60, 160, 20, TFT_BLACK);

  norway();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 59, 160, 20, TFT_BLACK);

  denmark();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 59, 160, 20, TFT_BLACK);

  italy();
  delay(2000);
  tft.fillRect(40, 20, 80, 39, TFT_BLACK);
  tft.fillRect(0, 59, 160, 20, TFT_BLACK);
}

void unitedStates() {
  tft.fillRect(40, 20, 80, 39, TFT_WHITE);
  tft.fillRect(40, 20, 35, 21, TFT_LIGHTNAVY);

  for (int i = 0; i <= 18; i += 6) {
    tft.fillRect(75, 20 + i, 45, 3, TFT_RED);
  }

  for (int i = 24; i <= 36; i += 6) {
    tft.fillRect(40, 20 + i, 80, 3, TFT_RED);
  }

  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("United States", 80, 62, 2);
}

void japan() {
  tft.fillRect(50, 20, 60, 40, TFT_WHITE);
  tft.fillCircle(80, 40, 12, TFT_RED);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Japan", 80, 62, 2);
}

void czechRepublic() {
  tft.fillRect(50, 20, 60, 40, TFT_WHITE);
  tft.fillRect(50, 40, 60, 20, TFT_RED);
  tft.fillTriangle(50, 20, 80, 40, 50, 58, TFT_BLUE);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Czech Republic", 80, 62, 2);
}

void austria() {
  tft.fillRect(50, 20, 60, 39, TFT_WHITE);
  tft.fillRect(50, 20, 60, 13, TFT_RED);
  tft.fillRect(50, 46, 60, 13, TFT_RED);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Austria", 80, 62, 2);
}

void netherlands() {
  tft.fillRect(50, 20, 60, 39, TFT_WHITE);
  tft.fillRect(50, 20, 60, 13, TFT_RED);
  tft.fillRect(50, 46, 60, 13, TFT_NAVY);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Netherlands", 80, 62, 2);
}

void russia() {
  tft.fillRect(50, 20, 60, 39, TFT_WHITE);
  tft.fillRect(50, 33, 60, 13, TFT_BLUE);
  tft.fillRect(50, 46, 60, 13, TFT_RED);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Russia", 80, 62, 2);
}

void norway() {
  tft.fillRect(52, 20, 55, 40, TFT_RED);
  tft.fillRect(52, 35, 55, 10, TFT_WHITE);
  tft.fillRect(65, 20, 10, 40, TFT_WHITE);
  tft.fillRect(67, 20, 6, 40, TFT_NAVY);
  tft.fillRect(52, 37, 55, 6, TFT_NAVY);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Norway", 80, 62, 2);
}

void denmark() {
  tft.fillRect(52, 20, 55, 40, TFT_RED);
  tft.fillRect(52, 36, 55, 8, TFT_WHITE);
  tft.fillRect(68, 20, 8, 40, TFT_WHITE);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Denmark", 80, 62, 2);
}

void italy() {
  tft.fillRect(50, 20, 60, 39, TFT_WHITE);
  tft.fillRect(50, 20, 20, 39, TFT_DARKGREEN);
  tft.fillRect(90, 20, 20, 39, TFT_RED);
  tft.setTextColor(TFT_WHITE);
  tft.drawCentreString("Italy", 80, 62, 2);
}