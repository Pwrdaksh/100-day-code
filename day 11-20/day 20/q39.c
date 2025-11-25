#include <stdio.h>

int main() {
    int n, digit;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(hasOdd)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found!\n");

    return 0;
}

