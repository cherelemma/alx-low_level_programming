#include <stdio.h>

/**
 * main - print prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
	int unsigned long i = 2, prime, j;
	int flag = 0;
	
	while (i <= 612852475143/2)
	{
		if (612852475143 % i == 0)
		{
			printf("%lu not\n", i);
			for(j = 2 ; j < i / 2 ; j++) 
			{
		      	if(i % j == 0) 
				{			
				flag = 1;
		        break;
		      	}
		    }
		    if (flag == 0)
		    	prime = i;
		}
	    ++i;
   }
	printf("%lu", prime);
	printf("done");
    return (0);
}

