#include <Wire.h> 
#include <LCD_I2C_Teensy36.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LCD_I2C_Teensy36 lcd(0x27, 16, 2);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("Hello, world!");
}

void loop()
{
	// Do nothing here...
}
