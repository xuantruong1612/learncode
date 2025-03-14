#include <stdio.h>
#include <math.h>

int main () {
    int n = 0;
    long long giai_thua = 1;
    double eps;
    double e = 1;

    printf("Nhap so epsilon: ");
    scanf("%lf", &eps);

    while(1.0 / giai_thua > eps) {
        n = n + 1;
        giai_thua = giai_thua * n;
        e = e + 1.0 / giai_thua;
    }

    printf("Gia tri so e duoc tinh gan: %lf\n", e);
    printf("Gia tri so e thuc te: %lf\n", exp(1));

    return 0;
}
