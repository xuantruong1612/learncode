#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

double tbc_pt_k_am(int a[], int n) {
    double ptu_k_am = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            tu_k_am += a[i];
            count++;
        }
    }
    if (count == 0) {
        return 0;
    }
    return tu_k_am / count;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    input(a, n);

    printf("%.3lf", tbc_pt_k_am(a, n));
    return 0;
}
