#include <Arduino.h>
#include <Adafruit_Neopixel.h>

constexpr uint8_t NUM_NEOPIXELS_BARREL =      40;
/**
 * Arduino data pin for the barrel neopixels
 */
constexpr uint8_t PIN_NEOPIXELS_BARREL =      2;
/**
 * Arduino data pin for the clock neopixels
 */
constexpr uint8_t PIN_NEOPIXELS_CLOCK =       3;
/**
 * Arduino data pin for the horns neopixels
 */
constexpr uint8_t PIN_NEOPIXELS_HORNS =       4;
/**
 * Arduino data pin for the jaw neopixels
 */
constexpr uint8_t PIN_NEOPIXELS_JAW =         5;
/**
 * Arduino data pin for the motor switch
 */
constexpr uint8_t PIN_MOTOR_SWITCH =          13;

Adafruit_NeoPixel barrelStrip(NUM_NEOPIXELS_BARREL, PIN_NEOPIXELS_BARREL);

/**
 * Boolean to keep track if the motor switch was pressed the previous cycle used to prevent double inputs
 */
bool wasMotorSwitchPressedPreviousCycle = false;

/**
 * Setup function runs once on start
 */
void setup() {
  barrelStrip.begin();
  // clear the strip
  barrelStrip.show();
}

/**
 * Loop function runs for the remainder lifetime
 */
void loop() {
  /**
   * if the motor switch is pressed this cycle
   */
  /*
  const bool isMotorSwitchPressed = digitalRead(PIN_MOTOR_SWITCH) == LOW;

  if (isMotorSwitchPressed && wasMotorSwitchPressedPreviousCycle == false) {
    wasMotorSwitchPressedPreviousCycle = true;
  }
  */

  for (int i = 0; i < NUM_NEOPIXELS_BARREL; i++) {
    barrelStrip.setPixelColor(i, Adafruit_NeoPixel::Color(255, 0, 0));
    delay(200);
  }
}
