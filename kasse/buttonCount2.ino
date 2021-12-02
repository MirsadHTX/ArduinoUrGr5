
int buttonCount2() 
{
  
  lcd.setCursor(0, 1); 
 
  clicks2 = digitalRead(6);     //fortæller hvor knappen er 

  delay(0); 

  if (clicks2 == true && stopClicks2 == true)     //hvis begge er true så... 
  {
    counter2 = counter2 + 1;      // counter2 plusser 1 
    stopClicks2 = false;     //stopClicks2 bliver falsk 
  }

  if (clicks2 == false && stopClicks2 == false)     //hvis begge er falske så... 
  {
    stopClicks2 = true;      //stopClicks2 bliver true 
  }


  if (count2 > 4)      // hvis count2 er over 4 så... 
    {
      counter2 = 0;      // counter2 bliver 0 igen
    }

  return counter2;     //funktionen skal retunere variablet "counter2" 
}
