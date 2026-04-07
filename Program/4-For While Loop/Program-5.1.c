// x + y = input, x - y = input হলে x ও y এর মান কত?

#include <stdio.h>

int main() {
    double x, y, sum, sub;
    printf("Value of x + y = ");
    scanf(" %lf", &sum);
    printf("Value of x - y = ");
    scanf(" %lf", &sub);
    x = (sum + sub)/2;
    y = (sum - sub)/2;
    printf("\nOutput:\n\n");
    printf("Value of x is: %g\n", x);
    printf("Value of y is: %g", y);

    return 0;
}