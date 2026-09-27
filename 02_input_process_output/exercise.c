#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum,product,difference,quotient,remainder;

    printf("Enter the first integer:\n");
    scanf("%d", &num1);
    printf("Enter the second integer:\n");
    scanf("%d", &num2);
    sum= (num1 + num2);
    printf("sum = %d\n",sum);
    product=(num1 * num2);
    printf("product = %d\n",product);
    difference=(num1-num2);
    printf("difference = %d\n",difference);
    quotient= (num1/num2);
    printf("quotient = %d\n",quotient);
    remainder= num1 % num2;
    printf("remainder = %d",remainder);



    return 0;

