#include <stdio.h>
int main()
{
    int i, j, n, fibo = 0;

    do
    {
        printf("Enter the value of n:");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            fibo = n * i;
        }
        printf("\nfactorial of %d is  %d\n", n, fibo);
        i++;
        printf("do want to continue you:\n 0 to exit\n 1 to continue:");
        scanf("%d", &j);
    } while (j == 1);
}