#include <stdio.h>

int HANG = 5;
int COT = 3;
int traiTim[5][3];

void inTrangThai() {
    printf("\nTrang thai trai tim:\n");
    for (int i = 0; i < HANG; i++) {
        for (int j = 0; j < COT; j++) {
            printf("%d ", traiTim[i][j]);
        }
        printf("\n");
    }
}

void daoHang(int h) {
    if (h < 0 || h >= HANG) {
        printf("So hang khong hop le!\n");
        return;
    }
    for (int j = 0; j < COT; j++) {
        traiTim[h][j] = traiTim[h][j] == 0 ? 1 : 0;
    }
    printf("Da dao trang thai hang %d.\n", h);
}

void daoCot(int c) {
    if (c < 0 || c >= COT) {
        printf("So cot khong hop le!\n");
        return;
    }
    for (int i = 0; i < HANG; i++) {
        traiTim[i][c] = traiTim[i][c] == 0 ? 1 : 0;
    }
    printf("Da dao trang thai cot %d.\n", c);
}

void daoDiem(int i, int j) {
    if (i < 0 || i >= HANG || j < 0 || j >= COT) {
        printf("Toa do khong hop le!\n");
        return;
    }
    traiTim[i][j] = traiTim[i][j] == 0 ? 1 : 0;
    printf("Da dao trang thai diem (%d,%d).\n", i, j);
}

int tinhTongNangLuong() {
    int tong = 0;
    for (int i = 0; i < HANG; i++) {
        for (int j = 0; j < COT; j++) {
            if (traiTim[i][j] == 1) {
                if (i % 2 == 1 && j % 2 == 1)
                    tong += 10;
                else if (i % 2 == 0 && j % 2 == 0)
                    tong += 20;
                else
                    tong += 15;
            }
        }
    }
    return tong;
}

void menu() {
    printf("\n========= MENU =========\n");
    printf("1. Dao trang thai theo hang\n");
    printf("2. Dao trang thai theo cot\n");
    printf("3. Dao trang thai tai mot diem\n");
    printf("4. Xem tong nang luong cam xuc\n");
    printf("0. Thoat\n");
    printf("========================\n");
}

int main() {
    int luaChon, hang, cot;

    // Khởi tạo ma trận traiTim với tất cả các giá trị là 0
    for (int i = 0; i < HANG; i++) {
        for (int j = 0; j < COT; j++) {
            traiTim[i][j] = 0;
        }
    }

    do {
        menu();
        inTrangThai();
        printf("Nhap lua chon: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
        case 1:
            printf("Nhap so hang (0 - %d): ", HANG - 1);
            scanf("%d", &hang);
            daoHang(hang);
            break;
        case 2:
            printf("Nhap so cot (0 - %d): ", COT - 1);
            scanf("%d", &cot);
            daoCot(cot);
            break;
        case 3:
            printf("Nhap toa do (hang cot): ");
            scanf("%d %d", &hang, &cot);
            daoDiem(hang, cot);
            break;
        case 4:
            printf("Tong nang luong cam xuc: %d W\n", tinhTongNangLuong());
            break;
        case 0:
            printf("Tam biet trai tim lap lanh...\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (luaChon != 0);

    return 0;
}
