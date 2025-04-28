#include <stdio.h>

#define SO_MAY 50
#define DIEN_NANG_MOI_LAN 0.4
#define GIA_DIEN 750
int trangThai[SO_MAY];
int soLanSuDung[SO_MAY];

void khoiTao() {
    for (int i = 0; i < SO_MAY; i++) {
        trangThai[i] = 0;
        soLanSuDung[i] = 0;
    }
}

void dungMay(int soHieu) {
    if (soHieu < 1 || soHieu > SO_MAY) {
        printf("So hieu may khong hop le!\n");
        return;
    }
    int i = soHieu - 1;
    if (trangThai[i] == 0) {
        trangThai[i] = 1;
        soLanSuDung[i]++;
        printf("May %d da duoc cap cho ban.\n", soHieu);
    } else {
        printf("May %d dang duoc su dung. Vui long chon may khac.\n", soHieu);
    }
}

void roiMay(int soHieu) {
    if (soHieu < 1 || soHieu > SO_MAY) {
        printf("So hieu may khong hop le!\n");
        return;
    }
    int i = soHieu - 1;
    if (trangThai[i] == 1) {
        trangThai[i] = 0;
        printf("May %d da duoc tra lai.\n", soHieu);
    } else {
        printf("May %d dang o trang thai roi.\n", soHieu);
    }
}

void inTrangThai() {
    printf("\nTrang thai cac may:\n");
    for (int i = 0; i < SO_MAY; i++) {
        printf("May %2d: %s | So lan su dung: %d\n", i + 1,
               trangThai[i] == 1 ? "Dang su dung" : "Ranh", soLanSuDung[i]);
    }
}

double tinhTongDienNang() {
    int tongLan = 0;
    for (int i = 0; i < SO_MAY; i++) {
        tongLan += soLanSuDung[i];
    }
    return tongLan * DIEN_NANG_MOI_LAN;
}

void inChiPhiDien() {
    double dien = tinhTongDienNang();
    double chiPhi = dien * GIA_DIEN;
    printf("Tong dien nang: %.2f kWh\n", dien);
    printf("Tong chi phi: %.0f VND\n", chiPhi);
}

void mayNhieuVaItNhat() {
    int max = soLanSuDung[0], min = soLanSuDung[0];

    for (int i = 1; i < SO_MAY; i++) {
        if (soLanSuDung[i] > max)
            max = soLanSuDung[i];
        if (soLanSuDung[i] < min)
            min = soLanSuDung[i];
    }

    printf("\nMay dung NHIEU nhat (%d lan):\n", max);
    for (int i = 0; i < SO_MAY; i++) {
        if (soLanSuDung[i] == max)
            printf("May %d\n", i + 1);
    }

    printf("\nMay dung IT nhat (%d lan):\n", min);
    for (int i = 0; i < SO_MAY; i++) {
        if (soLanSuDung[i] == min)
            printf("May %d\n", i + 1);
    }
}

void menu() {
    printf("\n======= MENU =======\n");
    printf("1. Dung may\n");
    printf("2. Roi may\n");
    printf("3. In trang thai cac may\n");
    printf("4. In tong dien nang tieu thu\n");
    printf("5. In tong chi phi dien\n");
    printf("6. In may dung nhieu nhat va it nhat\n");
    printf("0. Thoat\n");
    printf("====================\n");
}

int main() {
    int chon, soHieu;
    khoiTao();

    do {
        menu();
        printf("Nhap lua chon: ");
        scanf("%d", &chon);

        switch (chon) {
        case 1:
            printf("Nhap so hieu may (1-50): ");
            scanf("%d", &soHieu);
            dungMay(soHieu);
            break;
        case 2:
            printf("Nhap so hieu may (1-50): ");
            scanf("%d", &soHieu);
            roiMay(soHieu);
            break;
        case 3:
            inTrangThai();
            break;
        case 4:
            printf("Tong dien nang tieu thu: %.2f kWh\n", tinhTongDienNang());
            break;
        case 5:
            inChiPhiDien();
            break;
        case 6:
            mayNhieuVaItNhat();
            break;
        case 0:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }

    } while (chon != 0);

    return 0;
}
