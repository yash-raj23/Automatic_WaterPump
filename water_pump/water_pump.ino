//#define trig=6;
//#define echo=5;
float duration, distance;
void setup()
{
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,INPUT);
}

void loop()
{
digitalWrite(6,LOW);
delayMicroseconds(2);
digitalWrite(6,HIGH);
delayMicroseconds(2);

duration=pulseIn(5,HIGH);
distance=(duration/2)*0.0343; //For Distance in centimeter(cm)

//Serial.print(“\ndistance= “);
if(distance>=20)
{
Serial.print(distance);
Serial.print("\n");
digitalWrite(9,HIGH );
Serial.print("\nMOTOR IS ON");
}
else{
Serial.print(distance);
digitalWrite(9,LOW);
delay(500);
Serial.print("\n");
Serial.print("\nMOTOR IS OFF");
}
delay(500);
}
