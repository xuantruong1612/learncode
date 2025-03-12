#include <stdio.h>

int main() {
    int R;
    double S, V;

    printf("Nhap ban kinh hinh trong: ");
    scanf("%d", &R);

    S = 4 * 3.14 * R * R;
    V = (4.0 / 3.0) * 3.14 * R * R * R;

    printf("Vay dien tich bang: %.2lf\n", S);
    printf("Vay the tich bang: %.2lf\n", V);

    return 0;
}
