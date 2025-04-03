// REMEMBER TO EDIT THE user_setup.h library to show these values for the ESP32:
// Uncomment #define GC9A01_DRIVER as the display type
//
// set display size to 
// #define TFT_WIDTH  240 // ST7789 240 x 240 and 240 x 320
// #define TFT_HEIGHT 240 // GC9A01 240 x 240
//
// Then 
// #define TFT_MOSI 21   // labeled as SDA, data pin
// #define TFT_SCLK 22   // Clock pin
// #define TFT_CS   5    // Chip select control pin
// #define TFT_DC   12   // Data Command control pin
// #define TFT_RST  4    // Reset pin (could connect to Arduino RESET pin)
// #define TFT_BL   -1   // LED back-light

#include <TFT_eSPI.h> // Include the TFT_eSPI library

TFT_eSPI tft = TFT_eSPI(); // Create a TFT_eSPI object

void setup() {
  tft.init();                // Initialize the display
  tft.setRotation(0);        // Set rotation (adjust if needed)
  tft.fillScreen(TFT_BLUE); // Clear the screen with black background
  tft.setTextColor(TFT_WHITE, TFT_BLUE); // Set text color with black background
  tft.setTextSize(2);        // Set text size

  // Calculate center position for "Hello World"
  int16_t x_center = (240 - tft.textWidth("Hello World")) / 2;
  int16_t y_center = (240 - 16) / 2; // 16 is an approximate height of text at size 2

  tft.setCursor(x_center, y_center); // Set cursor to center
  tft.print("Hello World");          // Print "Hello World"
}

void loop() {
  // Nothing to do here
}
