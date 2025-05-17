#include <stdio.h>

int main() {
    int x, y, z, t;
    scanf("%d%d%d%d", &x, &y, &z, &t);
    printf("%d,%d,%d,%d\n", y, z, x, t);
    printf("%lld\n", (long long)x + (long long)y + (long long)z + (long long)t);
    printf("%lld", x - y + (long long)z * t);

    return 0;
}
