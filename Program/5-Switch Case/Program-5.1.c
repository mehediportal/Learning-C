//Case function to make a calculator 
#include <stdio.h>

int main() {
    int num1, num2, total;
    char op;
    printf("\n\nEnter your 1st Number: ");
    scanf("%d", &num1);
    printf("Enter Operands (+ - * /): ");
    scanf( " %c", &op);
    printf("Enter your 2nd Number: ");
    scanf("%d", &num2);

    switch(op){
        case '+':
        total = num1 + num2;
        printf("Result is: %d %c %d = %d", num1, op, num2, total);
        break;

        case '-':
        total = num1 - num2;
        printf("Result is: %d %c %d = %d", num1, op, num2, total);
        break;
        
        case '*':
        total = num1 * num2;
        printf("Result is: %d %c %d = %d", num1, op, num2, total);
        break; 
        
        case '/':
        total = num1 / num2;
        printf("Result is: %d %c %d = %g", num1, op, num2, total);
        break;
        
        default: 
        printf("\n Wrong Operands! Please Enter again right Operands.");
        break;
    }
    return 0;
}