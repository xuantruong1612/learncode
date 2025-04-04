#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DONG 100
#define MAX_THISINH 100

typedef struct {
    int maso;
    int diem;
    char hoten[MAX_DONG];
    char quequan[MAX_DONG];
} ThiSinh;

int main() {
    FILE *tep_vao = fopen("input.txt", "r");
    FILE *tep_ra = fopen("output.txt", "w");
    
    if (!tep_vao || !tep_ra) {
        printf("Loi mo tep!\n");
        return 1;
    }
    
    int n, diemchuan, so_trung_tuyen = 0;
    ThiSinh ds_thisinh[MAX_THISINH], ds_trungtuyen[MAX_THISINH];
    
    fscanf(tep_vao, "%d %d", &n, &diemchuan);
    
    for (int i = 0; i < n; i++) {
        fscanf(tep_vao, "%d %d", &ds_thisinh[i].maso, &ds_thisinh[i].diem);
        fscanf(tep_vao, " %[^\n]", ds_thisinh[i].hoten);
        fscanf(tep_vao, " %[^\n]", ds_thisinh[i].quequan);
        
        if (ds_thisinh[i].diem >= diemchuan) {
            ds_trungtuyen[so_trung_tuyen++] = ds_thisinh[i];
        }
    }
    
    fprintf(tep_ra, "Tong so thi sinh trung tuyen: %d\n", so_trung_tuyen);
    for (int i = 0; i < so_trung_tuyen; i++) {
        fprintf(tep_ra, "%d %d %s %s\n", ds_trungtuyen[i].maso, ds_trungtuyen[i].diem, ds_trungtuyen[i].hoten, ds_trungtuyen[i].quequan);
    }
    
    fclose(tep_vao);
    fclose(tep_ra);
    
    return 0;
}
