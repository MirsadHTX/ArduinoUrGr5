

void temperature() 
{
    int sensorValue;                  //opretter variabel 
    sensorValue = analogRead(A0);     //siger hvor sensoren er 
    lcd.print(sensorValue);           //printer temperaturen 
}
