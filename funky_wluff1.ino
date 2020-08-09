#include <Servo.h>
Servo moto1;
Servo moto2;

void setup()
{
  moto1.attach(7); moto2.attach(6);
  moto1.write(170);
  moto2.write(170);
  delay(1000);
  moto1.write(0);
  moto2.write(0);
}

void loop()
{

}