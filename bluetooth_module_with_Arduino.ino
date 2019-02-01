/*
*Bluetooth with Arduino uno
*This code describes how an LED can be operated with the help of bluetooth module using Arduino
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/

char BL_DATA=0; //Variable to store recievcd data

void setup()
{
    Serial.begin(9600); //intialize the buad rate for serial communication                       
    pinMode(8, OUTPUT); //set dgital pin 8 AS OUTPUT 
}
void loop()
{
   if(Serial.available() > 0)// Send data (only when data is recived)
   {
    BL_DATA= Serial.read();//Read the  incoming  data and store it in variable BL_DATA
              
      if(BL_DATA=='1') // Checks whether the value of BL_DATA is equal to 1
       
         digitalWrite(8, HIGH);//If condition true (BL_DATA=1) then LED turns ON
        }
      else if(BL_DATA=='0') //Checks whether the value of BL_DATA is equal to 0
       {
        digitalWrite(8, LOW);//If condition false (BL_DATA=0) then LED turns Off
         
   }
}
