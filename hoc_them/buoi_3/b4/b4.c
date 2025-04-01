#include <stdio.h>

int main() {
    double tuoi;
    scanf("%lf", &tuoi);
    if (tuoi <= 0)
        printf("Khong hop le");
    else if (tuoi > 150)
        printf("?");
    else if (tuoi <= 16 || tuoi < 18)
        printf("Thieu nien");
    else if (tuoi <= 18 || tuoi < 30)
        printf("Thanh nien");
    else if (tuoi <= 30 || tuoi < 45)
        printf("Trung nien");
    else
        printf("Gia");

    return 0;
}
