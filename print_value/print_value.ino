#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int incomingByte = 0;   // for incoming serial data


void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
        pinMode(13, OUTPUT);
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();
                lcd.setCursor(16, 2);
                // say what you got:
                lcd.clear();
                //lcd.print("I received: ");
                lcd.print('1');
                digitalWrite(13, HIGH);
                delay(1000);
        }          
        else{
          lcd.print('0');
          digitalWrite(13, LOW);
        }
}
 
