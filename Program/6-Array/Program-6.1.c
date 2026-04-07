#include <stdio.h>

int main() {
    unsigned a[10]={59, 69, 62, 61, 68};
    printf("\n %d", a[2]);
    printf("\n --------------0----------------\n");
    a[0] = a[1] + a[3];
    printf("The summation is: %d", a[0]);
    return 0;
}