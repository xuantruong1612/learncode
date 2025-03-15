#include <stdio.h>

#define ll long long

ll chia_lay_du (ll n, ll m) {
    return n % m;
}

int main () {
    ll n, m;
    scanf ("%lld%lld", &n, &m);
    ll mod = chia_lay_du (n, m);
    printf("%lld", mod);

    return 0;
}
