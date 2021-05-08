#include <PID_v1.h>
const int sensorTemp = A0;
const int velocidad = 9;
double temp;
double Output2;


float Kp = 70;
float Ki = 100;
float Kd = 20;


PID myPID(&input, &Output, Kp, Ki, Kd, REVERSE);

// SALIDA SERIAL
const int sampleRate = 1; //Variable that determines how fast our PID runs
const long serialPing= 500; //This determines how often we ping our loop serial pin
unsigned long now = 0; //this variable is used to keep track of time placeholder
unsigned long lastMessage = 0; 


void setUp(){
    Setpoint = 23;
    Serial.begin(9600); //Start a serial session
    myPID.SetMode(AUTOMATIC); //Turn on the PID loop
    myPID.SetSampleTime(sampleRate); //sets the sample rate
    Serial.println("Begin"); //Hello World
    lastMessage = millis(); //TimeStamp
}

void loop() {
    temp = analogRead(sensorTemp);
    Input = ((temp) * (0.48828125));
    myPID.compute();
    Output2 = Output + 60;
    analogWrite(velocidad, Output2)


    Serial.print("Setpoint = ");
    Serial.print(Setpoint);
    Serial.print("Input = ");
    Serial.print(Input);
    Serial.print("Output");
    Serial.print(Output);
    Serial.print("\n");
}