#include <stdio.h>
#include <string.h>

int task1a_kiemtra(char a[]){
    int kytu = 0;
    int hoa = 0;
    int so = 0;
    int khac0 = 0;
    int dot = 0;

    if (strlen(a) == 11) kytu = 1;
    if (a[4] == '-' && a[8] == '.') dot = 1;
    if (a[0] != '0' && a[3] != '0') khac0 = 1;
    if (a[2] >= 'A' && a[2] <= 'Z') hoa = 1;
    for (int i = 0; i < strlen(a); i++){
        if (a[i] >= '0' && a[i] <= '9') so = 1;
    }
    if (hoa == 1 && so == 1 && kytu == 1 && khac0 == 1 && dot == 1) return 1;
    return 0;
}

void xoa(char a[]){
    int xoa = 0;
    for (int i = 0; i < strlen(a); i++){
        if (a[i] != '.' && a[i] != '-'){
            a[xoa++] = a[i];
        }
    }
    a[xoa] = '\0';
    printf("chuoi sau khi xoa: %s", a);

}

int task1b_nhap(char a[]){
    int check = 0;
    while (!check){
        printf("nhap chuoi: ");
        scanf("%s", a);
        check = task1a_kiemtra(a);
        if (!check) printf("xau truyen vao khong phai bien so xe, nhap lai\n");
    }

    xoa(a);
}

int main (){
    char a[20];
    task1b_nhap(a);
}
