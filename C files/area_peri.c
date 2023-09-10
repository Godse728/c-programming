#include<stdio.h>
main()
{
    float length, width, area, peri;
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);
    /* Area of Rectangle = Length X Width */
    area = length * width;
    printf("Area of Rectangle : %f\n", area);
     peri = 2*(length+width);
     printf("\nPerimeter of Rectangle is : %f\n", peri);
    return 0;
}