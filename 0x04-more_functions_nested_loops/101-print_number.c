#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */

void print_number(int n)
{
      int rev = 0;
      
      while (n > 0)
      {
            rev = (rev * 10) + (t % 10);
            n = n / 10;
      }
  
      while (t > 0)
      {
            _putchar ('0' + rev % 10);
            rev = rev / 10;
      }
}
