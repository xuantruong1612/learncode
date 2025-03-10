#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long giaithua = 1;
    if (n >= 0 && n <= 20) {
        for (int i = 1; i <= n; i++) {
            giaithua *= i;
        }
        printf("%lld", giaithua);
    } else {
        printf("Sai roi");
    }
    return 0;
}
