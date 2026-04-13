// input data to store array

#include <stdio.h>

int main() {
    unsigned int a[10];
    unsigned int i;
    printf("Enter a 5 input data one by one: \n");
    for(i=0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("The array you input is: {%d, %d, %d, %d, %d}", a[0], a[1], a[2], a[3], a[4]);
    return 0;
}