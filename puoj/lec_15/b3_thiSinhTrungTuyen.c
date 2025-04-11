#include <stdio.h>
#include <stdlib.h>

struct sinhVien {
    int maSV;
    int diem;
    char tenSV[100];
    char queQuan[100];
};

int main () {
    int n, diemChuan;
    FILE *fi, *fo;
    fi = fopen("input.txt", "r");
    fscanf(fi, "%d %d", &n, &diemChuan);

    struct sinhVien *sv = (struct sinhVien*)malloc(n* sizeof(struct sinhVien));
    int demTrungTuyen = 0;

    for (int i = 0; i < n; i++){
        fscanf(fi, "%d %d %s %s", &sv[i].maSV, &sv[i].diem, sv[i].tenSV, sv[i].queQuan);

        if (sv[i].diem >= diemChuan) demTrungTuyen++;
    }
    fclose(fi);

    fo = fopen("output.txt", "w");

    fprintf(fo, "Tong so thi sinh trung tuyen: %d\n", demTrungTuyen);
     for (int i = 0; i < n; i++) {
        if (sv[i].diem >= diemChuan) {
            fprintf(fo, "%d %d %s %s\n", sv[i].maSV, sv[i].diem, sv[i].tenSV, sv[i].queQuan);
        }
    }

    fclose(fo);
    free(sv);
    return 0;
}
