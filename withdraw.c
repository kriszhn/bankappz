

#include"main.h"
//Function to withdraw the money
void withdraw(float amount)
{
    if (amount <= balance)
    {
         balance=balance-amount;
         printf("withdrawn Rs %.2f from your account\n",amount);
    }
   else
    {
    printf("Insufficient money\n");
    }
}
