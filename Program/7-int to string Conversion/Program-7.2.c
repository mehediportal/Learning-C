// input data to store and print as a string

#include <stdio.h>

int main() {
    int a;
    float b;
    char store [20];

    printf("Enter a Interger Number: ");
    scanf(" %d", &a);
    printf("Enter a Float Number: ");
    scanf(" %f", &b);
    sprintf(store, "\nYour Given Integer Number is: %d\nYour Given Float Number is: %.1f", a, b);
    puts(store);
    return 0;
}