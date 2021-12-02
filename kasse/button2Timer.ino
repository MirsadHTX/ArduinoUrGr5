
void button2Timer()
{ 
  startOp();    // kalder funktionen
}

  void startOp() 
{ 
  lcd.setCursor(0,0);  //indstilling af startpunkt på lcd 
  lcd.print("Tid:");   //viser TID
  lcd.print(ms);       //vise milisekunder
  lcd.print(":");      
  lcd.print(s);        //viser sekunder
  lcd.print(":"); 
  lcd.print(m);        //viser minutter
  lcd.print(":"); 
  lcd.print(t);        //vise timer

 
  if(count2 == 1) 
  {
    stopwatch();  //kalder stopursfunktionen
  }

  
  if(count2 == 2) 
  {
    stopwatch_stop();  //kalder stopurs_stop funktionen
  }


  if(count2 == 3) 
  {
    stopwatch_reset();  //kalder stopurs_reset funktionen
  }
  
}



void stopwatch()
{
  
  lcd.setCursor(0,0);  //indstilling af startpunkt på lcd 
  lcd.print("Tid:");   //viser TID
  lcd.print(ms);       //vise milisekunder
  lcd.print(":");      
  lcd.print(s);        //viser sekunder
  lcd.print(":"); 
  lcd.print(m);        //viser minutter
  lcd.print(":");
  lcd.print(t);      //viser timer

  ms = ms + 10;           
  delay(10);           
   
  if(ms == 590)      //if statement for at tælle milisekunder 
  {
    ms = 0; 
    s = s + 1; 
  }

  if(s == 60)      //if statement for at tælle sekunder
  { 
    s = 0; 
    m = m + 1; 
  }
 
  if(m == 60)      //if statement for at tælle minutter
  { 
    m = 0;
    t = t + 1;
  }

  if(t==24)      //if statement for at tælle timer
  {  
    t = 0;   
  }    
  
}


void stopwatch_stop()
{
  lcd.setCursor(0,0);  //indstilling af startpunkt på lcd 
  lcd.print("Tid:");   //viser TID
  lcd.print(ms);       //vise milisekunder
  lcd.print(":");      
  lcd.print(s);        //viser sekunder
  lcd.print(":"); 
  lcd.print(m);        //viser minutter
  lcd.print(":"); 
  lcd.print(t);        //vise timer
}


void stopwatch_reset()
{
  t = 00;    //indstilling af timer til 0
  m = 00;    //indstilling af minuter til 0
  s = 00;    //indstilling af sekunder til 0
  ms = 00;   //indstilling af millisekunder til 0
}
