/* Cho danh sách sách trong một thư viện. Mỗi cuốn sách có thông tin:
* mã sách, tên sách, tên tác giả, năm sản xuất, số lượng.
* sắp xếp theo tăng dần của năm sản xuất, nếu trùng thì xét tiếp mã sách.
* dùng struct, file.
* input.txt
* 2
* S01 LapTrinhC An 2020 5
* S02 ToanRoiRac Binh 2019 2
* ouput.txt
* S00 CoSoDL Tuan 2018 4
* S02 ToanRoiRac Binh 2019 2
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char maSach[20];
    char tenSach[100];
    char tacGia[100];
    int namXuatBan;
    int soLuong;
} Sach;

// Hoán đổi
void swap(Sach *a, Sach *b) {
    Sach tmp = *a;
    *a = *b;
    *b = tmp;
}

// Sắp xếp theo năm xuất bản tăng dần, nếu trùng thì theo mã sách tăng dần
void sapXep(Sach ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].namXuatBan > ds[j].namXuatBan ||
               (ds[i].namXuatBan == ds[j].namXuatBan && strcmp(ds[i].maSach, ds[j].maSach) > 0)) {
                swap(&ds[i], &ds[j]);
            }
        }
    }
}

int main() {
    FILE *fi = fopen("input.txt", "r");
    int n;
    fscanf(fi, "%d\n", &n);
    Sach ds[1000];

    for (int i = 0; i < n; i++) {
        fscanf(fi, "%s %s %s %d %d",
               ds[i].maSach, ds[i].tenSach, ds[i].tacGia,
               &ds[i].namXuatBan, &ds[i].soLuong);
    }
    fclose(fi);

    // Sắp xếp danh sách
    sapXep(ds, n);

    // Mở file output để ghi kết quả
    FILE *fo = fopen("output.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(fo, "%s %s %s %d %d\n",
                ds[i].maSach, ds[i].tenSach, ds[i].tacGia,
                ds[i].namXuatBan, ds[i].soLuong);
    }

    fclose(fo);

    return 0;
}

