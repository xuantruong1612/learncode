#include <stdio.h>
#include <string.h>

void task1a_nhap(char a[]){
    int kytu = 0, chu = 0, so = 0, batdau = 0, check = 0;

    while (!check){
        printf("nhap chuoi: ");
        scanf("%s", a);

        kytu = chu = so = batdau = 0;
        if (strlen(a) >= 6) kytu = 1;
        for (int i = 0; i < strlen(a); i++){
            if (a[i] >= 'A' && a[i] <= 'Z') chu = 1;
            if (a[i] >= '0' && a[i] <= '9') so = 1;
        }
        if (a[0] == 'P' || a[0] == 'p') batdau = 1;
        if (batdau == 1 && chu == 1 && so == 1) check = 1;
        else printf("sai, nhap lai\n");
    }
}

void task1b_thongke(char a[]){
    int chu = 0, so = 0;
    for (int i = 0; i < strlen(a); i++){
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z') chu++;
        if (a[i] >= '0' && a[i] <= '9') so++;
    }
    printf("string co %d chu cai, %d so\n", chu, so);
}

void task1c_xoadb(char a[]){
    int xoa = 0;
    for (int i = 0; i < strlen(a); i++){
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z' || a[i] >= '0' && a[i] <= '9')
            a[xoa++] = a[i];
    }
    a[xoa] = '\0';
    printf("string ket qua sau khi xoa ky tu dac biet: %s", a);
}

int main(){
    char a[100];
    task1a_nhap(a);
    task1b_thongke(a);
    task1c_xoadb(a);

    return 0;
}
