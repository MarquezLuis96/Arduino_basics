/*
    Author: Luis Marquez
    Date: 2021/04/08
    Description:
        Learning how to use arduino and a electrical motor
*/

const int motor1A = 2;
const int motor1B = 4;
int velocidad = 0;
const int pwm1 = 2;

void setup() {
    pinMode(motor1A, OUTPUT);
    pinMode(motor1B, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    velocidad = 2;
    analogWrite(pwm1, velocidad);
}