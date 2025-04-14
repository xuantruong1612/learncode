#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    double cosx = cos(x);
    double sinx = sin(x);
    double tanx = tan(x);

    printf("%.3f %.3f %.3f\n", cosx, sinx, tanx);

    return 0;
}
