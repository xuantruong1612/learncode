#include <stdio.h>

int tbc3s (int a, int b, int x) {
    return 3 * x - a - b;
}

int main () {
    int a, b, x;
    scanf("%d%d%d", &a, &b, &x);
    int c = tbc3s(a, b, x);
    printf("%d", c);

    return 0;
}
