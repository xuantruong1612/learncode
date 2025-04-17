#include <stdio.h>

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int gt(int n) {
    int gth = 1;
    for (int i = 2; i <= n; i++) {
        gth *= i;
    }
    return gth;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", gt(a[i]));
    }
}
