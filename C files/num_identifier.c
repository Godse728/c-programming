#include<stdio.h>
int main()
{
    int i, num;
    printf("\n Enter the number:");
    scanf("%d", &num);
    for(i=2;i<num; i++)
    {
        if(num%i==0)
        {
            printf("\n Not a Prime Number.");
            break;
        }
    }
    if (i==num)
    {
printf("\n %d is Prime Number..\n");

    }
    
}