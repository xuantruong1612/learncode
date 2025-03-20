#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

double trung_binh_cong(int a[], int n) {
    double kq = 0;
    for (int i = 0; i < n; i++) {
        kq += a[i];
    }
    return kq / n;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    printf("%.3lf", trung_binh_cong(a, n));

    return 0;
}
