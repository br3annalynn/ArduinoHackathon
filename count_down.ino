#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
//int minutes = 2;
void setup()
{ 
  lcd.begin(16, 2);

  lcd.clear();

  lcd.print("Time remaining: ");
  lcd.setCursor(1,1);
  lcd.print(1);
  lcd.setCursor(2,1);
  lcd.print(":");
  lcd.setCursor(3,1);
  lcd.print("00");
  delay(1000);
}

void loop()
{
  //minutes--;
  for (int m = 0 ; m >= 0; m--)
  {
    lcd.setCursor(1,1);
    lcd.print(m);
      
    for ( int s1 = 5 ;  s1 >= 0 ; s1--)
    {
      lcd.setCursor(3,1);
      lcd.print(s1);
      
      for ( int s2 = 9; s2 >= 0; s2--)
      {
        lcd.setCursor(4,1);
        lcd.print(s2);
        delay(1000);
      }
   
     
     }
   
  }
  lcd.clear();
  lcd.print("Time is up!!");
  exit(0);
}
