#include <stdio.h>

#define ll long long

void in(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

ll giaithua(ll x) {
    if (x == 0) return 1;
    return x * giaithua(x - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    in(a, n);
    
    for (int i = 0; i < n; i++) {
        printf("%lld\n", giaithua(a[i]));
    }
    return 0;
}
