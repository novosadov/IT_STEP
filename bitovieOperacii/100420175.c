#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
void main()
{
    unsigned int number = 123;
 
    for (int i = 31; i >= 0; i--)
    {
        printf("%i", (number & (1 << i)) ? 1 : 0);
    }
 
}
