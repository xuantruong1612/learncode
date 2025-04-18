#include <stdio.h>

int main() {
    double epsilon;
    scanf("%lf", &epsilon);

    double e = 1.0;
    double term = 1.0;
    int n = 1;

    while (term >= epsilon) {
        term = term / n;
        e += term;
        n++;
    }

    printf("%.3lf", e);
    return 0;
}
