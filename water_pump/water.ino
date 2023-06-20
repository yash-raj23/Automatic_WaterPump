//#define trig=D6; 6(UNO)
//#define echo=D5; 5(UNO)
float duration, distance;
void setup()
{
Serial.begin(9600);
pinMode(D8,OUTPUT); //9-> UNO
pinMode(D6,OUTPUT); 
pinMode(D5,INPUT);
}

void loop()
{
digitalWrite(D6,LOW);
delayMicroseconds(2);
digitalWrite(D6,HIGH);
delayMicroseconds(2);

duration=pulseIn(D5,HIGH);
distance=(duration/2)*0.0343; //For Distance in centimeter(cm)

//Serial.print(“\ndistance= “);
if(distance>=20)
{
Serial.print(distance);
Serial.print("\n");
digitalWrite(D8,HIGH );
}
else{
Serial.print(distance);
digitalWrite(D8,LOW);
delay(500);
Serial.print("\n");
}
delay(500);
}
