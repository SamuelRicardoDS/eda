#include<stdio.h>

int main() {
    int n, sum, final;

    scanf("%d",&n);

    final = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &sum);
        final += sum;
    }

    printf("%d\n", final);

    return 0;
}