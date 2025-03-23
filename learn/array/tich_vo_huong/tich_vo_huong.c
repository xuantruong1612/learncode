#include <stdio.h>

int tich_vo_huong(int n, int x[], int y[]) {
    int tich = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }
    for (int i = 0; i < n; i++) {
        tich += x[i] * y[i];
    }
    return tich;
}

int main() {
    int n;
    scanf("%d", &n);
    int x[1000], y[1000];
    printf("%d", tich_vo_huong(n, x, y));

    return 0;
}
