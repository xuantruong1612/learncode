#include <stdio.h>

int main () {
    long long n, sum = 0;
    scanf("%lld", &n);
    
    for(int i = 1; i <= n; i++){
        sum += i*i*i;
    }
    printf("%lld", sum);
    return 0;
}
