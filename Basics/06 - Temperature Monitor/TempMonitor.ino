/*
    Author: Luis Marquez
    Date: 2021/04/08
    Description:
        Learning how to use a temperature monitor
*/

int tempC;
const int sensorTemp = A0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    tempC = analogRead(sensorTemp);
    tempc = tempC * 0.48828125;
    Serial.println(tempC);
}