// Hàm giai thừa (đệ quy)

#include <stdio.h>

long long  giaithua(int n){
    if (n == 0){
        return 1;
    }
    else {
        return giaithua (n - 1) * n;
    }
}

int main () {
    int n;
    scanf("%d", &n);
    long long gt = giaithua(n);
    printf("%d! = %lld", n, gt);
    return 0;
}
