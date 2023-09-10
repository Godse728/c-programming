#include<stdio.h>
int main()
{
    int n[100];
    int size, i;
    int smallest, largest;
    

    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the element in the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d", &n[i]);
    }
smallest = n[0];
largest = n[0];
for(i=0; i<size; i++)
{
    if(n[i] < smallest){
        smallest = n[i];
    }
    if(n[i] > largest) {
        largest = n[i];
    }
}
printf("Smallest number is %d\n", smallest);
printf("Largest number is %d", largest);
}