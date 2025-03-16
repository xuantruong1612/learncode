#include <stdio.h>

void canh_tam_giac (int a, int b, int c) {
    if (a + b >= c && a + c >= b && c + b >= a)
        printf("YES");
    else 
        printf("NO");
}

int main () {
    int a, b, c;
    scanf ("%d%d%d", &a,&b,&c);
    canh_tam_giac(a, b, c);
    return 0;
}
