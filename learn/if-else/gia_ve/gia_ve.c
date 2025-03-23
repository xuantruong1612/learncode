/*     _  ____  _____    _   __   __________  __  ______  _   ________
      | |/ / / / /   |  / | / /  /_  __/ __ \/ / / / __ \/ | / / ____/
      |   / / / / /| | /  |/ /    / / / /_/ / / / / / / /  |/ / / __
     /   / /_/ / ___ |/ /|  /    / / / _, _/ /_/ / /_/ / /|  / /_/ /
    /_/|_\____/_/  |_/_/ |_/    /_/ /_/ |_|\____/\____/_/ |_/\____/
*/

#include <stdio.h>
#include <string.h>

// phong cách tự định nghĩa hết, không nên áp dụng
#define GIA_CHU_NHAT 10
#define GIA_NGAY_THUONG 7
#define GIAM_GIA_TRE_EM 0.5 // giảm 50% cho trẻ em =))
#define VE_NGUOI_LON 0
#define VE_TRE_EM 1
#define NGAY_THUONG 0
#define CHU_NHAT 1
#define STR_CHU_NHAT "chu nhat"
#define STR_NGAY_THUONG "ngay thuong"

double tinh_tien(int so_luong, int loai_ve, int ngay_xem) {
    double gia_ve;
    // nếu ngày xem là chủ nhật (1) thì giá vé là chủ nhật (10), ...
    if (ngay_xem == CHU_NHAT) {
        gia_ve = GIA_CHU_NHAT;
    } else {
        gia_ve = GIA_NGAY_THUONG;
    }
    if (loai_ve == VE_TRE_EM) {
        gia_ve *= GIAM_GIA_TRE_EM;
    }
    return gia_ve * so_luong;
}
int main() {
    char ten_phim[50];
    int so_luong, loai_ve, ngay_xem;
    double tong_tien;
    const char *ngay_xem_str;  // ngày xem là ngày nào (pointer)

    printf("Nhap ten phim: ");
    fgets(ten_phim, sizeof(ten_phim), stdin); // fgets: ghi được kí tự " "
    ten_phim[strcspn(ten_phim, "\n")] = 0;    // tìm và xóa dấu xuống dòng

    printf("Nhap so luong ve: ");
    scanf("%d", &so_luong);

    printf("Nhap loai ve (%d: Tre em, %d: Nguoi lon): ", VE_TRE_EM, VE_NGUOI_LON);
    scanf("%d", &loai_ve);

    printf("Nhap ngay xem (%d: Chu nhat, %d: Ngay thuong): ", CHU_NHAT, NGAY_THUONG);
    scanf("%d", &ngay_xem);

    // nếu 1 thì chủ nhật gán chủ nhật, ...
    if (ngay_xem == CHU_NHAT) {
        ngay_xem_str = STR_CHU_NHAT;
    } else {
        ngay_xem_str = STR_NGAY_THUONG;
    }

    tong_tien = tinh_tien(so_luong, loai_ve, ngay_xem);

    printf("\nThong tin ve:\n");
    printf("- Ten phim: %s\n", ten_phim);
    printf("- Ngay xem: %s\n", ngay_xem_str);
    printf("- So luong ve: %d\n", so_luong);
    printf("- So tien thanh toan: %.2f\n", tong_tien);
    return 0;
}
