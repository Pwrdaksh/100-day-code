#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (2 * i - 1);
    }

    printf("Sum of series = %.4f\n", sum);
    return 0;
}
