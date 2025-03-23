#include <math.h>
#include <stdio.h>
int main() {
    printf("ptb2 ax2 * bx * c = 0\n");
    float a, b, c, denta;
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("vo so nghiem");
            else
                printf("vo nghiem");
        } else
            printf("co nghiem duy nhat la: %.1f", -c / b);
    } else {
        denta = b * b - 4 * a * c;
        if (denta < 0)
            printf("vo no");
        else if (denta == 0)
            printf("no kep %f", -b / (2 * a));
        else
            printf("co 2 nghiem %.1f, %.1f", (-b + sqrt(denta)) / (2 * a),
                   (-b - sqrt(denta)) / (2 * a));
    }
    return 0;
}
