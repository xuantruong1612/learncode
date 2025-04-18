#include <stdio.h>
#include <string.h>

struct sinhVien {
    char hoTen[100];
    int namSinh;
    double diemTB;
};

struct sinhVien nhapThongTin() {
    struct sinhVien sv;
    printf("Nhap ho ten: ");
    fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
    sv.hoTen[strcspn(sv.hoTen, "\n")] = '\0';
    printf("Nhap nam sinh: ");
    scanf("%d", &sv.namSinh);
    printf("Nhap diem TB: ");
    scanf("%lf", &sv.diemTB);
    return sv;
}

void inThongTin (struct sinhVien sv){
    printf("%s\n", sv.hoTen);
    printf("%d\n", sv.namSinh);
    printf("%.3lf", sv.diemTB);
}

int main() {
    struct sinhVien sv1;
    sv1 = nhapThongTin();
    inThongTin(sv1);
}
