#include <stdio.h>

int main () {
//    float a = 6.0, b = 5.0;
    int a = 6.0, b = 5.0;
    float x = (float) a/b;
    float x1 = (float) (a/b);
//    printf("%f", a/b);
    printf("%f", x);
    printf("\n%f", x1);
    return 0;
}

