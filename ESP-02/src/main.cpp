#include <Arduino.h>

void setup()
{
  DDRD = 0XFF;
}

void loop()
{
  //Cheacking
  PORTD = 0XFF;
  delay(500);

  //Q1
  PORTD = 0x00;
  delay(500);

  //Q2
  for (int i = PD0; i <= PD7; i++)
  {
    PORTD |= (1 << i);
    delay(1000);
  }

  
  for (int i = PD0; i <= PD7; i++)
  {
    PORTD &= ~(1 << i);
    delay(1000);
  }

  Q4
  for (int i = PD0; i <= PD7; i++)
  {
    PORTD |= (1 << i);
    delay(1000);
    PORTD &= ~(1 << i);
    delay(1000);
  }

  Q5
  for (int i = PD0; i <= PD7; i+=2)
  {

    PORTD |= (1 << i);
    delay(1000);
    PORTD &= ~(1 << i);
    delay(1000);
  }

  //Q6
  for (int i = PD1; i <= PD7; i+=2)
  {

    PORTD |= (1 << i);
    delay(1000);
    PORTD &= ~(1 << i);
    delay(1000);
  }
}
