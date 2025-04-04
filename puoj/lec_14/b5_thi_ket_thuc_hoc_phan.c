// Thi ket thuc hoc phan

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int sinhvien_id, diem;
    int count = 0;
    int sinhVienDuDieuKien[n][2];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &sinhvien_id, &diem);
        if (diem >= m) {
            sinhVienDuDieuKien[count][0] = sinhvien_id;
            sinhVienDuDieuKien[count][1] = diem;
            count++;
        }
    }

    printf("Tong so sinh vien tham du ky thi cuoi ky: %d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", sinhVienDuDieuKien[i][0], sinhVienDuDieuKien[i][1]);
    }

    return 0;
}
