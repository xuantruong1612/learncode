#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct danhBa {
    char ten[50], diaChi[100], sdt[11];
};

void nhap(struct danhBa *db) {
    printf("nhap ten: ");
    fgets(db->ten, sizeof(db->ten), stdin);
    db->ten[strcspn(db->ten, "\n")] = '\0';

    printf("nhap dia chi: ");
    fgets(db->diaChi, sizeof(db->diaChi), stdin);
    db->diaChi[strcspn(db->diaChi, "\n")] = '\0';

    printf("nhap so dien thoai: ");
    fgets(db->sdt, sizeof(db->sdt), stdin);
    db->sdt[strcspn(db->sdt, "\n")] = '\0';
}

void in(struct danhBa db) {
    printf("\nTen: %s", db.ten);
    printf("\nDia chi: %s", db.diaChi);
    printf("\nSo dien thoai: %s", db.sdt);
}

void findSdt(struct danhBa db[], int n) {
    char dt[11];
    bool timThay = false;
    printf("nhap sdt can tim: ");
    scanf("%s", dt);
    for (int i = 0; i < n; i++) {
        if (strstr(db[i].sdt, dt) != NULL) {
            in(db[i]);
            timThay = true;
        }
    }
    if (timThay == false)
        printf("Khong tim thay sdt trong danh ba\n");
}

void inDsTheoQuan(struct danhBa db[], int n) {
    char tenQuan[100];
    printf("nhap quan can tim: ");
    bool timThay = false;
    scanf("%s", tenQuan);
    for (int i = 0; i < n; i++) {
        if (strstr(db[i].diaChi, tenQuan) != NULL) {
            in(db[i]);
            timThay = true;
        }
    }
    if (timThay == false)
    printf("Khong ton tai\n");
}

void inDs(struct danhBa db[], int n) {
    for (int i = 0; i < n; i++) {
        in(db[i]);
    }
}

int main() {
    int n;
    struct danhBa db[100];
    while (1) {
        printf("\n1. Nhap thong tin");
        printf("\n2. In thong tin");
        printf("\n3. Tim kiem theo sdt");
        printf("\n4. In danh sach theo quan");
        printf("\n0. Thoat");

        int luaChon;
        printf("\nNhap lua chon cua ban (0 - 2): ");
        scanf("%d", &luaChon);
        if (luaChon == 1) {
            printf("Nhap so luong danh ba: ");
            scanf("%d", &n);
            getchar();
            for (int i = 0; i < n; i++) {
                nhap(&db[i]);
            }
        } else if (luaChon == 2) {
            inDs(db, n);
        } else if (luaChon == 3) {
            findSdt(db, n);
        } else if (luaChon == 4) {
            inDsTheoQuan(db, n);
        } else {
            break;
        }
    }

    return 0;
}
