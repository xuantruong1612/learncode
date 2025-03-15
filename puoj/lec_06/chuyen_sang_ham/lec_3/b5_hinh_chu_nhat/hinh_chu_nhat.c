#include <stdio.h>

#define ll long long

ll tinh_chu_vi (ll a, ll b) {
    return (a + b) * 2;
}

ll tinh_dien_tich (ll a, ll b){
    return a * b;
}

int main () {
    ll a, b;
    scanf ("%lld%lld", &a, &b);
    ll chu_vi = tinh_chu_vi (a, b);
    ll dien_tich = tinh_dien_tich (a, b);
    printf("%lld %lld\n", chu_vi, dien_tich);
}
