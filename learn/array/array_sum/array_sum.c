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

int sum(int a[], int n) {
    int kq = 0;
    for (int i = 0; i < n; i++) {
        kq += a[i];
    }
    return kq;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap_mang(a, n);
    in_mang(a, n);
    int kq = sum (a, n);
    printf ("%d", kq);
}
