
#include <Servo.h>
Servo servo;

void setup() {
  servo.attach(8);
  Serial.begin(9600);
}

void loop() {
  int recByte;
  while(!Serial.available()){}
  if((recByte = Serial.parseInt()) != 0){
    if(recByte <= 180 && recByte >= 0)
      servo.write(recByte);
  }
}
