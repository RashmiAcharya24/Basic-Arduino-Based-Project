int lightSensor = 0;
 
void setup() 
{
  pinMode(A0, INPUT);
  Serial.begin (9600);
  pinMode(9, OUTPUT);
}
 
void loop()
{
  lightSensor = analogRead(A0);
  Serial.println(lightSensor);
  analogWrite(9,map(lightSensor,0,1023,0,255));
  delay(10);
}
