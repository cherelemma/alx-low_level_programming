#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - validate input number and operator
 *
 * @argc: number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc - 1 != 3)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

return (0);
}
