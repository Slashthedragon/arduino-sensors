int Led=13;//define LED interface
 
int Shock=3//define vibration sensor interface
 
int val;//define digital varible val
 
void setup()
 
{
 
pinMode(Led,OUTPUT);//define LED as output
 
pinMode(Shock,INPUT);//define shock as input
 
}
 
void loop()
 
{
 
val=digitalRead(Shock);//
 
if(val==HIGH)//
 
{
 
digitalWrite(Led,LOW);
 
}
 
else
 
{
 
digitalWrite(Led,HIGH);
 
}
 
}
