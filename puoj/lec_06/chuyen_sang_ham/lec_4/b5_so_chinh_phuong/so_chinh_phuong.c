#include <stdio.h>
#include <math.h>

long long so_chinh_phuong (long long n) {
    long long sqrt_n = (long long)sqrt(n); // ép kiểu về ll
    if (sqrt_n * sqrt_n == n){
        printf("YES");
    }
    else 
        printf("NO");
}

int main(){
    long long n;
    scanf ("%lld", &n);
    so_chinh_phuong(n);

    return 0;
}

