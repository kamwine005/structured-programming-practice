#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mortgage, term, rate;
    float interest, total, monthly_payment;
    int customer= 1;
     while (customer<=3)
     {
         printf("Enter mortgage amount:");
         scanf("%f", &mortgage);
        printf("Enter mortgage term (years):");
        scanf("%f",&term);
        printf("Enter interest rate(%%):");
        scanf("%f", &rate);
        interest = (mortgage * rate * term) /100;
        total = mortgage + interest;
        monthly_payment = total /( term * 12);
         printf("total interest payable = %.2f\n",interest);
         printf("total amount payable = %.2f\n",total);
         printf("Required monthly payment = %.2f\n",monthly_payment);

         customer++;
     }
    return 0;
}
