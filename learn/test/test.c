// Các phần tử dương của mảng

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mang = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            mang++;
        }
    }

    if (mang == 0) {
        printf("Day so khong co phan tu duong");
    } else {
        printf("%d\n", mang);
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}
