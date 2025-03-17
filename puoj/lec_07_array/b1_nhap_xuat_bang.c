// Nhập xuất mảng

#include <stdio.h>

void nhap_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void in_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap_mang(a, n);
    in_mang(a, n);
}
