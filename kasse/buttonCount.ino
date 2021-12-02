
int buttonCount() 
{
  
  lcd.setCursor(0, 1); 
 
  clicks = digitalRead(8);      //fortæller hvor knappen er 

  delay(0); 

  if (clicks == true && stopClicks == true)     //hvis begge er true så... 
  {
    counter = counter + 1;      // counter plusser 1 
    stopClicks = false;     //stopClicks bliver falsk
  }

  if (clicks == false && stopClicks == false)     //hvis begge er falske så... 
  {
    stopClicks = true;      //stopClicks bliver true 
  }


  if (count > 4)      // hvis count er over 4 så...
    {
      counter = 0;      // counter bliver 0 igen
    }

  return counter;     //funktionen skal retunere variablet "counter" 
}
