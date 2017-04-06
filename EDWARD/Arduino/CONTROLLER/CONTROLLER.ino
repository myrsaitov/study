#define led 13
String input_string = "";
const String Led_off = "switch led off";
const String Led_on = "switch led on";
bool led_running;

#include<SoftwareSerial.h>

SoftwareSerial mySerial(10,11);//Rx,Tx
// pins for the LEDs:
const int Front_Right_Pin = 3;
/*const int Front_Left_Pin = 5;
const int Rear_Right_Pin = 6;
const int Rear_Left_Pin = 9;*/


void setup()
{
  Serial.begin(9600);
  
  pinMode(Front_Right_Pin, OUTPUT);
  pinMode(Front_Left_Pin, OUTPUT);
  pinMode(Rear_Right_Pin, OUTPUT);
  pinMode(Rear_Left_Pin, OUTPUT);
  
  
  
  mySerial.begin(9600);
}//setup

/*
void loop()
{
	if(mySerial.available())
	{Serial.write(mySerial.read());};
	if(Serial.available())
	{mySerial.write(Serial.read());};
}
*/


void loop()
{
  while (mySerial.available() > 0)
  {

	int Front_Right_Value = mySerial.parseInt();
	/*int Front_Left_Value = mySerial.parseInt();
	int Rear_Right_Value = mySerial.parseInt();
	int Rear_Left_Value = mySerial.parseInt();*/
	//Serial.write(C);
	//mySerial.write(C);
	
    //if (mySerial.read() == '\n')
	{
	  //Serial.println(Rear_Left_Value, HEX);
	  //Serial.write(Front_Right_Value);
	  //mySerial.write(Front_Right_Value);
	  
      Front_Right_Value = constrain(Front_Right_Value, 0, 255);
      /*Front_Left_Value = constrain(Front_Left_Value, 0, 255);
	  Rear_Right_Value = constrain(Rear_Right_Value, 0, 255);
	  Rear_Left_Value = constrain(Rear_Left_Value, 0, 255);*/
      
      analogWrite(Front_Right_Pin,Front_Right_Value);
      /*analogWrite(Front_Left_Pin,Front_Left_Value);
      analogWrite(Rear_Right_Pin,Rear_Right_Value);
	  analogWrite(Rear_Left_Pin,Rear_Left_Value);*/

      /*Serial.println(Front_Right_Value, HEX);
      Serial.println(Front_Left_Value, HEX);
      Serial.println(Rear_Right_Value, HEX);
	  Serial.println(Rear_Left_Value, HEX);*/
	  
    }//if
	
	
  }//while
}//loop*/

