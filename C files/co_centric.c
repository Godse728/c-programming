#include<stdio.h>
#define pi 3.14
 void main()
{
    float r1,r2,a1,a2,area;
    printf("enter the radius of large circle\n");
   
    printf("enter radius of small circle\n");
    
    

    scanf("%f %f", &r1, &r2);
    a1=pi*r1*r1;
    a2=pi*r2*r2;
    area=a1-a2;
    printf("the area of the first circle is :%.2f\n",a1);
    printf("\n the area of second circle is:%.2f\n",a2);
    printf("\n the area between two circles is:%.2f",area);
  


}