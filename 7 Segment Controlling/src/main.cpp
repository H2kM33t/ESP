#include <Arduino.h>

// Array for 7-segment display values corresponding to digits 0-9
int Seven_Segment_Display[] = {0x01, 0x4F, 0X12, 0X06, 0X4C, 0X24, 0X20, 0X0F, 0X00, 0X04};
int *ptr;

void setup()
{
  // Set all pins of PORT D as output
  DDRD = 0XFF;
}

void loop()
{
  ptr = Seven_Segment_Display;

  // Assume any number
  int number = 1234;  // Example number

  // Extract the first digit of the number
  while (number >= 10) {
    number /= 10;
  }

  // Display the first digit on the 7-segment display
  PORTD = Seven_Segment_Display[number];
  delay(5000);  // Keep the display on for 5 seconds
}
