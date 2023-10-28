//Simple Banking Application 1.0


#include"main.h"
#include"disbal.c"//Function for displaying balance
#include"deposit.c"//Function for user to deposit
#include"withdraw.c"
extern float;

int main()
{
    int choice;//1=display choice
    float amount;
    printf("Welcome to the Simple banking application\n");
do {
printf("\nMenu\n");
printf("1. Check Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);




switch (choice) {
case 1:
    displayBalance();
    break;




case 2:
    printf("Enter the deposit amount\n");
    scanf("%f",&amount);
    if (amount >0)
    {
        deposit(amount);//calling the user defined function
    }
    else
        {
        printf("Invalid deposit amount\n");
    }
    break;




case 3:
     printf("Enter the withdrwal amount\n");
    scanf("%f",&amount);
    if (amount >0)
    {
        withdraw(amount);//calling the user defined function
    }
    else
        {
        printf("Invalid deposit amount\n");
    }
    break;




case 4:
    printf("Thank you for using for bank application 1.0\n");
    break;




default:
    printf("Invalid Choice.Please enter a valid option.\n");




}
}while(choice!=4);
}
