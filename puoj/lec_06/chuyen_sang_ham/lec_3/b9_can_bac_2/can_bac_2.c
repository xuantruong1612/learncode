#include <stdio.h>
#include <math.h>

#define ll double

ll canbac2 (int n) {
    return sqrt(n);
}

int main () {
    ll n;
    scanf ("%lf", &n);
    ll kq = canbac2(n);
    printf ("%.3lf", kq);

    return 0;
}
