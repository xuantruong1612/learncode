#include <math.h>
#include <stdio.h>

int so_nguyen_to(long long x) {
    if (x < 2)
        return 0;
    if (x == 2)
        return 1;
    if (x % 2 == 0)
        return 0;

    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    long long x;
    scanf("%lld", &x);

    if (so_nguyen_to(x))
        printf("co");
    else
        printf("khong");

    return 0;
}
