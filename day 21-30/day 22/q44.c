#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1, d = 1; i <= n; i++, d += 2) {
        sum += 1.0 / d;
    }

    printf("Sum of series = %.4f\n", sum);
    return 0;
}
