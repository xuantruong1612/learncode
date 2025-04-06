#include <stdio.h>
#include <string.h>

typedef struct {
    int ma_so;
    int diem;
    char ho_ten[100];
    char que_quan[100];
} ThiSinh;

int main() {

    int n, diem_chuan;

    FILE *input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Không thể mở file input.txt\n");
        return 1;
    }

    fscanf(input, "%d %d", &n, &diem_chuan);

    ThiSinh thi_sinh[n];
    int dem_trung_tuyen = 0;

    for (int i = 0; i < n; i++) {
        fscanf(input, "%d %d %s %s", &thi_sinh[i].ma_so, &thi_sinh[i].diem, thi_sinh[i].ho_ten, thi_sinh[i].que_quan);

        if (thi_sinh[i].diem >= diem_chuan) {
            dem_trung_tuyen++;
        }
    }

    fclose(input);

    FILE *output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Không thể mở file output.txt\n");
        return 1;
    }

    fprintf(output, "Tong so thi sinh trung tuyen: %d\n", dem_trung_tuyen);

    for (int i = 0; i < n; i++) {
        if (thi_sinh[i].diem >= diem_chuan) {
            fprintf(output, "%d %d %s %s\n", thi_sinh[i].ma_so, thi_sinh[i].diem, thi_sinh[i].ho_ten, thi_sinh[i].que_quan);
        }
    }

    fclose(output);

    return 0;
}
