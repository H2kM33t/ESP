#include <Arduino.h>
#include <util/delay.h>
#define LED_DELAY 500;
void setup()
{
  DDRD = 0xFF;
}

void loop()
{
  // Q3
  // for (int i = PD0; i <= PD7; i++)
  // {
  //   PORTD |= (1 << i);
  //   delay(100);
  // }

  // for (int i = PD0; i <= PD7; i++)
  // {
  //   PORTD &= ~(1 << i);
  //   delay(100);
  // }

  // for (int i = PD7; i >= PD0 ; i--)
  // {
  //   PORTD |= (1 << i);
  //   delay(100);
  // }

  // for (int i = 7; i >= PD0; i--)
  // {
  //   PORTD &= ~(1 << i);
  //   delay(100);
  // }

  // 06
  // PORTD |= (1 << PORT4);
  // PORTD |= (1 << PORT5);
  // _delay_ms(500);


  // PORTD |= (1 << PORT2);
  // PORTD |= (1 << PORT3);
  // delay(500);

  // PORTD |= (1 << PORT6);
  // PORTD |= (1 << PORT7);
  // delay(500);

  // PORTD |= (1 << PORT0);
  // PORTD |= (1 << PORT1);
  // delay(500);
}