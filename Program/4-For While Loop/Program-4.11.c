//Factorial of a any input number.
#include <stdio.h>

int main() {
    int a, i, fac;
    printf("Please Enter a Factorial Number: ");
    scanf("%d", &a);
    fac = 1;
    for(i=1; i<=a; i++){
        fac = fac * i;
    }
        printf("\n%d Factorial is: %d", a, fac);
    return 0;
}