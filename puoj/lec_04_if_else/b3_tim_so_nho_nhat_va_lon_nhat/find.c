#include <stdio.h>

int main() {
    long long a, b, c;
    scanf("%lld%lld%lld", &a, &b, &c);

    if (a >= b && b >= c)
        printf("%lld %lld", c, a);

    else if (a >= c && c >= b)
        printf("%lld %lld", b, a);

    else if (b >= a && a >= c)
        printf("%lld %lld", c, b);

    else if (b >= c && c >= a)
        printf("%lld %lld", a, b);

    else if (c >= a && a >= b)
        printf("%lld %lld", b, c);

    else if (c >= b && b >= a)
        printf("%lld %lld", a, c);

    else
        printf("%lld %lld", a, c);
}
