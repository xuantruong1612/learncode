#include <stdio.h>
#include <stdlib.h>

int main() {
    struct nhanVien {
        int maNv;
        char tenNv[30];
    };
    struct nhanVien *nv;
    int n;
    printf("Danh sach nhan vien la: ");
    scanf("%d", &n);
    getchar();
    nv = (struct nhanVien *)malloc(n * sizeof(struct nhanVien));

    for (int i = 0; i < n; i++) {
        printf("\nNhap nhan vien: ");
        printf("\nMa nhan vien %d: ", i + 1);
        scanf("%d", &(nv + i)->maNv);
        getchar();
        printf("Ten nhan vien %d: ", i + 1);
        fgets((nv + i)->tenNv, sizeof((nv + i)->tenNv), stdin);
    }

    printf("\n------------------------");
    printf("\nDanh sach nhan vien: ");
    for (int i = 0; i < n; i++) {
        printf("\nNhan vien: %d", i + 1);
        printf("\nMa nhan vien: %d", (nv + i)->maNv);
        printf("\nTen nhan vien: %s", (nv + i)->tenNv);
    }
    return 0;
}
