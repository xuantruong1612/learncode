#include <stdio.h>

int tich_0_huong(int n, int x[], int y[]) {
    int tich_vo_huong = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    for (int i = 0; i < n; i++) {
        tich_vo_huong += x[i] * y[i];
    }

    printf("%d\n", tich_vo_huong);
    return tich_vo_huong;
}

int main() {
    int n;
    scanf("%d", &n);

    int x[1000], y[1000];
    tich_0_huong(n, x, y);

    return 0;
}
