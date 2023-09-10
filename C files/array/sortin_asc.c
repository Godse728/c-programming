#include <stdio.h>
int main()
{
    int i, j, temp, n[10], size;
    printf("\n Enter the size of array: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n Enter %d-number:", i+1);
        scanf("%d", &n[i]);
    }
    for (i = 0; i < size; i++)
        
    {
        for (j = i + 1; j < size; j++)
        {
            if (n[i] > n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("\n\n Sorted in ascending order:");
    for(i=0; i<size; i++)
    {
        printf("\n %d\n", n[i]);
    }
    printf("\n\n Sorted in descending order:");
    for(i=size-1; i>=0; i--)
    {
        printf("\n%d\n", n[i]);
    }
}