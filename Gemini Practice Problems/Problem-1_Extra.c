//ইউজার একটি নাম্বার N ইনপুট দিবে। ১ থেকে N পর্যন্ত যতগুলো বেজোড় (Odd) সংখ্যা আছে, তাদের যোগফল বের করো?

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(i%2 !=0){
            sum = sum + i;
        }
    }
    printf("Odd value is from 1 to %d: %d ", n, sum);
    return 0;
}