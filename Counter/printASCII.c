#include <stdio.h>

#define CHARACTERS 256 /* Character in 8-bit ASCII */
int main()
{
    for (int i = 0; i < CHARACTERS; i++)
    {
        printf("value: %i  char :%c|\n", i,i);
    }
    
}