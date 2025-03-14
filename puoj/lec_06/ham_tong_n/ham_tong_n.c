// Hàm tổng n

#include <stdio.h>

long long tong(int n){
    long long sum = 0; 
        for (int i = 1; i <= n; i++){ 
        sum += i;
    }
    return sum;
}

int main () {
    int n;
    scanf("%d",&n);
    long long sum = tong(n);
    printf("%lld", sum);
    return 0;
}
