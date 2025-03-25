#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int duong(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("Day so khong co phan tu duong");
    } else {
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                printf("%d ", a[i]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);
    duong(a, n);
    return 0;
}
