#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long a, b;
    for (long long i = 0; i < n; i++) {
        scanf("%lld%lld", &a, &b);
        printf("%lld", a + b);
    }

    return 0;
}
