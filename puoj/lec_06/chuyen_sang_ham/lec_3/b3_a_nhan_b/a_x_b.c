#include <stdio.h>

int a_x_b (int a, int b) {
    return a*b;
}

int main () {
    int a, b;
    scanf ("%d%d", &a, &b);
    int tich = a_x_b (a, b);
    printf("%d", tich);

    return 0;
}
