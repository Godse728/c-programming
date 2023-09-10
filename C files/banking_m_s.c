#include <stdio.h>
//#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct Account
{
    char bname[25], bbranch[20], name[30], address[100];
    int accNo;
    float balance;
};
char fileName[] = "d:\\bank.txt";
struct Account acc;
void NewAccount();
void Deposit();
void Withdraw();
void Search();
void Logout();
void ShowOptions();
FILE *fptr;
int main()
{
    char option;
    int accSearch;
    fptr = fopen(fileName, "r+b");
    if (fptr == NULL)
    {
        fptr = fopen(fileName, "w+b");
        if (fptr == NULL)
        {
            printf("File Cannot be created!!!!!\n");
            exit(1);
        }
    }
    while (1)
    {
        printf("\n*****Welcome to Bank Management System******\n");
        ShowOption();
        option = getchar();
        printf("%c\n", option);
        switch (option)
        {
        case 'n':
            NewAccount();
            break;
        case 'd':
            printf("Account Number in which you want to deposit:");
            scanf("%d", &accSearch);
            Deposit(accSearch);
            break;
        case 'w':
            printf("Account Number from which you want to withdraw:");
            scanf("%d", &accSearch);
            Withdraw(accSearch);
            break;
        case 's':
            printf("Account Number to be Searched:");
            scanf("%d", &accSearch);
            break;
        case 'x':
            return 0;
        case 'c':
            system("cls");
            break;
        default:
            system("cls");
            printf("Invalid Option!!");
            break;
        }
    }
    fclose(fptr);
    return 0;
}

void ShowOptions()
{
    printf("Choose your Option:");
    printf("\nn to create a new account \n");
    printf("d to deposit cash\n");
    printf("w to withdraw cash");
    printf("\ns to display account information\n");
    printf("x to exit\n");
    printf("c to clear the screen\n");
}

void NewAccount()
{
    char bn[20];
    char bbr[20];
    char n[30];
    int aNo;
    char add[100];
    float bal = 0;
    fflush(stdin);
    printf("\nName of Bank                  :");
    scanf("%c", &bn);
    fflush(stdin);
    printf("\nName of Branch                :");
    scanf("%c", &bbr);
    printf("\nName of Account Holder        :");
    scanf("5c", &n);
    printf("\nAccount Number                :");
    scanf("%d", &aNo);
    printf("Address of Account Holder       :");
    fflush(stdin);
    scanf("%c", &add);
    strcpy(acc.bname, bn);
    strcpy(acc.bbranch, bbr);
    strcpy(acc.name, n);
    acc.accNo = aNo;
    strcpy(acc.address, add);
    acc.balance = bal;
    fseek(fptr, 0, SEEK_END);
    fwrite(&acc, sizeof(acc), 1, fptr);
    printf("\n Account has been created successfully \n");
    printf("\n*****The information for your reference******");
    printf("\nName of Bank              : %c", acc.bname);
    fflush(stdin);
    printf("\nName of Branch            : %c", acc.bbranch);
    printf("\nName of Account Holder    : %c", acc.name);
    printf("\nAccount Number            : %d", acc.accNo);
    printf("\nAddress of Acc Holder     : %c", acc.address);
    printf("\nAvailable balance         : %f", acc.balance);
    printf("\n*********************************\n");
}

void Search(int accNoForSearch)
{
    int isFound = 0;
    fseek(fptr, 0, SEEK_SET);
    while (fread(&acc, sizeof(acc), 1, fptr) == 1)
    {
        if (acc.accNo == accNoForSearch)
        {
            printf("\n***********Account Information*********");
            printf("\nName of Bank              : %c", acc.bname);
            fflush(stdin);
            printf("\nName of Branch            : %c", acc.bbranch);
            printf("\nName of Account Holder    : %c", acc.name);
            printf("\nAccount Number            : %d", acc.accNo);
            printf("\nAddress of Acc Holder     : %c", acc.address);
            printf("\nAvailable balance         : %f", acc.balance);
            printf("\n*********************************\n");
            isFound = 1;
            break;
        }
    }
    if (isFound == 0)
        printf("\nAccount not found");
}

void Deposit(int accNoForSearch)
{
    int i = 0;
    float dpstAmt;
    fseek(fptr, 0, SEEK_SET);
    while (fread(&acc, sizeof(acc), 1, fptr) == 1)
    {
        i++;
        if (acc.accNo == accNoForSearch)
        {
            printf("\nThe current balance for account %d is %f \n", accNoForSearch, acc.balance);
            printf("\nEnter the amount you want deposit: ");
            scanf("%f", &dpstAmt);
            acc.balance = acc.balance + dpstAmt;
            fseek(fptr, (i - 1) * sizeof(acc), SEEK_SET);
            fwrite(&acc, sizeof(acc), 1, fptr);
            printf("\nThe New balance for account %d is %f \n", accNoForSearch, acc.balance);
            break;
        }
    }
}

void Withdraw(int accNoForSearch)
{
    float wAmt;
    int i = 0;
    fseek(fptr, 0, SEEK_SET);
    while (fread(&acc, sizeof(acc), 1, fptr) == 1)
    {
        i++;
        if (acc.accNo == accNoForSearch)
        {
            printf("\nThe curret balance for account %d is: %f \n", accNoForSearch, acc.balance);
            printf("\nAmount you want to withdraw from account:");
            scanf("%f", &wAmt);
            acc.balance = acc.balance - wAmt;
            fseek(fptr, (i - 1) * sizeof(acc), SEEK_SET);
            fwrite(&acc, sizeof(acc), 1, fptr);
            printf("\nThe New Balance for account %d is: %f \n", accNoForSearch, acc.balance);
            break;
        }
    }
}