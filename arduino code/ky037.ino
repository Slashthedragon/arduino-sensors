 /*

Use the LED comes with digital pin 13, and connect the shock sensor output to digital pin 3, when the shock sensor senses vibration, LED will blink.
*/



int Led=13;

int Shock=3

int val;

void setup()

{

pinMode(Led,OUTPUT);

pinMode(Shock,INPUT);//

}

void loop()

{

val=digitalRead(Shock);

if(val==HIGH)/

{

digitalWrite(Led,LOW);

}

else

{

digitalWrite(Led,HIGH);

}

}
