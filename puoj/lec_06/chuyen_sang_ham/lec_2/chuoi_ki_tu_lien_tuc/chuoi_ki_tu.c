#include <stdio.h>

void chuoi_ki_tu (char a[]) {
    printf("Hay nhap chuoi ky tu lien tuc (khong co dau cach):");
    scanf("%s", a);
    printf("Chuoi ky tu vua nhap: %s", a);
}

int main() {
    char a[50];
    chuoi_ki_tu(a);
    return 0;
}
