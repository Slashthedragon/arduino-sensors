 

Use the LED of digital 13, and connect the Hall magnetic field sensor to digital pin 3, and when there is magnetic shield present, the LED will turn on, otherwise, it will turn off.

 

int Led=13;

int SENSOR=3;

int val;

void setup()

{

pinMode(Led,OUTPUT);

pinMode SENSOR,INPUT);

}

void loop()

{

val=digitalRead(SENSOR);

if(val==HIGH)

{

digitalWrite(Led, HIGH);

}

Else

{

digitalWrite(Led, LOW);

}

}

 
