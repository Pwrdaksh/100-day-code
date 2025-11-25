#include <stdio.h>
int main() {
    int n, i;
    // read how many stars you want
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("*\n");
    }
    return 0;
}