#include <stdio.h>

struct benhNhan {
    int maBN;
    char ten[100];
    char khoa[100];
    int soNgayNamVien;
    int chiPhiMoiNgay;
};

void nhap(FILE *fi, struct benhNhan *bn, int *n) {
    fscanf(fi, "%d", n);
    for (int i = 0; i < *n; i++) {
        fscanf(fi, "%d %s %s %d %d", &bn[i].maBN, bn[i].ten, bn[i].khoa,
               &bn[i].soNgayNamVien, &bn[i].chiPhiMoiNgay);
    }
}

void in(FILE *fo, struct benhNhan *bn, int n) {
    for (int i = 0; i < n; i++) {
        int tongchiphi = bn[i].soNgayNamVien * bn[i].chiPhiMoiNgay;
        fprintf(fo, "%d %s %s %d\n", bn[i].maBN, bn[i].ten, bn[i].khoa,
                tongchiphi);
    }
}

void sapxep(struct benhNhan bn[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int tongchiphi1 = bn[i].soNgayNamVien * bn[i].chiPhiMoiNgay;
            int tongchiphi2 = bn[j].soNgayNamVien * bn[j].chiPhiMoiNgay;
            if (tongchiphi1 < tongchiphi2 ||
                (tongchiphi1 == tongchiphi2 && bn[i].maBN < bn[j].maBN)) {
                struct benhNhan temp = bn[i];
                bn[i] = bn[j];
                bn[j] = temp;
            }
        }
    }
}

int main() {
    FILE *fi = fopen("input.txt", "r");
    FILE *fo = fopen("output.txt", "w");
    int n;
    struct benhNhan bn[1000];
    nhap(fi, bn, &n);
    sapxep(bn, n);
    in(fo, bn, n);
    fclose(fi);
    fclose(fo);
    return 0;
}
