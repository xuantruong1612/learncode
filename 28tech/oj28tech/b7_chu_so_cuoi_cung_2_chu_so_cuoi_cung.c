#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);
    int chu_so_cuoi = n % 10;
    int hai_chu_so_cuoi = n % 100;

    printf("%d\n", chu_so_cuoi);
    printf("%d", hai_chu_so_cuoi);

    return 0;
}
