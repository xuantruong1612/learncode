#include <stdio.h>

int main() {
    struct sinhVien {
        int mssv;
        char tenSV[30];
    };

    struct sinhVien sv;
    printf("Mssv: ");
    scanf("%d", &sv.mssv);
    getchar();

    printf("Ten: ");
    fgets(sv.tenSV, sizeof(sv.tenSV), stdin);

    printf("In ra thong tin SV: ");
    printf("\nMa sinh vien: %d", sv.mssv);
    printf("\nTen sinh vien: %s", sv.tenSV);
}
