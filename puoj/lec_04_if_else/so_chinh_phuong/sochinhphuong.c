#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    long long sqrt_n = sqrt(n);
    
    if (sqrt_n * sqrt_n == n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
