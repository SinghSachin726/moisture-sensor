void setup()  
{ 
Serial.begin(9600); 
 
pinMode(A0,INPUT); 
pinMode(2,OUTPUT); 
pinMode(3,OUTPUT); 
}  
void loop()  
{ 
int s=analogRead(A0); 
Serial.print(s); 
Serial.print("  -  "); 
if(s>=1000) 
{ 
Serial.println("Sensor is not in the soil or disconnected"); 
} 
else if(s<1000 && s>=600) 
{ 
Serial.println("Soil is dry"); 
digitalWrite(2,HIGH); 
digitalWrite(3,LOW); 
} 
else if(s<600 && s>=370) 
{ 
Serial.println("Soil is HUMID");   
} 
else 
{ 
   
Serial.println("Soil is moist enough"); 
digitalWrite(2,LOW); 
digitalWrite(3,HIGH); 
} 
delay(200);


  // put your main code here, to run repeatedly:

}
