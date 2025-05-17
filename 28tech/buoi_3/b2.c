#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += i * i;
    }
    printf("%d", sum);
    return 0;
}
