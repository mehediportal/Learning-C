#include<stdio.h>

int main(){
    int num1, num2;
    char s;
    printf("Enter your 1st Number: ");
    scanf("%d", &num1);
    printf("Type +, -, X, /: ");
    scanf(" %c", &s);
    printf("Enter your 2nd Number: ");
    scanf("%d", &num2);

    if(s=='+'){
        printf("The Result is: %d %c %d = %d", num1, s, num2, num1+num2);
    }
     else if(s=='-'){
        printf("The Result is: %d %c %d = %d", num1, s, num2, num1-num2);
    }   
    else if(s=='*'){
        printf("The Result is: %d %c %d = %d", num1, s, num2, num1*num2);
    }
    else if(s=='/'){
        printf("The Result is: %d %c %d = %d", num1, s, num2, num1/num2);
    }
    return 0;
}