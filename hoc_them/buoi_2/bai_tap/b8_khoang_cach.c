#include <math.h>
#include <stdio.h>

int main() {
    int x, y, x1, y1;
    scanf("%d%d%d%d", &x, &y, &x1, &y1);
    double khoang_cach = sqrt((x1 - x) * (x1 - x) + 
                              (y1 - y) * (y1 - y));
    printf("%.2lf", khoang_cach);

    return 0;
}
