#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long f1 = 1, f2 = 1, fi;

    if (n == 1 || n == 2) {
        printf("1\n");
        return 0;
    }

    if (n >= 1 && n <= 90) {
        for (int i = 3; i <= n; i++) {
            fi = f1 + f2;
            f2 = f1;
            fi = f2;
        }
    } else {
        printf("sai\n");
        return 0;
    }

    printf("%lld", fi);
    return 0;
}
