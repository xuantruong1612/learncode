#include <stdio.h>
#include <string.h>

struct benhnhan {
    int maBN;
    char ten[100];
    char khoa[100];
    int soNgayNamVien;
    int chiPhi;
};

void nhap(FILE *fi, struct benhnhan *bn, int *n, char khoacantim[]) {
    fscanf(fi, "%d%s", n, khoacantim);
    for (int i = 0; i < *n; i++) {
        fscanf(fi, "%d %s %s %d %d", &bn[i].maBN, bn[i].ten, bn[i].khoa,
               &bn[i].soNgayNamVien, &bn[i].chiPhi);
    }
}

void find(FILE *fo, struct benhnhan bn[], int n, char khoacantim[]) {
    struct benhnhan danhSachLoc[1000];
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(bn[i].khoa, khoacantim) == 0) {
            danhSachLoc[m++] = bn[i];
        }
    }
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (danhSachLoc[i].soNgayNamVien < danhSachLoc[j].soNgayNamVien ||
                (danhSachLoc[i].soNgayNamVien == danhSachLoc[j].soNgayNamVien &&
                 danhSachLoc[i].maBN > danhSachLoc[j].maBN)) {
                struct benhnhan temp = danhSachLoc[i];
                danhSachLoc[i] = danhSachLoc[j];
                danhSachLoc[j] = temp;
            }
        }
    }

    fprintf(fo, "Khoa: %s\n", khoacantim);
    fprintf(fo, "So benh nhan: %d\n", m);
    for (int i = 0; i < m; i++) {
        fprintf(fo, "%d %s %d\n", danhSachLoc[i].maBN, danhSachLoc[i].ten,
                danhSachLoc[i].soNgayNamVien);
    }
}

int main() {
    FILE *fi = fopen("input.txt", "r");
    FILE *fo = fopen("output.txt", "w");
    int n;
    char khoacantim[100];
    struct benhnhan bn[1000];
    nhap(fi, bn, &n, khoacantim);
    find(fo, bn, n, khoacantim);
    fclose(fi);
    fclose(fo);

    return 0;
}
