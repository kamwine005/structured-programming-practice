#include <stdio.h>
#include <stdlib.h>

int main()
{ int celsius;
float fahrenheit;
   printf("celsius(C)\tFahrenheit(F)\n");
   for (celsius = 30; celsius <= 50;celsius++){
    fahrenheit = (9.0/5.0) * celsius + 32;
    printf("%d\t%.2f\n",celsius,fahrenheit);
   }

    return 0;
}
