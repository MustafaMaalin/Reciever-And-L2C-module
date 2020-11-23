//libraries
#include <Wire.h> // I2C library
#include <IRremote.h> // IR library
#include <ir_Lego_PF_BitStreamEncoder.h> // IR decoder library
#include <LiquidCrystal_I2C.h>  // LCD display library

const int reciever_pin = 9; //ic reviever is gekoppeled aan pin 9
IRrecv irrecv(reciever_pin); // ik laat de library weten dat welke pin gebruikt word als de reciever.
decode_results results; // dit vertaalt de ir code naar leesbare code. 

void setup(){
  //hier start ik de reciever. 

  // start de lcd
}
