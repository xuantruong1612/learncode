#include <stdio.h>
#include <math.h>  // M_PI

int main () {
    double r;
    scanf ("%lf", &r);
    //double pi = 3.14;
    double chu_vi = 2 * M_PI * r;
    double dien_tich = M_PI * r * r;
    printf("%lf %lf", chu_vi, dien_tich);

    return 0;
}
