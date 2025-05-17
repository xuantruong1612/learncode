#include <stdio.h>

int main() {
    int x;
    long long y;
    char c;
    float f;
    double d;

    scanf("%d%lld %c%f%lf", &x, &y, &c, &f, &d);
    printf("%d\n%lld\n%c\n%.2f\n%.9lf", x, y, c, f, d);

    return 0;
}
