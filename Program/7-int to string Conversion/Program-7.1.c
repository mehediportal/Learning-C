//int to string Conversion in C

#include <stdio.h>

int main() {
    int a;
    float b;
    char my [20];
    b = 31.96;
    a = 651;

    sprintf(my, "H: %d,\nT: %1.2f", a, b);
    puts(my);
    return 0;
}