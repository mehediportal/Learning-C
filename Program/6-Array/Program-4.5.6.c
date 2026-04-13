// String

#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    printf("\nPlease Enter a text String: ");
    scanf("%s", &a);
    if(strcmp(a, "time") == 0){
        printf("\n You've Entered: Time.\n");
    }
    else if(strcmp(a, "Machine")==0){
        printf("\n You'v Entered: Machine.\n");
    }
    else if(strcmp(a, "Gun") ==  0){
        printf("\n You'v Entered: Gun\n");
    }
    else{
        printf("You'v Entered Something Else!");
    }
    return 0;
}