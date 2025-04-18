#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    long long gt = 1;
    for (long long i = 1; i <= n; i++){
        gt *= i;
    }
    printf("%lld", gt);
}
