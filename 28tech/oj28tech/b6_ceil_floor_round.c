#include <math.h>
#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    printf("%d\n", (int)floor(n));
    printf("%d\n", (int)(ceil(n)));
    printf("%d", (int)round(n));

    return 0;
}
