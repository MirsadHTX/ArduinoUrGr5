

void printTime() 
{
    //printer alle variablerne 
    lcd.clear();
    clock.getTime();
    lcd.print(clock.hour, DEC);
    lcd.print(":");
    lcd.print(clock.minute, DEC);
    lcd.print(":");
    lcd.print(clock.second, DEC);
    lcd.print(" ");
    lcd.print(clock.month, DEC);
    lcd.print("/");
    lcd.print(clock.dayOfMonth, DEC);
    lcd.print("/");
    lcd.print(clock.year, DEC);
    lcd.print(" ");
    lcd.print(clock.dayOfMonth);
    lcd.print("*");
    switch (clock.dayOfWeek) 
    
    {
      //printer de forskellige dage på den rigtige tid
        case MON:
            lcd.print("MON");
            break;
        case TUE:
            lcd.print("TUE");
            break;
        case WED:
            lcd.print("WED");
            break;
        case THU:
            lcd.print("THU");
            break;
        case FRI:
            lcd.print("FRI");
            break;
        case SAT:
            lcd.print("SAT");
            break;
        case SUN:
            lcd.print("SUN");
            break;
    }
    
    // printer
    lcd.println(" ");
}
