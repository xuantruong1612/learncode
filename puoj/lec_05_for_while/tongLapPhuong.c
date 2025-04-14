// Tổng lập phương

#include <stdio.h>

int main() {
    int n;
    long long count = 0;
    scanf("%lld", &n);
    for (long long i = 1; i <= n; i++) {
        count += i * i * i;
    }
    printf("%lld\n", count);

    return 0;
}
