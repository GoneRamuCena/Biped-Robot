#include<Wire.h>          // Library for initializing I2C Communication between Arduino & the shield
#include<Adafruit_PWMServoDriver.h>  // Library for 16-channel pwm servo driver shield

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();    // PWM Object Defined

#define ServoMin 102    // "Tick" (out of 4096) Corresponding to min duty cycle (0 degree angle)
#define ServoMax 510    // "Tick"  (out of 4096) Corresponding to max duty cycle (180 degree angle)

int flag = 0;  // variable to differentiate the first loop from the rest steps

void servowrite(int servonum, int angle)
{
  int tick = map(angle,0,180,ServoMin,ServoMax);
  pwm.setPWM(servonum,0,tick);
}


void zeroset()
{
  for (int i = 0; i <6;i++)
  {
    servowrite(2*i,90);
    Serial.println("angle = 0");
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
  delay(2000);

  

}

void loop() 
{
  // put your main code here, to run repeatedly:
  /*
  step 1 :
  left ankle  - 90 --> 45
  right angle - 90 --> 70
  */

  for (int i = 0; i<4;i++)
  {
    servowrite(0,90-15*i);
    delay(100);

    if(i<3)
    {
      servowrite(10,90-10*i);
      delay(100);
    }
  }


  if (flag = 0)
  {
    /*
    Step - 2 :
    Left hip,thigh   - 90 --> 105
    right hip, thigh - 90 --> 105
    */

    for (int i = 0; i <4;i++)
    {
      servowrite(2,90+5*i);    // Left thigh
      servowrite(4,90+5*i);    // left hip
      servowrite(6,90+5*i);    // right hip
      servowrite(8,90+5*i);    // right thigh

      delay(100);
    }
  }

  else
  {
    /*
    Step - 2a :
    Left hip,thigh   - 75 --> 105
    right hip, thigh - 75 --> 105
    */

    for (int i = 0; i <7;i++)
    {
      servowrite(2,75+5*i);    // Left thigh
      servowrite(4,75+5*i);    // left hip
      servowrite(6,75+5*i);    // right hip
      servowrite(8,75+5*i);    // right thigh

      delay(100);
    }
  }
  /*
  step 3 : 
  Left Ankle  - 45 --> 90
  Right Ankle - 70 --> 90
  */

  for (int i = 0; i < 4; i++)
  {
    servowrite(0,45+15*i);
    delay(100);

    if (i < 3 );
    {
      servowrite(10,70+10*i);
      delay(100);
    }
    
  }



  /*
  step 4 : 
  Left Ankle  - 90 --> 110
  Right Ankle - 90 --> 135
  */

  for (int i = 0; i < 4; i++)
  {
    servowrite(10,90+15*i);
    delay(100);

    if (i < 3 );
    {
      servowrite(0,90+10*i);
      delay(100);
    }
  }

  /*
  Step - 5 :
  Left hip,thigh   - 105 --> 75
  right hip, thigh - 105 --> 75
  */

  for (int i = 0; i <7;i++)
  {
    servowrite(2,105-5*i);    // Left thigh
    servowrite(4,105-5*i);    // left hip
    servowrite(6,105-5*i);    // right hip
    servowrite(8,105-5*i);    // right thigh

    delay(100);
  }


  /*
  step 6 : 
  Left Ankle  - 110 --> 90
  Right Ankle - 135 --> 90
  */

  for (int i = 0; i < 4; i++)
  {
    servowrite(10,135-15*i);
    delay(100);

    if (i < 3 );
    {
      servowrite(0,110-10*i);
      delay(100);
    }
  }


  flag++;        // After Cycle 1, Changes the gait to initiate step 2 from.

}
