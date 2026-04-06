#include <stdio.h>

int main() {
    int i, m, n;
    m = 0;
    printf("Enter a Multiplication table Number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        m = m + n;
        printf("%d X %d = %d\n", n, i, m);
    }
    return 0;
}