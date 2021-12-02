


void XYZBeep() 
{
    //opretter og skriver variablerne 
    accelmeter.getAcceleration(&x, &y, &z);
    lcd.clear();
    lcd.print(x);
    lcd.print(" ");
    lcd.print(y);
    lcd.print(" ");
    lcd.print(z);
    delay(50);

    //hvis x > 1 så skal den bippe
    if (x > 1)
    {
      digitalWrite(7, HIGH);
      delay(300);
      digitalWrite(7, LOW);
      delay(300);
    }

    //hvis y > 1 så skal den bippe
    if (y > 1)
    {
      digitalWrite(7, HIGH);
      delay(300);
      digitalWrite(7, LOW);
      delay(300);
    }

    //hvis z > 1 så skal den bippe
    if (z > 1)
    {
      digitalWrite(7, HIGH);
      delay(300);
      digitalWrite(7, LOW);
      delay(300);
    }
    
}
