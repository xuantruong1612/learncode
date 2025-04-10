#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a)
        printf("INVALID"); // khong phai tam giac
    else {
        if (a == b && b == c)
            printf("EQUILATERAL"); // tam giac deu
        else if (a * a + b * b == c * c || a * a + c * c == b * b ||
                 b * b + c * c == a * a)
            printf("RIGHT"); // tam giac vuong
        else if (a == b || a == c || b == c)
            printf("ISOSCELES");
        else
            printf("SCALENE");
    }
    return 0;
}
