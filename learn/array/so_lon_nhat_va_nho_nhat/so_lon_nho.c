#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int find_max(int a[], int n) {
    int kq_max = a[0]; // a phần tử ban đầu lớn nhất = 0
    for (int i = 1; i < n; i++) {
        if (a[i] > kq_max)
            kq_max = a[i];
    }
    return kq_max;
}

int find_min(int a[], int n) {
    int kq_min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < kq_min)
            kq_min = a[i];
    }
    return kq_min;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    printf("Max: %d\n", find_max(a, n));
    printf("Min: %d", find_min(a, n));

    return 0;
}
