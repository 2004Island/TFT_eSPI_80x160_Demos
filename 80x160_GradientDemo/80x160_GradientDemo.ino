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

  tft.fillRectHGradient(0, 0, 160, 80, TFT_RED, TFT_BLUE);
  delay(2000);

  tft.fillRectVGradient(0, 0, 160, 80, TFT_RED, TFT_YELLOW);
  delay(2000);

}