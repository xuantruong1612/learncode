#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[10];
    int soluong;
    char size[5];
    double giaban;
} sanpham;

// 2.a
void nhap(sanpham *sp, int n) {
    for (int i = 0; i < n; i++) {
        printf("nhap ten san pham thu %d: ", i + 1);
        fgets(sp[i].ten, sizeof(sp[i].ten), stdin);
        sp[i].ten[strcspn(sp[i].ten, "\n")] = '\0';

        printf("nhap so luong: ");
        scanf("%d", &sp[i].soluong);
        getchar();

        int s;
        do {
            printf("nhap size 1-S, 2-M, 3-L, 4-XL, 5-2XL: ");
            scanf("%d", &s);
            getchar();
            if (s < 1 || s > 5) {
                printf("khong co du lieu\n");
            }
        } while (s < 1 || s > 5);
        switch (s) {
        case 1:
            strcpy(sp[i].size, "S");
            break;
        case 2:
            strcpy(sp[i].size, "M");
            break;
        case 3:
            strcpy(sp[i].size, "L");
            break;
        case 4:
            strcpy(sp[i].size, "XL");
            break;
        case 5:
            strcpy(sp[i].size, "2XL");
            break;
        }
        printf("nhap gia ban: ");
        scanf("%lf", &sp[i].giaban);
        getchar();
    }
}

// 2.b
void in(sanpham *sp, int n) {
    printf("-----+---------------+----------+-----+----------+\n");
    printf("%-5s|%-15s|%-10s|%-5s|%-20s\n", "STT", "TEN SAN PHAM", "SO LUONG",
           "SIZE", "GIA BAN");
    printf("-----+---------------+----------+-----+----------+\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d|%-15s|%-10d|%-5s|%-20.2lf\n", i + 1, sp[i].ten,
               sp[i].soluong, sp[i].size, sp[i].giaban);
        printf("-----+---------------+----------+-----+----------+\n");
    }
}

// 2.c
double sapxep(sanpham *sp, int n) {
    double tongsotien = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sp[i].soluong < sp[j].soluong) {
                sanpham temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
        tongsotien += sp[i].soluong * sp[i].giaban;
    }
    printf("danh sach sau khi sap xep la: \n");
    in(sp, n);
    return tongsotien;
}

// 2.d
void loc(sanpham *sp, int n, double G1, double G2, char size[]) {
    int dem = 0;
    printf("--------------------------------------------------\n");
    printf("%-5s|%-15s|%-10s|%-5s|%-20s\n", "STT", "TEN SAN PHAM", "SO LUONG",
           "SIZE", "GIA BAN");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (sp[i].giaban >= G1 && sp[i].giaban <= G2 &&
            strcmp(sp[i].size, size) == 0) {
            printf("%-5d|%-15s|%-10d|%-5s|%-20.2lf\n", i + 1, sp[i].ten,
                   sp[i].soluong, sp[i].size, sp[i].giaban);
            printf("--------------------------------------------------\n");
            dem++;
        }
    }
    if (dem == 0)
        printf("Khong co san pham thoa man");
}

int main() {
    int n;
    printf("nhap so luong san pham: ");
    scanf("%d", &n);
    getchar();
    sanpham sp[1000];
    nhap(sp, n);
    in(sp, n);
    printf("\ntong so tien la: %.2lf\n", sapxep(sp, n));

    // 2.d
    double G1, G2;
    char size[4];
    int s;
    printf("moi nhap size:\n");
    do {
        printf("nhap size 1-S, 2-M, 3-L, 4-XL, 5-2XL: ");
        scanf("%d", &s);
        getchar();
        if (s < 1 || s > 5) {
            printf("khong co du lieu\n");
        }
    } while (s < 1 || s > 5);

    // 2.e
    printf("nhap gia cua G1: ");
    scanf("%lf", &G1);
    printf("nhap gia cua G2: ");
    scanf("%lf", &G2);

    switch (s) {
        case 1:
            strcpy(size, "S");
            break;
        case 2:
            strcpy(size, "M");
            break;
        case 3:
            strcpy(size, "L");
            break;
        case 4:
            strcpy(size, "XL");
            break;
        case 5:
            strcpy(size, "2XL");
            break;
    }
    loc(sp, n, G1, G2, size);
    return 0;
}
