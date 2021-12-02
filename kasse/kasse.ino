

#include <Wire.h>
#include "DS1307.h"
#include "MMA7660.h"
#include <MMA7660.h>
#include <rgb_lcd.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
DS1307 clock;

//opretter alle variabler 
float x, y, z;
MMA7660 accelmeter;

int red, green, blue;   //opretter rød, gul og grøn variabler til farver

// opretter alle tælle variabler
int clicks; 
int clicks2;
int counter = 0;
int counter2 = 0; 
int stopClicks = false; 
int stopClicks2 = false;
int count; 
int count2; 

//indstil timer, minutter, sekund og millisekunder til 0    - til timeren
int t=0;     
int m=0;     
int s=0;     
int ms=0;    


//setup - kører kun en gang 
void setup() 
{
    //opretter klokken 
    Serial.begin(9600);
    clock.begin();

    //sætter tiden 
    /*
    clock.fillByYMD(2021,11,17);
    clock.fillByHMS(12,22,10);
    clock.fillDayOfWeek(WED);
    clock.setTime();
    */
    
    //opretter displayet 
    lcd.begin(16,2);
    lcd.clear();

    //opretter accelerameteret 
    accelmeter.init();
}

void loop() 
{
    lcd.setCursor(0, 1);

    //får numrene fra count funktionerne
    count = buttonCount();
    count2 = buttonCount2();

    //hvis knap1 er = 0 så skal printTime funktionen kaldes
    if (count == 0) 
    {
      delay(100); 
      lcd.clear();
      lcd.setRGB(127, 0, 255);
      printTime();
    }

    //hvis knap1 er = 1 så skal temperature funktionen kaldes
    if (count == 1) 
    {
      delay(100);
      lcd.clear();
      lcd.setRGB(255, 0, 0);
      temperature();
    }

    //hvis knap1 er = 2 så skal button2Timer funktionen kaldes
    if (count == 2) 
    {
      delay(100);
      lcd.clear();
      lcd.setRGB(0, 255, 0);
      button2Timer();
    }

    //hvis knap1 er = 3 så skal XYZColor funktionen kaldes
    if (count == 3) 
    {
      delay(100);
      lcd.clear();
      lcd.setRGB(242, 245, 59);
      XYZColor(); 
    }

    //hvis knap1 er = 4 så skal XYZBeep funktionen kaldes
    if (count == 4) 
    {
      delay(100);
      lcd.clear();
      lcd.setRGB(58, 240, 228);
      XYZBeep();
    }

}
