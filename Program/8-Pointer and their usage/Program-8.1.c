#include <stdio.h>

int main() {
    int a;
    int *b;
    a = 232;
    b = &a;
    printf("%d",*b);
    return 0;
}