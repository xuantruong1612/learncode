#include <stdio.h>

void in(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int so_lon_nhat_cua_x(int a[], int n, int x) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
            dem++;
        }
    }
    printf("%d", dem);
}

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    int a[n];
    in(a, n);
    so_lon_nhat_cua_x(a, n, x);
}
