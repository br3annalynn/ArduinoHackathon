#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
int minutes = 1;
const int buttonPin = 6;     // the number of the pushbutton pin
int buttonState = 0;
const int buzzerPin = 7;
void setup()
{ 
  pinMode(buzzerPin, OUTPUT);
  lcd.begin(16, 2);
  
  lcd.clear();

  lcd.print("Time remaining: ");
  lcd.setCursor(1,1);
  lcd.print(minutes);
  lcd.setCursor(2,1);
  lcd.print(":");
  lcd.setCursor(3,1);
  lcd.print("00");
  //delay(1000);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW){
    
    minutes--;
    for (int m = minutes ; m >= 0; m--)
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
    tone(buzzerPin, 600, 1000);
    delay(1000);
    exit(0);
  }
}
