#include <Stepper.h>

#define IN_1 8
#define IN_2 9
#define IN_3 10
#define IN_4 11

Stepper motor(2048, IN_1, IN_3, IN_2, IN_4);

int speed = 10;

void setup() 
{
  Serial.begin(9600);
  Serial.println("");
  Serial.print("Motor pripraveny !");
  Serial.println("");
}

void loop() {
  motor.setSpeed(speed);
  motor.step(2048); // 180° otocenie
  Serial.println("Motor otoceny v Smere hod. ručiciek o 180° !");
  delay(1000);
  motor.setSpeed(speed);
  motor.step(-2048); // 180° otocenie
  Serial.println("Motor otoceny v PROTI Smere hod. ručiciek o -180° !");
  delay(1000);
}
