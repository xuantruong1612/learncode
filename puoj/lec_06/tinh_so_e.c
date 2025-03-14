// Tính số e

#include <stdio.h>
#include <math.h>

int main () {
    int n = 0;
    long long  gt = 1;
    double eps;
    double e = 1;

    printf ("Nhap so epsilon: ");
    scanf("%f", &eps);

    while(1.0/gt > eps){
        n = n + 1;
        gt = gt * n;
        e = e + 1.0 / gt;
    }

    printf("GIa tri so e la %lf: \n", e );
    printf("GIa tri so e thuc te %lf: ", exp(1) );
  
    return 0;
}
