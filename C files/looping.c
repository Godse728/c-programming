// WAP to show 1-100 and add their sum.
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    // for ( i = 0; i <=100; i++)
    // {
    //     printf("\n%d", i);
    //     sum += i;
    // }
    i = 0;
    do
    {
        printf("\n%d", i);
        sum += i;
        i++;
    } while (i <= 100);
    printf("\nThe sum of 100 no is  %d\n", sum);
}