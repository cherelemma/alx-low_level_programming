#include <stdio.h>
/**
 * main - find sum of multiples of 3 and 5
 *
 * Return: Always success.
 */

int main(void)
{
	long int n = 0, sum = 0;
	
	while (n < 1024)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%ld", sum);
	
	return (0);
}
