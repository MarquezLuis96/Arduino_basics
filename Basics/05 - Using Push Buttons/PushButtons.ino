/*
    Author: Luis Marquez
    Date: 2021/04/08
    Description:
        This code makes tree leds change its brigtness due to a potentiometer
*/

const int led1 = 13;
const int boton1 = 12;

void setup() {
    PinMode(boton1, INPUT_PULLUP);
    pinMode(led1, HIGH)
}

void loop() {
    if(digitalRead(boton1) == LOW) {
        digitalWrite(led1, HIGH);
    }
    else {
        digitalWrite(led1, LOW);
    }
}