#include <stdio.h>

int main() {
    long long binary, onesComp = 0;
    int place = 1, digit;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while(binary > 0) {
        digit = binary % 10;
        if(digit == 0) onesComp += 1 * place;
        else onesComp += 0 * place;
        place *= 10;
        binary /= 10;
    }

    printf("1's Complement = %lld\n", onesComp);
    return 0;
}
