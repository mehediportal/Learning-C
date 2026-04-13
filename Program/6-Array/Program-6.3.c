/*
Problem: Scan 6 Numbers and store in an array and
then print the largest one out of them */

#include <stdio.h>

int main() {
    unsigned int a[6];
    unsigned int i;
    int largest;
    printf("Enter 6 number one by one: \n");
    for (i=0; i<6; i++)
    {
        scanf("%d", &a[i]);
    }
    largest = a[0];
    for(i=0; i<6; i++)
    {
        if(largest < a [i])
        {
            largest = a[i];
        }
    }
    printf("\nThe largest number is: %d", largest);
    return 0;
}