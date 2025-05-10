#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[100];
    int soluong;
    char kichco[4];
    double giaban;
} sanpham;

int n;
sanpham sp[1000];

void task2a_nhap(){
    printf("nhap so danh sach: ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++){
        printf("nhap ten san pham thu %d: ", i+1);
        fgets(sp[i].ten, sizeof(sp[i].ten), stdin);
        sp[i].ten[strcspn(sp[i].ten, "\n")] = '\0';

        printf("nhap so luong san pham thu %d: ", i+1);
        scanf("%d", &sp[i].soluong);

        int size;
        do {
            printf("nhap size san pham thu %d: ", i+1);
            scanf("%d", &size);
            if (size < 1 || size > 5) printf("sai, nhap lai\n");
        } while (size < 1 || size > 5);
        switch(size){
            case 1: strcpy(sp[i].kichco, "S"); break;
            case 2: strcpy(sp[i].kichco, "M"); break;
            case 3: strcpy(sp[i].kichco, "L"); break;
            case 4: strcpy(sp[i].kichco, "XL"); break;
            case 5: strcpy(sp[i].kichco, "2XL"); break;
        }

        printf("nhap gia ban thu %d: ", i+1);
        scanf("%lf", &sp[i].giaban);
        getchar();
    }
}

void task2b_in(){
    printf("+-----+--------------------+----------+-----+---------------+\n");
    printf("|%-5s|%-20s|%-10s|%-5s|%-15s|\n", "STT","TEN SAN PHAM", "SO LUONG", "SIZE", "GIA BAN (k VND)");
    for (int i = 0; i < n; i++){
        printf("+-----+--------------------+----------+-----+---------------+\n");
        printf("|%-5d|%-20s|%-10d|%-5s|%-15.2lf|\n", i+1, sp[i].ten, sp[i].soluong, sp[i].kichco, sp[i].giaban);
    }
    printf("+-----+--------------------+----------+-----+---------------+\n");
}

double task2c_sapxep(){
    double tongtien = 0;
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (sp[i].soluong < sp[j].soluong){
                sanpham temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        tongtien += sp[i].giaban * sp[i].soluong;
    }
    printf("\nsau khi sap xep\n");
    task2b_in();
    return tongtien;
}

void task2d_loc(double g1, double g2, char s[]){
    int dem = 0;
    printf("+-----+--------------------+----------+-----+---------------+\n");
    printf("|%-5s|%-20s|%-10s|%-5s|%-15s|\n", "STT","TEN SAN PHAM", "SO LUONG", "SIZE", "GIA BAN (k VND)");
    for (int i = 0; i < n; i++){
        if (sp[i].giaban >= g1 && sp[i].giaban <= g2 && strcmp(sp[i].kichco, s) == 0){
            printf("+-----+--------------------+----------+-----+---------------+\n");
            printf("|%-5d|%-20s|%-10d|%-5s|%-15.2lf|\n", i+1, sp[i].ten, sp[i].soluong, sp[i].kichco, sp[i].giaban);
            dem++;
        }
    }
    printf("+-----+--------------------+----------+-----+---------------+\n");
    if (!dem) printf("khong co du lieu\n");
}

int main(){
    task2a_nhap();
    task2b_in();

    printf("\ntong so tien la: %.2lf\n", task2c_sapxep());
    double g1, g2;
    char s[4];

    int size;
        do {
            printf("nhap size: ");
            scanf("%d", &size);
            if (size < 1 || size > 5) printf("sai, nhap lai\n");
        } while (size < 1 || size > 5);

        printf("nhap g1: ");
        scanf("%lf", &g1);
        printf("nhap g2: ");
        scanf("%lf", &g2);

        switch(size){
            case 1: strcpy(s, "S"); break;
            case 2: strcpy(s, "M"); break;
            case 3: strcpy(s, "L"); break;
            case 4: strcpy(s, "XL"); break;
            case 5: strcpy(s, "2XL"); break;
        }
    task2d_loc(g1, g2, s);

    return 0;
}
