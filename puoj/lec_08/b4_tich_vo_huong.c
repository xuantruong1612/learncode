#include <stdio.h>
#define ll long long
 
int main() {
    ll n;
    scanf("%lld", &n);

    ll x[1000], y[1000], tich_vo_huong = 0;

    // vector x
    for (int i = 0; i < n; i++) {
        scanf("%lld", &x[i]);
    }

    // vector y
    for (int i = 0; i < n; i++) {
        scanf("%lld", &y[i]);
    }
  
    for (int i = 0; i < n; i++) {
        tich_vo_huong += x[i] * y[i];
    }

    printf("%lld\n", tich_vo_huong);
    
    return 0;
}
