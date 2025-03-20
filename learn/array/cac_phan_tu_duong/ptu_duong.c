#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int phan_tu_duong(int a[], int n) {
    int kq_duong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            kq_duong++;
    }

    if (kq_duong == 0) {
        printf("Day so khon co phan tu duong");
    } else {
        printf("%d\n", kq_duong);
        for (int i = 0; i < n; i++) {
            if (a[i] > 0)
                printf("%d ", a[i]);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);
    phan_tu_duong(a, n);
}
