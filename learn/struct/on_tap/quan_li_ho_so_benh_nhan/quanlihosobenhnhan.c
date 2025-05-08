#include <ctype.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char maBN[7];
    char TenBN[30];
    int tuoiBN;
    char nhomMau[5];
    char benh[50];
} benhNhan;

int maHopLe(char ma[]) {
    if (strlen(ma) != 6)
        return 0;
    for (int i = 0; i < 6; i++) {
        if (!isalnum(ma[i]))
            return 0;
    }
    return 1;
}

void nhap(benhNhan bn[], int *n) {
    for (int i = 0; i < *n; i++) {
        while(1) {
            printf("nhap ma benh nhan: ");
            fgets(bn[i].maBN, sizeof(bn[i].maBN), stdin);
            bn[i].maBN[strcspn(bn[i].maBN, "\n")] = '\0';
            if (maHopLe(bn[i].maBN))
                break;
            printf("       sai\n");
        }

        printf("nhap ten benh nhan: ");
        fgets(bn[i].TenBN, sizeof(bn[i].TenBN), stdin);

        printf("nhap tuoi benh nhan: ");
        scanf("%d", &bn[i].tuoiBN);

        getchar();
        printf("nhap nhom mau: ");
        fgets(bn[i].nhomMau, sizeof(bn[i].nhomMau), stdin);
        bn[i].nhomMau[strcspn(bn[i].nhomMau, "\n")] = '\0';

        printf("nhap benh ly: ");
        fgets(bn[i].benh, sizeof(bn[i].benh), stdin);
    }
}

void in(benhNhan *bn, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n%s\n%d\n%s\n%s", bn[i].maBN, bn[i].TenBN, bn[i].tuoiBN,
               bn[i].nhomMau, bn[i].benh);
    }
}

int main() {
    int n;
    printf("nhap so benh nhan: ");
    scanf("%d", &n);
    getchar();
    benhNhan bn[1000];

    nhap(bn, &n);
    in(bn, n);
    return 0;
}
