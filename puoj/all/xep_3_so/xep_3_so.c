#include <stdio.h>

#define ll long long

int main() {
    ll a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a >= b && a >= c) {
        if (b >= c)
            printf("%lld %lld %lld\n", c, b, a);
        else
            printf("%lld %lld %lld\n", b, c, a);
    } else if (b >= a && b >= c) {
        if (a >= c)
            printf("%lld %lld %lld\n", c, a, b);
        else
            printf("%lld %lld %lld\n", a, c, b);
    } else {
        if (a >= b)
            printf("%lld %lld %lld\n", b, a, c);
        else
            printf("%lld %lld %lld\n", a, b, c);
    }

    return 0;
}
