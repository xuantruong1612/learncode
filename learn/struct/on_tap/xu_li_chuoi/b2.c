#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[10];
    int soluong;
    char size[3];
    double giaban;
} sanpham;

void nhap(sanpham *sp, int *n) {
    printf("nhap so danh sach: ");
    scanf("%d", n);
    getchar();
    for (int i = 0; i < *n; i++) {
        printf("nhap ten san pham: ");
        fgets(sp[i].ten, sizeof(sp[i].ten), stdin);
        sp[i].ten[strcspn(sp[i].ten, "\n")] = '\0';
        while (strlen(sp[i].ten) > 11) {
            printf("sai roi, nhap lai: ");
            fgets(sp[i].ten, sizeof(sp[i].ten), stdin);
            sp[i].ten[strcspn(sp[i].ten, "\n")] = '\0';
        }

        printf("nhap so luong: ");
        scanf("%d", &sp[i].soluong);
        getchar();

        int s;
        do {
            printf("nhap size 1-S, 2-M, 3-L, 4-XL, 5-2XL: ");
            scanf("%d", &s);
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

void in(sanpham *sp, int n) {
    printf("--------------------------------------------------\n");
    printf("%-5s|%-15s|%-10s|%-5s|%-20s\n", "STT", "TEN SAN PHAM", "SO LUONG",
           "SIZE", "GIA BAN");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-5d|%-15s|%-10d|%-5s|%-20.2lf\n", i + 1, sp[i].ten,
               sp[i].soluong, sp[i].size, sp[i].giaban);
        printf("--------------------------------------------------\n");
    }
}

double sapxep(sanpham *sp, int n) {
    double tongsotien = 0;
    printf("--------------------------------------------------\n");
    printf("%-5s|%-15s|%-10s|%-5s|%-20s\n", "STT", "TEN SAN PHAM", "SO LUONG",
           "SIZE", "GIA BAN");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sp[i].soluong < sp[j].soluong) {
                sanpham temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
        tongsotien += sp[i].giaban * sp[i].soluong;
    }
    printf("sau khi sap xep la: ");
    in(sp, n);
    return tongsotien;
}

void loc(double g1, double g2, char size[], sanpham *sp, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (sp[i].giaban >= g1 && sp[i].giaban <= g2 &&
            (strcmp(sp[i].size, size) == 0)) {
            printf("%-5d|%-15s|%-10d|%-5s|%-20.2lf\n", i + 1, sp[i].ten,
                   sp[i].soluong, sp[i].size, sp[i].giaban);
            printf("--------------------------------------------------\n");
            dem++;
        }
    }
    if (dem == 0)
        printf("khong co san pham");
}

int main() {
    int n;
    sanpham sp[1000];
    nhap(sp, &n);
    in(sp, n);
    printf("\ntong so tien la: %.2lf\n", sapxep(sp, n));
    double g1, g2;
    char size[4];
    printf("nhap gia g1: ");
    scanf("%lf", &g1);
    printf("nhap gia tri g2: ");
    scanf("%lf", &g2);
    int s;
    printf("moi nhap size:\n");
    do {
        printf("nhap size: ");
        scanf("%d", &s);
        if (s < 1 || s > 5) {
            printf("khong co du lieu");
        }
    } while (s < 1 || s > 5);
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
    loc(g1, g2, size, sp, n);
    return 0;
}
