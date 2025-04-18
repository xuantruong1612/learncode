#include <stdio.h>
#include <math.h>

int main() {
    double x, epsilon;
    scanf("%lf %lf", &x, &epsilon);

    double term = x;
    double result = x;
    int n = 1;

    while (fabs(term) >= epsilon) {
        term *= -1 * x * x / ((2 * n) * (2 * n + 1));
        result += term;
        n++;
    }

    printf("%.3lf", result);
    return 0;
}
