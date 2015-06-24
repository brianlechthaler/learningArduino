#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo;
int incomingByte = 0;   // for incoming serial data

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
        Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
        myservo.attach(9);
        lcd.begin(16, 2);
}

void loop() {

        // send data only when you receive data:
        if (Serial.available() > 0) {
          // read the incoming byte:
                incomingByte = Serial.read();
                myservo.write(incomingByte);
                lcd.write(incomingByte);
        }
}
 
