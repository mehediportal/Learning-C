#include<stdio.h>

int main(){
    int a, n, i, sum;
    printf("Enter Multificaiton Table form 0 to : ");
    scanf(" %d", &a);
    for(n=1; n<=a; n++){
        sum = 0;
        printf("Multificaiton Table of %d\n", n);
        for(i = 1; i<=10; i++){
            sum = sum + n;
            printf("%d X %d = %d\n", n, i, sum);
            if(i==10){
                printf("\n");
            }
        }
    }
}