#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct danhBa {
    char ten[30], diaChi[100], sdt[11];
};

void nhap(struct danhBa *db) {
    // getchar();

    printf("Nhap ten: ");
    fgets(db->ten, sizeof(db->ten), stdin);
    db->ten[strcspn(db->ten, "\n")] = '\0';

    printf("Nhap dia chi: ");
    fgets(db->diaChi, sizeof(db->diaChi), stdin);
    db->diaChi[strcspn(db->diaChi, "\n")] = '\0';

    printf("Nhap so dien thoai: ");
    fgets(db->sdt, sizeof(db->sdt), stdin);
    db->sdt[strcspn(db->sdt, "\n")] = '\0';
}

void in(struct danhBa db) {
    printf("\nTen: %s", db.ten);
    printf("\nDia chi: %s", db.diaChi);
    printf("\nsdt: %s", db.sdt);
}

void tim_sdt(struct danhBa db[], int n) {
    char dt[11];
    printf("nhap so dien thoai can tim: ");
    scanf("%s", dt);
    bool timThay = false;
    for (int i = 0; i < n; i++) {
        if (strstr(db[i].sdt, dt) != NULL) {
            in(db[i]);
            timThay = true;
        }
    }
    if (!timThay)
        printf("Khong tim thay so dien thoai");

    // tim dia chi
    char quan[100];
    printf("\nNhap quan: ");
    scanf("%s", quan);
    for (int i = 0; i < n; i++) {
        if (strstr(db[i].diaChi, quan) != NULL) {
            in(db[i]);
            timThay = true;
        }
    }
    if (!timThay)
        printf("Khong ton tai");
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    struct danhBa db[100];
    for (int i = 0; i < n; i++) {
        nhap(&db[i]);
    }
    tim_sdt(db, n);
}
