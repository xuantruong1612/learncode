#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

double tbc_pt_k_am(int a[], int n) {
    double tong = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            tong += a[i];
            count++;
        }
    }
    if (count == 0) {
        return 0;
    }
    return tong / count;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    printf("%.3lf", tbc_pt_k_am(a, n));
    return 0;
}
