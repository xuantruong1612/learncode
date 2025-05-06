#include <stdio.h>

void nhap(int n, int mssv[], int diem[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &mssv[i], &diem[i]);
    }
}

void tim(int n, int diem[], int mssv[], int diemcantim) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (diemcantim <= diem[i]) {
            count++;
        }
    }
    printf("Tong so sinh vien tham du ky thi cuoi ky: %d\n", count);
    for (int i = 0; i < n; i++) {
        if (diemcantim <= diem[i]) {
            printf("%d %d\n", mssv[i], diem[i]);
        }
    }
}

int main() {
    int n, diemcantim;
    scanf("%d%d", &n, &diemcantim);
    int diem[101];
    int mssv[101];
    nhap(n, mssv, diem);
    tim(n, diem, mssv, diemcantim);

    return 0;
}
