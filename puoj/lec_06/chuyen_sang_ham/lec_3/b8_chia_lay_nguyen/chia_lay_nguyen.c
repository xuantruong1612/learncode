#include <stdio.h>

#define ll long long

ll chia_lay_nguyen (ll n, ll m){
    return n / m;
}

int main () {
    ll n, m;
    scanf ("%lld%lld", &n, &m);
    ll tinh = chia_lay_nguyen (n, m);
    printf ("%lld", tinh);

    return 0;
}
