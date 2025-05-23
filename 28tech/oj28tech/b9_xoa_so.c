#include <stdio.h>

int main() {
    long long n;

    do {
        scanf("%lld", &n);
        if (n < 10000)
            printf("sai, nhap lai");
    } while (n < 10000);

    printf("%lld", n / 1000);
}
