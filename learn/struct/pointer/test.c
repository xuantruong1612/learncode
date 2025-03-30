#include <stdio.h>
#include <stdlib.h>

int main() {
    struct sinhVien {
        int mssv;
        char tenSv[30];
    };

    struct sinhVien *sv;
    sv = (struct sinhVien *)malloc(sizeof(struct sinhVien));
    printf("Mssv: ");
    scanf("%d", &sv->mssv);
    getchar();

    printf("Ten sinh vien: ");
    fgets(sv->tenSv, sizeof(sv->tenSv), stdin);

    printf("Thong tin: ");
    printf("\nMssv: %d", sv->mssv);
    printf("\nTen: %s", sv->tenSv);
}
