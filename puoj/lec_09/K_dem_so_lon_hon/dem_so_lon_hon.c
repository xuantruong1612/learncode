#include <stdio.h>

void in(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int phan_tu_lon_x(int a[], int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            dem++;
        }
    }
    return dem;
}

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    in(a, n);
    printf("%d ", phan_tu_lon_x(a, n, x));

    return 0;
}
