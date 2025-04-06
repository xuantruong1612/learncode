#include <stdio.h>
#include <string.h>

typedef struct {
    int mssv;
    int diem;
    char ho_ten[50];
    char que_quan[50];
} Sinhvien;

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int n, diemchuan;
    char tinh[50];

    fscanf(input, "%d %d %s", &n, &diemchuan, tinh);

    Sinhvien sv[n];
    int so_trung_tuyen = 0;

    Sinhvien trungtuyen[n];

    for (int i = 0; i < n; i++) {
        fscanf(input, "%d %d %s %s", &sv[i].mssv, &sv[i].diem, sv[i].ho_ten, sv[i].que_quan);

        if (strcmp(sv[i].que_quan, tinh) == 0 && sv[i].diem >= diemchuan) {
            trungtuyen[so_trung_tuyen++] = sv[i];
        }
    }

    fprintf(output, "Tinh: %s\n", tinh);
    fprintf(output, "Tong so thi sinh trung tuyen: %d\n", so_trung_tuyen);

    for (int i = 0; i < so_trung_tuyen; i++) {
        fprintf(output, "%d %d %s\n", trungtuyen[i].mssv, trungtuyen[i].diem, trungtuyen[i].ho_ten);
    }

    fclose(input);
    fclose(output);
    return 0;
}
