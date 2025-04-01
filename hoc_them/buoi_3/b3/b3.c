#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    if (n > 10)
        printf("Khong hop le");
    else if (n < 0)
        printf("Khong hop le");
    else if (n >= 9)
        printf("A+");
    else if (n >= 8.5)
        printf("A");
    else if (n >= 8.0)
        printf("B+");
    else if (n >= 7.0)
        printf("B");
    else if (n >= 6.5)
        printf("C+");
    else if (n >= 6)
        printf("C");
    else if (n >= 5.5)
        printf("D+");
    else if (n >= 4.0)
        printf("D");
    else
        printf("F");

    return 0;
}
