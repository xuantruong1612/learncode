#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double heron = (a + b + c) / 2;
    double S = sqrt(heron * (heron - a) * (heron - b) * (heron - c));
    printf("%.2lf", S);

    return 0;
}
