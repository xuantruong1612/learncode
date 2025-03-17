#include <stdio.h>

void nhap_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void in_mang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap_mang(a, n);
    in_mang(a, n);
}
