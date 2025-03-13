// Tổng số chính phương

#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 1; i * i <= n; i++) {
        count++;
    }
    printf("%d\n", count);
    for (int i = 1; i * i <= n; i++) {
        printf("%d ", i * i);
    }

    return 0;
}
