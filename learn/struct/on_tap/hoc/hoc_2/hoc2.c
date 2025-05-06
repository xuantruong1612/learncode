#include <stdio.h>
#include <string.h>

typedef struct {
    int maSV;
    char ten[50];
    char que[100];
    int diemthi;
} sinhVien;

void nhap(sinhVien *sv, int n) {
    for (int i = 0; i < n; i++) {
        printf("nhap ma sinh vien: ");
        scanf("%d", &sv[i].maSV);

        printf("nhap ten: ");
        getchar();
        // scanf("\n");
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';

        printf("nhap que quan: ");
        fgets(sv[i].que, sizeof(sv[i].que), stdin);
        sv[i].que[strcspn(sv[i].que, "\n")] = '\0';

        printf("nhap diem thi: ");
        scanf("%d", &sv[i].diemthi);
    }
}

void in(sinhVien *sv, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n%s\n%s\n%d\n", sv[i].maSV, sv[i].ten, sv[i].que, sv[i].diemthi);
    }
}

int main() {
    int n;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &n);
    sinhVien sv[1000];
    nhap(sv, n);
    in(sv, n);

    return 0;
}
