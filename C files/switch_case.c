#include<stdio.h>
int main()
{
    int menu;
    printf("1.Burger\n");
     printf("2.Pizza\n");
      printf("3.Noodles\n");
       printf("4.Sauges\n");
        printf("5.Momo\n");
        printf("Enter no 1-5 of menu:");
        scanf("%d", &menu);
        switch (menu)
        {
        case 1:
           printf("Burgers\n Price:Rs 299\nDis: 5\n");
            break;
        
        case 2;:
           printf("Pizza\n Price:Rs 299\nDis: 5\n");
            break;
            case 3:
           printf("Noodles\n Price:Rs 299\nDis: 5\n");
            break;
            case 4:
           printf("Sauges\n Price:Rs 299\nDis: 5\n");
            break;
            case 5:
           printf("Momo\n Price:Rs 299\nDis: 5\n");
            break;

        default:
        printf("Invalid input Please choose 1-5");
            break;
        }
}