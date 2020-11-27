//libraries
#include <Wire.h> // I2C library
#include <IRremote.h> // IR library
#include <ir_Lego_PF_BitStreamEncoder.h> // IR decoder library
#include <LiquidCrystal_I2C.h>  // LCD display library

const int reciever_pin = 9; //ic reviever is gekoppeled aan pin 9
IRrecv irrecv(reciever_pin); // ik laat de library weten dat welke pin gebruikt word als de reciever.
decode_results results; // dit vertaalt de ir code naar leesbare code. 
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // ik geef hier aan welke soort lcd ik gebruik en zet deze in een variable. 
void setup(){
  //hier start ik de reciever. 

  // start de lcd
  lcd.init();
  lcd.backlight();
}


void loop() {
  // Print 'Hello World!' on the first line of the LCD:
  lcd.setCursor(2, 0); // Set the cursor on the third column and first row.
  lcd.print("Hello World!"); // Print the string "Hello World!"
  lcd.setCursor(2, 1); //Set the cursor on the third column and the second row (counting starts at 0!).
  lcd.print("LCD tutorial");
}
