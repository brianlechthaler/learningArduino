int sensorPin = A0;
int ledPin = 13;
int buttonPin = 12;
int sensorValue = 0;

void setup()
{
pinMode(ledPin, OUTPUT);
}

void loop()
{
 if (buttonPin == HIGH){
  for( int i = 0; i = 4; ++i)
{
digitalWrite(ledPin, HIGH);
delay(100);
digitalWrite(ledPin, LOW);
delay(100);
}  
}
}

