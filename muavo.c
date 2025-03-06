#include <stdio.h>

int main () {
    int a, b, x, y;
    scanf ("%d%d%d%d", &a, &b, &x, &y);
    int vo = a * x;
    int but = b * y;

    printf ("%d", vo + but);
    return 0;
}
