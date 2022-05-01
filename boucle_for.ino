int led1 =3;
int led8 = 10;
int pushbutton = 2;
int i;
void setup() 
{

 Serial.begin(9600);
  
pinMode(pushbutton, INPUT_PULLUP);

  for ( i = 3; i < 11; i = i + 1) 
  {
pinMode(i, OUTPUT);

  }


}

void loop()
{
int buttonstate = digitalRead(pushbutton);
  if (buttonstate ==0)
  for ( i = 3; i < 11; i = i + 1) 
  {
Serial.println("Chenillard en fonctionnement");
Serial.println(buttonstate);
 digitalWrite(i, HIGH);
 delay(200);
 digitalWrite(i, LOW);
 }
else 
 {
  Serial.print("Chenillard à l'arrêt");
  for ( i = 3; i < 11; i = i + 1);
  {
    digitalWrite(i, LOW); 
    }
 }
}

