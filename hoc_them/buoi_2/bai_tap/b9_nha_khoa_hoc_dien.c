#include <math.h>
#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    double minute_angle = m * 6;
    double hour_angle = h * 30 + m * 0.5;
    double angle = fabs(hour_angle - minute_angle);
    angle = fmin(angle, 360 - angle);

    printf("%.2lf", angle);

    return 0;
}
