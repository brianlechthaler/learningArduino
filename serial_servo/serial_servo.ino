#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo;
char incomingByte[] = "Hello";
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
        Serial.begin(9600);     
        myservo.attach(9);
        lcd.begin(16, 2);
}

void loop() {

        
        if (Serial.available()) {

               
                myservo.write(Serial.read());
                lcd.write(Serial.read());
                Serial.println(Serial.read());
                delay(1000);
                //lcd.clear();
        }
}
 
