#include <stdio.h>
/**
 * main - print fibnonic series
 *
 * Return: Always success.
 */

int main(void)
{
	long int n1 = 0, n2 = 1, n3, i;

	for (i = 2; i <= 48; ++i)
	{
		n3 = n1 + n2;

		if (i < 48 && n3 != 2)
			printf("%d, ", n3);
		else
			printf("%d", n3);
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
