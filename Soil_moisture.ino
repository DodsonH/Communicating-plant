//This is a function used to get the soil moisture content
int readSoil()
{

    digitalWrite(soilPower, HIGH);//turn D9 "On"
    delay(10);//wait 10 milliseconds 
    val = analogRead(soilPin);//Read the SIG value from sensor 
    digitalWrite(soilPower, LOW);//turn D9 "Off"
    return val;//send current moisture value
}
