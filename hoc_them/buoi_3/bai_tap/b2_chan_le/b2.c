#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);

    if ((int)n != n)
        printf("NO EVEN, NO ODD");
    else {
        int m = (int)n;
        if (m % 2 == 0)
            printf("EVEN");
        else
            printf("ODD");
    }
    return 0;
}
