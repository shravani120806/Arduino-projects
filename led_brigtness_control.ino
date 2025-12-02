// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  analogWrite(11,0);
  delay(1000);
  analogWrite(11,50);
  delay(1000);
analogWrite(11,100);
  delay(1000);
  analogWrite(11,255);
  delay(2000);

}