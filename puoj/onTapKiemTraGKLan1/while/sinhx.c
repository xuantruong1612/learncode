#include <stdio.h>
#include <math.h>

// Hàm tính giai thừa
double factorial(int n) {
    double res = 1;
    int i = 1;
    while (i <= n) {
        res *= i;
        i++;
    }
    return res;
}

int main() {
    double x, epsilon;
    scanf("%lf %lf", &x, &epsilon);

    int n = 0;
    double term = x; // term đầu tiên
    double sinhx = term;

    while (1) {
        int power = 2 * n + 3;
        double next_term = pow(x, power) / factorial(power);

        if (fabs(next_term) < epsilon) break;

        sinhx += next_term;
        n++;
    }

    printf("%d\n", n);
    printf("%.6f\n", sinhx);

    return 0;
}
