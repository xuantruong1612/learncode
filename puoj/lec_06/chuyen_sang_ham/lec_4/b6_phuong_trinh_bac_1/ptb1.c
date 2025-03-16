#include <stdio.h>

#define d double

d ptb1(d a, d b) {
    if (a == 0 && b == 0)
        printf("vo so nghiem");
    else if (a == 0 && b != 0)
        printf("vo nghiem");
    else
        printf("%.3lf", -b / a);
}

int main() {
    d a, b;
    scanf("%lf%lf", &a, &b);
    ptb1(a, b);

    return 0;
}
