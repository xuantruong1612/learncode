#include <stdio.h>

int main() {
    struct nhanVien {
        int maNV;
        char tenNV[30];
    };
    struct nhanVien nv[100];
    int n;

    printf("Nhap vao so luong nhan vien trong danh sach: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("\nNhap vao nhan vien %d: ", i + 1);
        printf("\nNhap vao ma nhan vien %d: ", i + 1);
        scanf("%d", &nv[i].maNV);
        getchar();
        printf("Nhap vao ten nhan vien %d: ", i + 1);
        fgets(nv[i].tenNV, sizeof(nv[i].tenNV), stdin);
    }
    printf("=====================");
    printf("\nDanh sach nhan vien: ");
    for (int i = 0; i < n; i++) {
        printf("\nNhan vien %d: ", i + 1);
        printf("\nMa nhan vien %d: ", nv[i].maNV);
        printf("\nTen nhan vien %s: ", nv[i].tenNV);
    }
    return 0;
}
