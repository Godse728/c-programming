#include<stdio.h>
main()
{
    int n, i=1;
    int fact = 1;
    printf("Enter a number whose factorial is to be calculated:");
    scanf("%d", &n);
    while (i<=n)
    {
        fact*=i;
        i++;

    }
    printf("The factorial is: %d\n", fact);
}