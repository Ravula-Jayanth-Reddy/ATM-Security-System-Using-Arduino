#include<SoftwareSerial.h>
#include<Servo.h>
int vb = 8 ;
int buz = 10 ;
Servo myservo;
void setup () {
  Serial.begin(9600);
    pinMode(vb,INPUT);
    pinMode(buz,OUTPUT);
    myservo.attach(9);
    digitalWrite(buz,LOW);
    myservo.write(0);
}
void loop () {
    Serial.print("VB:");
    Serial.println(digitalRead(vb));
    delay(1000);

    if ( (digitalRead(vb) == 1))
    {  
          myservo.write(180);
                digitalWrite(buz,HIGH);
           delay(2000);
    

    }
    if ( (digitalRead(vb) == 0) )
    {
   digitalWrite(buz,LOW);
    myservo.write(0);
    }
   
}
