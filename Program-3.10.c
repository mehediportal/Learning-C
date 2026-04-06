#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (c>='a' && c<='z'){
        printf("%c is lower case letter.", c);
    }
    else if(c>='A' && c<='Z'){
        printf("%c is Upper case letter.", c);
    }
    return 0;
}