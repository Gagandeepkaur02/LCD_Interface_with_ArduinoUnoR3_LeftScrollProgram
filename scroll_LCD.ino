#include <LiquidCrystal.h>

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Clears the LCD screen
  lcd.clear();

  // Print a message to the LCD.
  lcd.print("Greetings from VoltiqueX");
  delay(1000);  // pause to read the message initially
}

void loop() {
  lcd.scrollDisplayLeft();  // scroll everything to the left by one position
  delay(300);               // small delay for visible scrolling speed
}