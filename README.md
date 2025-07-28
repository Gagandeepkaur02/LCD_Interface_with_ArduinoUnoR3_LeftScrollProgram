//# LCD_Interface_with_ArduinoUnoR3_LeftScrollProgram
//Create a scrolling message display using a 16x2 LCD and Arduino UNO. This beginner-friendly project uses the LiquidCrystal library to display and continuously scroll the message "Greetings from VoltiqueX" across //the screen. Perfect for learning LCD interfacing and display control with Arduino.


#include <LiquidCrystal.h> // Include the LiquidCrystal library for LCD control
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Initialize the LCD with the pins: RS, EN, D4, D5, D6, D7

void setup() { 
  lcd.begin(16, 2); // Set up the LCD's number of columns and rows
  lcd.clear();  // Clear any previous display on the LCD
  
  lcd.print("Greetings from VoltiqueX");   // Print the welcome message on the LCD
  
  delay(1000); // Wait for 1 second before starting scroll
}

void loop() { 
  lcd.scrollDisplayLeft();  // Scroll the entire display one position to the left
  delay(300); // Small delay to control scroll speed
}

