#include <stdio.h>

#define ll long long

ll nho_va_lon_nhat (ll a, ll b, ll c){
    if(a >= b && a >= c){
        if (b >= c){
            printf("%lld %lld", c, a);
        }
        else {
            printf("%lld %lld", b, a);
        }
    }
    else if (b >= c){
        if (a >= c){
            printf("%lld %lld", c, b);
        }
        else {
            printf("%lld %lld", a, b);
        }
    }
    else{
        if(a >= b){
            printf("%lld %lld", b, c);
        }
        else {
            printf("%lld %lld", a, c);
        }
    }
}

int main () {
    ll a, b, c;
    scanf ("%lld%lld%lld", &a, &b, &c);
    nho_va_lon_nhat(a, b, c);

    return 0;
}
