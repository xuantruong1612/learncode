#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("-1");
        return 0;
    }

    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int GCD = x;

    int LCM = (a * b) / GCD;

    printf("%d %d", GCD, LCM);
    return 0;
}
