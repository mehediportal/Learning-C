#include <stdio.h>

int main() {
    char c;
    printf("Type any letter: ");
    scanf("%c", &c);
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        printf("%c is a Vowel letter\n", c);
    }
    else {
        printf("%c is Constant letter.", c);
    }
    return 0;
}