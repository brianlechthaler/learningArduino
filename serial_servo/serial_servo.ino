#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo;
int incomingByte = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
        Serial.begin(9600);     
        myservo.attach(9);
        lcd.begin(16, 2);
}

void loop() {

        
        if (Serial.available() > 0) {

                incomingByte = Serial.read();
                myservo.write(incomingByte);
                lcd.write(incomingByte);
                Serial.println(incomingByte);
                delay(500);
        }
}
 
