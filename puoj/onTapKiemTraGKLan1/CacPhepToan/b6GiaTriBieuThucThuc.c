#include <stdio.h>
#include <math.h>

int main () {
    double x;
    scanf("%lf", &x);
    double result = x * x * sin(x * x - 1) - x*x*x * cos(x*x*x - x*x + 10) + x * tan(x*x + 1);
    printf("%.3lf", result);
}
