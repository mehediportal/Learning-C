/* 
Problem: Scan an array of 10 numbers, let's call in 'main'
now the odd numbers of this array should be added to a new array
let's call is 'odd'
and even numbers to be added to another array, 'even'
*/

#include <stdio.h>

int main() {
    unsigned int main[10], even[10], odd[10];
    int i;
    int m = 0;
    int k = 0;
    printf("Enter 10 number one by one: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &main[i]); 
    }

    for(i=0; i<10; i++){
        if(main[i]%2 == 0){
            even[k] = main[i];
            k++;
        }
        else{
            odd[m]= main[i];
            m++;
        }
    }
   
    //for Main print
    printf("\nMain = {");
    for(i=0; i<10; i++){
       printf("%d",main[i]);
       if(i<9){
        printf(",");
       }
    }
    printf("}");

    //for Even
    printf("\nEven = {");
    for(i=0; i<k; i++){
       printf("%d",even[i]);
       if(i<k-1){
        printf(",");
       }
    }
    printf("}");

     //for Odd Print
    printf("\nOdd = {");
    for(i=0; i<m; i++){
       printf("%d",odd[i]);
       if(i<m-1){
        printf(",");
       }
    }
    printf("}");   

    return 0;
}