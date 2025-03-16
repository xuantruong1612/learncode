#include <stdio.h>

#define ll long long

ll xet_dau(ll a, ll b) {
    if (a * b > 0)
        printf("1");
    else if (a * b == 0)
        printf("0");
    else
        printf("-1");
}

int main() {
    ll a, b;
    scanf("%lld%lld", &a, &b);
    xet_dau(a, b);

    return 0;
}
