
/* Basic Arduino example code for displaying text on 16x2, 20x4 etc. character LCDs. 
More info: www.www.makerguides.com */
// Include the library:
#include <dht.h>
#define dht_apin A1 // Analog Pin sensor is connected to
dht DHT;
#include <LiquidCrystal.h>
// Create an LCD object. Parameters: (RS, E, D4, D5, D6, D7):
LiquidCrystal lcd = LiquidCrystal(2, 3, 4, 5, 6, 7);
//soil moisture
int val = 0; //value for storing moisture value 
int soilPin = 9;//Declare a variable for the soil moisture sensor 
int soilPower = 7;//Variable for Soil moisture Power
void setup() {
 // Specify the LCD's number of columns and rows.
  lcd.begin(16, 2);
  Serial.begin(9600);   // open serial over USB
  pinMode(soilPower, OUTPUT);//Set D9 as an OUTPUT
  digitalWrite(soilPower, LOW);//Set to LOW so no power is flowing 
    Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
}
void loop() {
    
//get soil moisture value from the function and print it
  // add scroll so we can have more words
   lcd.scrollDisplayLeft();
   delay(100);
  lcd.setCursor(1, 0);// Set the cursor, counting starts at 0:
  // Print the string :
  lcd.print("Hi, Im Planty2. Help me stay alive!");
  // Set the cursor :
  lcd.setCursor(1, 1);
  // Print the string:
  lcd.print("water lvl:");
  //set cursor:
  lcd.setCursor(12,1);
  //print function for soil moisture
  lcd.print(readSoil());
delay(1000);//take a reading every second
//get water level reading inside pot with water seonsor
  int sensor=analogRead(A0); // Incoming analog signal read and appointed sensor
Serial.println(sensor);   //Wrote serial port
delay(1000);
//temp and humidity
   DHT.read11(dht_apin);
    lcd.setCursor(16, 1);
    lcd.print("Temp = ");
    lcd.print(DHT.temperature); 
    lcd.println("C  ");
    delay(5000);//Wait 5 seconds before accessing sensor again.
 

}
