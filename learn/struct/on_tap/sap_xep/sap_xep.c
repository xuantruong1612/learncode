#include <ctype.h>
#include <stdio.h>
#include <string.h>

struct danhSach {
    char ten[50];
    char diaChi[100];
};

void nhap(struct danhSach *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ten: ");
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = '\0';

        printf("dia chi: ");
        fgets(ds[i].diaChi, sizeof(ds[i].diaChi), stdin);
        ds[i].diaChi[strcspn(ds[i].diaChi, "\n")] = '\0';
    }
}

void in(struct danhSach *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nten: %s", ds[i].ten);
        printf("\ndia chi: %s", ds[i].diaChi);
    }
}

void sapxep(struct danhSach ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(strcmp(ds[i].ten, ds[j].ten) > 0){
                struct danhSach temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
            else {
                if (strcmp(ds[i].diaChi, ds[j].diaChi) > 0){
                    struct danhSach temp1 = ds[i];
                    ds[i] = ds[j];
                    ds[j] = temp1;
                }
            }
        }
    }
}

int main() {
    int n;
    printf("so luong: ");
    scanf("%d", &n);
    getchar();
    struct danhSach ds[100];
    nhap(ds, n);
//    in(ds, n);
    printf("\nsau khi sap xep: ");
    sapxep(ds, n);
    in(ds, n);
    return 0;
}
