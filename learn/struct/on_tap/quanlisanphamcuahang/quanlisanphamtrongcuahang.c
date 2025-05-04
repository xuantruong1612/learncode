#include <stdio.h>

struct sanPham {
    int maSP;
    char tenSP[100];
    char loaiSP[100];
    int soluong;
    int donGia;
};

void nhap(FILE *fi, struct sanPham *sp, int *n) {
    fscanf(fi, "%d", n);
    for (int i = 0; i < *n; i++) {
        fscanf(fi, "%d %s %s %d %d", &sp[i].maSP, sp[i].tenSP, sp[i].loaiSP,
               &sp[i].soluong, &sp[i].donGia);
    }
}

void in(FILE *fo, struct sanPham *sp, int n) {
    for (int i = 0; i < n; i++) {
        int tonggiatonkho = sp[i].soluong * sp[i].donGia;
        fprintf(fo, "%d %s %s %d\n", sp[i].maSP, sp[i].tenSP, sp[i].loaiSP,
                tonggiatonkho);
    }
}

void sapxep(struct sanPham sp[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int tonggiatonkho1 = sp[i].soluong * sp[i].donGia;
            int tonggiatonkho2 = sp[j].soluong * sp[j].donGia;
            if (tonggiatonkho1 < tonggiatonkho2 ||
                (tonggiatonkho1 == tonggiatonkho2 && sp[i].maSP > sp[j].maSP)){
                struct sanPham temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
    }
}

int main() {
    FILE *fi = fopen("input.txt", "r");
    FILE *fo = fopen("output.txt", "w");
    int n;
    struct sanPham sp[1005];
    nhap(fi, sp, &n);
    sapxep(sp, n);
    in(fo, sp, n);
    fclose(fi);
    fclose(fo);

    return 0;
}
