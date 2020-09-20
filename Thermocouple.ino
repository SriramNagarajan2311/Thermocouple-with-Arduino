#include "max6675.h"
#include <Wire.h>
//#define ThermoOnly 1


int thermoDO = 4;
int thermoCS = 5;
int thermoCLK = 6;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

void setup()
{

  Serial.begin(9600);
  delay(500);
}

void loop() 
{
  
  
  Serial.print("\nC = "); 
  Serial.println(thermocouple.readCelsius());
  Serial.print("F = ");
  Serial.println(thermocouple.readFahrenheit());   
 
  delay(1000);
}
