#include <stdio.h>

#define ll long long

ll pheptinh (ll a, ll b, ll c) {
    return (a - b) * c;
}

int main () {
    ll a, b, c;
    scanf ("%lld%lld%lld", &a, &b, &c);
    ll tinh = pheptinh(a, b, c);
    printf ("%lld", tinh);
}

