#include <stdio.h>
#include <string.h>

struct danhSach {
    char ten[30];
    char diaChi[100];
};

void nhap(struct danhSach *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ten: ");
        fgets(ds[i].ten, sizeof(ds[i].ten), stdin);
        ds[i].ten[strcspn(ds[i].ten, "\n")] = '\0';

        printf("Dia chi: ");
        fgets(ds[i].diaChi, sizeof(ds[i].diaChi), stdin);
        ds[i].diaChi[strcspn(ds[i].diaChi, "\n")] = '\0';
    }
}

void in(struct danhSach *ds, int n) {
    for (int i = 0; i < n; i++) {
        printf("Ten: %s\n", ds[i].ten);
        printf("Dia chi: %s\n", ds[i].diaChi);
    }
}

void sapxep(struct danhSach ds[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i +1; j < n; j++){
            int cmp = strcmp(ds[i].ten, ds[j].ten);
            if (cmp > 0 || (cmp == 0 && strcmp(ds[i].diaChi, ds[j].diaChi) > 0)){
                struct danhSach temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("So luong: ");
    scanf("%d", &n);
    getchar();
    struct danhSach ds[100];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);

    return 0;
}
