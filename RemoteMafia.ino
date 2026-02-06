#include <IRremote.hpp> //Used https://www.makerguides.com/ir-receiver-remote-arduino-tutorial/ for help on IR sensers
#include <EEPROM.h>
#include <LiquidCrystal.h>

int players = 6;
#define IR_RECEIVE_PIN 2


void setup() 
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(, INPUT);
  delay(100);
}

void loop() 
{
  if (IrReceiver.decode()) 
  {
    uint16_t command = IrReceiver.decodedIRData.command;
    delay(100);
    IrReceiver.resume();
  }
}
