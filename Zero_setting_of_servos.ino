#include<Wire.h>          // Library for initializing I2C Communication between Arduino & the shield
#include<Adafruit_PWMServoDriver.h>  // Library for 16-channel pwm servo driver shield

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();    // PWM Object Defined

#define ServoMin 102    // "Tick" (out of 4096) Corresponding to min duty cycle (0 degree angle)
#define ServoMax 510    // "Tick"  (out of 4096) Corresponding to max duty cycle (180 degree angle)


void servowrite(int servonum, int angle)
{
  int tick = map(angle,0,180,ServoMin,ServoMax);
  pwm.setPWM(servonum,0,tick);
}

void zeroset()
{
  for (int i = 0; i <6;i++)
  {
    // servowrite(2*i,0);
    // delay(2000);
    // Serial.println("angle = 0");

    servowrite(2*i,90);
    delay(2000);
    Serial.println("angle = 0");

    // servowrite(2*i,180);
    // delay(2000);
    // Serial.println("angle = 0");
    // Calling the 6 servos attached on 0,2,4,6,8,10 and setting it to 90 degrees
    delay(100);
  }
}
void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(50);   //Analog Servos run at ~60Hz

  delay(100);

  zeroset();
  delay(1000);

  

}

void loop() 
{
  // put your main code here, to run repeatedly:

  // zeroset();
}
