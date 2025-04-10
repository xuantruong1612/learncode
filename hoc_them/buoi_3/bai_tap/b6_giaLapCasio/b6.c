#include <stdio.h>

int main() {
    int pt;
    double a, b;

    //    while (1) {
    printf("CHUONG TRINH MAY TINH DIEN TU\n");
    printf("An phim 1- phep cong\nAn phim 2- phep tru\n");
    printf("An phim 3- phep nhan\nAn phim 4- phep chia\n");
    printf("THOAT: an phim khac\nMoi ban chon phep tinh:");
    scanf("%d", &pt);
    if (pt < 1 || pt > 4) {
        printf("-1");
        //           break;
    }

    scanf("%lf%lf", &a, &b);
    if (pt == 1)
        printf("%.2lf", a + b);
    else if (pt == 2)
        printf("%.2lf", a - b);
    else if (pt == 3)
        printf("%.2lf", a * b);
    else if (pt == 4) {
        if (b == 0)
            printf("Loi chia 0");
        else
            printf("%.2lf", a / b);
    }
    //}
    return 0;
}
