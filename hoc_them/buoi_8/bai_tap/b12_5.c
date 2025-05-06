#include <math.h>
#include <stdio.h>

double tinhTrungBinh(double *mang, int kichThuoc) {
    double tong = 0.0;
    for (int i = 0; i < kichThuoc; i++) {
        tong += mang[i];
    }
    return tong / kichThuoc;
}

double *timPhanTuGanTrungBinh(double *mang, int kichThuoc) {
    if (kichThuoc == 0)
        return NULL;

    double trungBinh = tinhTrungBinh(mang, kichThuoc);
    double *phanTuGanNhat = &mang[0];
    double khoangCachMin = fabs(mang[0] - trungBinh);

    for (int i = 1; i < kichThuoc; i++) {
        double khoangCach = fabs(mang[i] - trungBinh);
        if (khoangCach < khoangCachMin) {
            khoangCachMin = khoangCach;
            phanTuGanNhat = &mang[i];
        }
    }

    return phanTuGanNhat;
}

void inMang(double *mang, int kichThuoc) {
    for (int i = 0; i < kichThuoc; i++) {
        printf("%.2lf ", mang[i]);
    }
    printf("\n");
}

int main() {
    int kichThuoc;
    scanf("%d", &kichThuoc);
    double mang[kichThuoc];
    for (int i = 0; i < kichThuoc; i++) {
        scanf("%lf", &mang[i]);
    }
    double *phanTuGanNhat = timPhanTuGanTrungBinh(mang, kichThuoc);
    inMang(mang, kichThuoc);

    printf("Phan tu gan gia tri trung binh nhat: %.2lf\n", *phanTuGanNhat);

    return 0;
}
