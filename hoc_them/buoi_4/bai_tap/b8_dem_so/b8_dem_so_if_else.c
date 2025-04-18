#include <stdio.h>

int main() {
    unsigned long long n;

    do {
        scanf("%llu", &n);
    } while (n > 999999999999999ULL);  // tối đa 15 chữ số

    int count = 0;
    if (n == 0) {
        count = 1;
    } else if (n < 10ULL) count = 1;
    else if (n < 100ULL) count = 2;
    else if (n < 1000ULL) count = 3;
    else if (n < 10000ULL) count = 4;
    else if (n < 100000ULL) count = 5;
    else if (n < 1000000ULL) count = 6;
    else if (n < 10000000ULL) count = 7;
    else if (n < 100000000ULL) count = 8;
    else if (n < 1000000000ULL) count = 9;
    else if (n < 10000000000ULL) count = 10;
    else if (n < 100000000000ULL) count = 11;
    else if (n < 1000000000000ULL) count = 12;
    else if (n < 10000000000000ULL) count = 13;
    else if (n < 100000000000000ULL) count = 14;
    else count = 15;

    printf("%d", count);
    return 0;
}
