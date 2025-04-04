#include <stdio.h>

int diem_thi_cuoi_ki(int sinhvien[], int diem[], int n, int mssv, int diemThi) {
    int i;
    for (i = n - 1; i >= 0; i--) {
        if (sinhvien[i] > mssv) {
            sinhvien[i + 1] = sinhvien[i];
            diem[i + 1] = diem[i];
        } else {
            break;
        }
    }

    sinhvien[i + 1] = mssv;
    diem[i + 1] = diemThi;
    return n + 1;
}

int main() {
    int n, mssv, diemThi;
    scanf("%d %d %d", &n, &mssv, &diemThi);
    int sinhvien[n + 1], diem[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &sinhvien[i], &diem[i]);
    }
    n = diem_thi_cuoi_ki(sinhvien, diem, n, mssv, diemThi);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", sinhvien[i], diem[i]);
    }

    return 0;
}
