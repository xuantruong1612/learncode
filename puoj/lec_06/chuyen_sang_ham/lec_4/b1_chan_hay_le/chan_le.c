#include <stdio.h>

#define ll long long

ll chan_hay_le(ll n) {
    if (n % 2 == 0)
        printf("CHAN");

    else
        printf("LE");
}

int main() {
    ll n;
    scanf("%lld", &n);
    chan_hay_le(n);
}
