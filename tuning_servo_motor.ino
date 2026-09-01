#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

#define SERVO_MIN 102
#define SERVO_MAX 512

uint8_t num = 1;   // Servo connected to channel 1

void setup()
{
  Serial.begin(9600);

  Serial.println("Starting PCA9685...");

  pwm.begin();
  pwm.setPWMFreq(50);   // MG995: use 50 Hz
  delay(500);

  Serial.println("PCA9685 started");
}

void loop()
{
  Serial.println("Going 0 -> 180");

  for (int pulse = SERVO_MIN; pulse <= SERVO_MAX; pulse++)
  {
    pwm.setPWM(num, 0, pulse);
    delay(10);
  }

  delay(2000);

  Serial.println("Going 180 -> 0");

  for (int pulse = SERVO_MAX; pulse >= SERVO_MIN; pulse--)
  {
    pwm.setPWM(num, 0, pulse);
    delay(10);
  }

  delay(3000);
}