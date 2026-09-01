#include <SoftwareSerial.h>
#include<Servo.h> 

Servo lift ;
Servo rear;
Servo front;

char currstatus;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);

  Serial.println("Bluetooth test started");

  front.attach(4);
  lift.attach(7);
  rear.attach(8);

  lift.write(90);
  rear.write(90);
  front.write(90);
  delay(2000);

  Serial.begin(9600);
  Serial1.begin(9600);

  Serial.println("Bluetooth test started");

  currstatus = 's';
}

void loop() 
{
  // put your main code here, to run repeatedly:
  while(Serial1.available())
  {
    Serial.print("Received byte: ");

    currstatus = Serial1.read();

    Serial.println(currstatus);
    

    if(currstatus == 'w') 
    {
      Serial.println("Forward");
      forward();
    }
    if(currstatus == 'b') 
    {
      Serial.println("Backward");
      backward();
    }
    
    if(currstatus == 's') 
    {
      stop();
      Serial.println("Stop");
    }

  }
}



void forward() {
  // For Forward motion.
  //step 1 :
  lift.write(120);
  delay(200);

  //step 2 :
  front.write(60);
  rear.write(60);
  delay(200);

  //step 3 :
  lift.write(90);
  delay(200);

  //step 4 :
  lift.write(60);
  delay(200);

  //step 5 :
  front.write(90);
  rear.write(90);
  delay(200);

  //step 6 :
  lift.write(90);
  delay(200);

}



void backward() {
  // for backward motion
  //step 1 :
  lift.write(120);
  delay(200);

  //step 2 :
  front.write(120);
  rear.write(120);
  delay(200);

  //step 3 :
  lift.write(90);
  delay(200);

  //step 4 :
  lift.write(60);
  delay(200);

  //step 5 :
  front.write(90);
  rear.write(90);
  delay(200);

  //step 6 :
  lift.write(90);
  delay(200);

}


void stop()
{
  lift.write(90);
  delay(200);
  rear.write(90);
  delay(200);
  front.write(90);
  delay(200);
}