int LED=4;
int BUTTON=6;
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}
void loop()
{
  if(digitalRead(BUTTON)==1){
    digitalWrite(LED,LOW);
  }else{
    digitalWrite(LED,HIGH);
  }
}
