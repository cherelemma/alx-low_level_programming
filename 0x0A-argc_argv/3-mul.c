#include <stdio.h>

/**
* main - prints name name of program.
* @argc: number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * aoti(argv[2]));

return (0);
}
