include <stdio.h>
#include <stdlib.h>

int main()
{ int number;

 printf("Enter a number\n");
 scanf("%d", &number);
 if(number % 2 == 0){
    printf("%d is even.\n", number);
 }
 else{
    printf("%d is odd.\n", number);
 }
    return 0;
}
