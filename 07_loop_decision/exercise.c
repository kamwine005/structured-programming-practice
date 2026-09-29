#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acc,limit,balance,current_limit,customer=1;

    while(customer<=3)
    {
       printf("Enter account number:\n");
       scanf("%d", &acc);

       printf("Enter oldcreditlimit before recession:\n ");
       scanf("%d", &current_limit);

       printf("Enter balance:\n");
       scanf("%d", &balance);

       current_limit= limit / 2;

       printf(" the new credit limit =%d\n",current_limit);

       if (balance > current_limit)
       {
        printf("Balance exceeds current_limit\n\n");
       }else{

          printf("balance is within the current limit range\n\n");
        }
   ++customer;
}


    return 0;
}
