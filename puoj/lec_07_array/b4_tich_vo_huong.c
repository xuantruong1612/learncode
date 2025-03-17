// Tích vô hướng x * y

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x[n], y[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    int tich_vo_huong = 0;
    for (int i = 0; i < n; i++) {
        tich_vo_huong += x[i] * y[i];
    }

    printf("%d\n", tich_vo_huong);
    return 0;
}
