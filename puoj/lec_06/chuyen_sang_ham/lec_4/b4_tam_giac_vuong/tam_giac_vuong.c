#include <stdio.h>

int tam_giac_vuong (int a, int b, int c) {
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        printf("YES");
    else 
        printf("NO");
}

int main () {
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    tam_giac_vuong(a, b, c);

    return 0;
}
