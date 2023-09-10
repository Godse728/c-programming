// WAP to input marks of 5 subjects and find their average and sum.

#include<stdio.h>
int main()
{
    int n[5], i, sum=0;
    float avg=0;
// printf("Enter marks of five subject:\n");
for(i=1;i<=5;i++)
{
    printf("Enter marks of %d subject:\n", i);
    scanf("%d", &n[i]);
    
}
for(i=1;i<=5;i++)
{
    sum += n[i];
}
avg = sum/5;
printf("sum is %d\n average is %f\n", sum, avg);
}