// phương trình bậc 2

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("vo so nghiem\n");
            } else {
                printf("vo nghiem\n");
            }
        } else {
            printf("%.3f\n", -c / b);
        }
    } else {
        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            if (x1 > x2) {
                printf("%.3f %.3f\n", x1, x2);
            } else {
                printf("%.3f %.3f\n", x2, x1);
            }
        } else if (delta == 0) {
            printf("%.3f\n", -b / (2 * a));
        } else {
            printf("vo nghiem\n");
        }
    }

    return 0;
}
