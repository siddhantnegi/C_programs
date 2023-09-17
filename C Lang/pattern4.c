#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 0; i <= 5; i++)
    {
     for (k = 1; k <= (5 - i); k++)    //concept (rows-i) - it will give the numbers to spaces to be printed
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}