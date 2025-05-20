#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld%lld", &b, &a);

    printf("%lld\n", a / b);
    printf("%.2lf", (double)a / b);

    return 0;
}
