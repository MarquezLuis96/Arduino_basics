/*
    Author: Luis Marquez
    Date: 2021/04/08
    Description:
        This code uses a serial monitor, a led and a potentiometer to set the led on or off
*/

int ledRosa = 3;
int potPin = A0;
int potValue = 0;
int potValue = 0;

void setup() {
    pinMode(ledRosa, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    potValue = analogRead(potPin);
    Serial.println(potValue);
    digitalWrite(ledRosa, HIGH);
    delay(potValue);
    digitalWrite(ledRosa, LOW);
    delay(potValue);
}