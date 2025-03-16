#include <math.h>
#include <stdio.h>

#define d double

void ptb2(d a, d b, d c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("vo so nghiem\n");
            } else {
                printf("vo nghiem\n");
            }
        } else {
            printf("%.3lf\n", -c / b);
        }
        return; // Kết thúc hàm nếu a = 0
    }

    d denta = b * b - 4 * a * c;

    if (denta < 0) {
        printf("vo nghiem\n");
    } else if (denta == 0) {
        printf("%.3lf\n", -b / (2 * a));
    } else {
        d x1 = (-b - sqrt(denta)) / (2 * a);
        d x2 = (-b + sqrt(denta)) / (2 * a);
        printf("%.3lf %.3lf\n", x1, x2);
    }
}

int main() {
    d a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    ptb2(a, b, c);
    return 0;
}
