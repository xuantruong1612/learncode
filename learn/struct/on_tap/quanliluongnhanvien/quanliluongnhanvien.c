// tongluong giam, maNV tang

#include <stdio.h>
#include <string.h>

struct luong {
    int maNV;
    char tenNV[100];
    char chucVu[50];
    int soNgayCong;
    int luong1ngay;
};

void nhap(FILE *fi, struct luong *l, int *n) {
    fscanf(fi, "%d", n);
    for (int i = 0; i < *n; i++) {
        fscanf(fi, "%d %s %s %d %d", &l[i].maNV, l[i].tenNV, l[i].chucVu,
               &l[i].soNgayCong, &l[i].luong1ngay);
    }
}

void sapxep(struct luong l[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int tongluong1 = l[i].soNgayCong * l[i].luong1ngay;
            int tongluong2 = l[j].soNgayCong * l[j].luong1ngay;
            if (tongluong1 < tongluong2 ||
                (tongluong1 == tongluong2 && l[i].maNV > l[j].maNV)) {
                struct luong temp = l[i];
                l[i] = l[j];
                l[j] = temp;
            }
        }
    }
}

void in(FILE *fo, struct luong *l, int n) {
    for (int i = 0; i < n; i++) {
        int tongluong = l[i].soNgayCong * l[i].luong1ngay;
        fprintf(fo, "%d %s %s %d \n", l[i].maNV, l[i].tenNV, l[i].chucVu, tongluong);
    }
}
int main() {
    FILE *fi, *fo;
    fi = fopen("input.txt", "r");
    fo = fopen("output.txt", "w");
    int n;
    struct luong l[1000];
    nhap(fi, l, &n);
    sapxep(l, n);
    in(fo, l, n);
    fclose(fi);
    fclose(fo);

    return 0;
}
