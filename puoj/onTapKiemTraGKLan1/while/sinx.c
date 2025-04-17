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

    double term = x; // hạng đầu tiên của chuỗi Taylor
    double sinx = term;
    int n = 0;

    while (1) {
        // Tính hạng tiếp theo: (-1)^n * x^(2n+1) / (2n+1)!
        int power = 2 * n + 3;
        double next_term = pow(-1, n + 1) * pow(x, power) / factorial(power);

        if (fabs(next_term) < epsilon) break;

        sinx += next_term;
        n++;
    }

    printf("%d\n", n);
    printf("%.6f\n", sinx);

    return 0;
}
