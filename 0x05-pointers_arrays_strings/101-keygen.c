#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int i;
    char letter, capLetter;
    
    srand((unsigned int)(time(NULL)));    
 
    char pass[12];

    for (i = 0; i < 4; i++) 
    {
        pass[i] = rand() % 9;
        
        capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
      
        letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;

        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n\n");
}
