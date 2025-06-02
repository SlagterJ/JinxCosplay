#include <Arduino.h>
#include <Adafruit_Neopixel.h>

#define NUM_NEOPIXELS_BARREL      16
/**
 * Arduino data pin for the barrel neopixels
 */
#define PIN_NEOPIXELS_BARREL      2
/**
 * Arduino data pin for the clock neopixels
 */
#define PIN_NEOPIXELS_CLOCK       3
/**
 * Arduino data pin for the horns neopixels
 */
#define PIN_NEOPIXELS_HORNS       4
/**
 * Arduino data pin for the jaw neopixels
 */
#define PIN_NEOPIXELS_JAW         5
/**
 * Arduino data pin for the motor switch
 */
#define PIN_MOTOR_SWITCH          13

Adafruit_NeoPixel barrelStrip(NUM_NEOPIXELS_BARREL, PIN_NEOPIXELS_BARREL, NEO_GRB + NEO_KHZ800);

/**
 * Boolean to keep track if the motor switch was pressed the previous cycle used to prevent double inputs
 */
bool wasMotorSwitchPressedPreviousCycle = false;

/**
 * Setup function runs once on start
 */
void setup() {
  Serial.println("Begin!");
  barrelStrip.begin();
  barrelStrip.setPixelColor(1, barrelStrip.Color(255, 0, 0));
  // clear the strip
  barrelStrip.show();
}

/**
 * Loop function runs for the remainder lifetime
 */
void loop() {
  /*
  Serial.println("Clearing strip");
  barrelStrip.clear();

  /**
   * if the motor switch is pressed this cycle
   */
  /*
  const bool isMotorSwitchPressed = digitalRead(PIN_MOTOR_SWITCH) == LOW;

  if (isMotorSwitchPressed && wasMotorSwitchPressedPreviousCycle == false) {
    wasMotorSwitchPressedPreviousCycle = true;
  }

  Serial.println("Starting turning red loop");
  for (int currentPixel = 0; currentPixel < NUM_NEOPIXELS_BARREL; currentPixel++) {
    Serial.println("Setting pixel " + String(currentPixel) + " to red");
    barrelStrip.setPixelColor(currentPixel, Adafruit_NeoPixel::Color(150, 0, 0));
    barrelStrip.show();
    delay(4000);
  }

  Serial.println("Starting turning off loop");
  for (int currentPixel = 0; currentPixel < NUM_NEOPIXELS_BARREL; currentPixel++) {
    Serial.println("Setting pixel " + String(currentPixel) + " to off");
    barrelStrip.setPixelColor(currentPixel, Adafruit_NeoPixel::Color(0, 0, 0));
    barrelStrip.show();
    delay(4000);
    barrelStrip.setPixelColor(currentPixel, Adafruit_NeoPixel::Color(0, 0, 0));
    barrelStrip.show();
  }
  */
}
