/*
    Author: Luis Marquez
    Date: 2021/04/08
    Description:
        Learning how to use a temperature monitor
*/

int tempC;
const int sensorTemp = A0;
liquidCrystal lcd (12, 11, 5, 4, 3, 2);

void setup() {
    Serial.begin(9600);
    lcd.begin(16, 2);
}

void loop() {
    tempC = analogRead(sensorTemp);
    tempc = tempC * 0.48828125;
    Serial.println(tempC);
    lcd.setCursor(0,0);
    lcd.print("Temperatura:");
    lcd.setCursor(1,0);
    lcd.print(tempC);
    delay(1000);
    lecd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature:");
    lcd.setCursor(1,0);
    lcd.print(tempC);
}