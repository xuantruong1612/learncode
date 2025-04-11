#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhVien {
    int maSV;
    int diem;
    char tenSV[100];
    char queQuan[100];
};

int main () {
    int n, diemChuan;
    char tinh[100];
    FILE *fi, *fo;
    fi = fopen("input.txt", "r");
    fscanf(fi, "%d %d %s", &n, &diemChuan, tinh);

    struct sinhVien *sv = (struct sinhVien*)malloc(n* sizeof(struct sinhVien));
    int demTrungTuyen = 0;

    for (int i = 0; i < n; i++){
        fscanf(fi, "%d %d %s %s", &sv[i].maSV, &sv[i].diem, sv[i].tenSV, sv[i].queQuan);

        if (sv[i].diem >= diemChuan && strcmp(sv[i].queQuan, tinh) == 0) 
            sv[demTrungTuyen++] = sv[i];
    }
    fclose(fi);

    fo = fopen("output.txt", "w");

    fprintf(fo, "Tinh: %s\n", tinh);
    fprintf(fo, "Tong so thi sinh trung tuyen: %d\n", demTrungTuyen);
     for (int i = 0; i < demTrungTuyen; i++) {
            fprintf(fo, "%d %d %s\n", sv[i].maSV, sv[i].diem, sv[i].tenSV);
    }

    fclose(fo);
    free(sv);
    return 0;
}
