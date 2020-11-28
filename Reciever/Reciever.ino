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
   irrecv.enableIRIn(); // Start de receiver.
  Serial.begin(9600);
  // clear
  lcd.clear();
  // start de lcd
  lcd.init();
  lcd.backlight();
  
}

void loop() {
  // Print 'Hello World!' on the first line of the LCD:
  lcd.setCursor(2, 0); // Set the cursor on the third column and first row.
  lcd.print("Gamestart"); // Print the string "Hello World!"
  lcd.setCursor(2, 1); //Set the cursor on the third column and the second row (counting starts at 0!).
  lcd.print("----------");
}

void countdown{
  lcd.clear(2,1);
  lcd.setCursor(4, 0);
  lcd.print("System Ready");

  lcd.setCursor(0, 2);
  lcd.print("Waiting for signal..");
}

void countdown() {
  lcd.setCursor(2, 0);
  lcd.print("Game starting in");
  
  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("9");
  
  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("8");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("7");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("6");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("5");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("4");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("3");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("2");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("1");

  delay(1000);
  lcd.setCursor(10, 2);
  lcd.print("0");
}
}
