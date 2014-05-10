 

int buzzer=11;//

void setup()

{

 pinMode(buzzer,OUTPUT);//

}

void loop()

{

 unsigned char i,j;//

 while(1)

 {

for(i=0;i<80;i++)//output sound of one frequency

 {

  digitalWrite(buzzer,HIGH);//make a sound

    delay(1);//delay 1ms

  digitalWrite(buzzer,LOW);//silient 

 delay(1);//delay 1ms

  }

   for(i=0;i<500;i++)//output sound of another frequency 

    {

      digitalWrite(buzzer,HIGH);//make a sound

      delay(2);//delay 2ms

      digitalWrite(buzzer,LOW);//silient 

      delay(2);//delay 2ms

    }

  }

} 

 
