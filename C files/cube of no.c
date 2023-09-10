#include<stdio.h>
int main()
{
    int i, cube, n;

    printf("Enter the number :");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        cube = i*i*i;
        printf("\nCube of %d is %d\n", i, cube);
    }
    
}