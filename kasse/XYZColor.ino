

void XYZColor() 
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

    //hvis x > 1 så skal den skifte til en random farve
    if (x > 1)
    {
      red = random(0, 255); 
      green = random(0, 255);
      blue = random(0, 255);

      lcd.setRGB(red, green, blue);
      delay(1000);
    }

    //hvis y > 1 så skal den skifte til en random farve
    if (y > 1)
    {
      red = random(0, 255); 
      green = random(0, 255);
      blue = random(0, 255);

      lcd.setRGB(red, green, blue);
      delay(1000);
    }

    //hvis z > 1 så skal den skifte til en random farve
    if (z > 1)
    {
      red = random(0, 255); 
      green = random(0, 255);
      blue = random(0, 255);

      lcd.setRGB(red, green, blue);
      delay(1000);
    }
    
    
}
