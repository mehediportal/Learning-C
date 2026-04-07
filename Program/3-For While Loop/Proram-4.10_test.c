#include <stdio.h>

int main() {
    int s, p, n, i, sum;
    printf("Enter Multification Table: ");
    scanf("%d", &s);
    for(n=1; n<=s; n++){
        p = 1;
        sum = 0;
        for(i=1; i<=10; i++){
            sum = sum + s;
            printf("%d X %d = %d\n", s, i, sum);
            if(i == 10){
                printf("\n");
            }
        }
    }
    return 0;
}