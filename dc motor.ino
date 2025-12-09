// C++ code
//

#define m1 4 
#define m2 5
#define en 6
void setup()
{
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(en,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  analogWrite(en,150);
 Serial.println("working..");
}