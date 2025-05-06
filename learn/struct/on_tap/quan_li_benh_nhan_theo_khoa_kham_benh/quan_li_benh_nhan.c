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

void sapxep(FILE *fo, struct benhnhan bn[], int n, char khoacantim[]) {
    int m = 0;
    struct benhnhan loc[1000];
    for (int i = 0; i < n; i++) {
        if (strcmp(bn[i].khoa, khoacantim) == 0) {
            loc[m++] = bn[i];
        }
    }
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (loc[i].soNgayNamVien < loc[j].soNgayNamVien) {
                struct benhnhan temp = loc[i];
                loc[i] = loc[j];
                loc[j] = temp;
            }
        }
    }
    fprintf(fo, "Khoa: %s\n", khoacantim);
    fprintf(fo, "So benh nhan: %d\n", m);
    for (int i = 0; i < m; i++) {
        fprintf(fo, "%d %s %d\n", loc[i].maBN, loc[i].ten, loc[i].soNgayNamVien);

    }
}

int main() {
    FILE *fi = fopen("input.txt", "r");
    FILE *fo = fopen("test.txt", "w");
    int n;
    char khoacantim[100];
    struct benhnhan bn[1000];
    nhap(fi, bn, &n, khoacantim);
    sapxep(fo, bn, n, khoacantim);
    fclose(fi);
    fclose(fo);

    return 0;
}
