// Tính số e

#include <math.h>
#include <stdio.h>

int main() {
    int n = 0;
    long long giai_thua = 1;
    double epsilon;
    double e = 1;

    printf("Nhap so epsilon: ");
    scanf("%f", &epsilon);

    while (1.0 / giai_thua > epsilon) {
        n = n + 1;
        giai_thua = giai_thua * n;
        e = e + 1.0 / giai_thua;
    }

    printf("Gia tri so e la %lf: \n", e);
    printf("Gia tri so e thuc te %lf: ", exp(1));

    return 0;
}
