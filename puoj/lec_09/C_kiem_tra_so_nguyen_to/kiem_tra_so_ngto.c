#include <math.h>
#include <stdio.h>

int is_prime(long long x) {
    if (x < 2)
        return 0;
    if (x == 2 || x == 3)
        return 1;
    if (x % 2 == 0 || x % 3 == 0)
        return 0;

    for (long long i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main() {
    long long x;
    scanf("%lld", &x);

    if (is_prime(x)) {
        printf("co\n");
    } else {
        printf("khong\n");
    }

    return 0;
}
