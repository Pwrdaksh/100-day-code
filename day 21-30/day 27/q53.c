#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n); // e.g. 5 for the example
    // top half
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) printf("*");
        printf("\n");
    }
    // bottom half
    for(i=n-1;i>=1;i--){
        for(j=1;j<=i;j++) printf("*");
        printf("\n");
    }
    return 0;
}
