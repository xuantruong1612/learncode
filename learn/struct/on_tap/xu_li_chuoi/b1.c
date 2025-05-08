#include <stdio.h>
#include <string.h>

void nhap(char a[]) {
    int kytu = 0;
    int chuhoa = 0;
    int so = 0;
    int batdau = 0;
    int check = 0;

    while (check == 0) {
        kytu = chuhoa = so = batdau = 0;
        printf("nhap chuoi vao day: ");
        fgets(a, 1000, stdin);
        if (strlen(a) > 5)
            kytu = 1;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
                chuhoa = 1;
            if (a[i] >= '0' && a[i] <= '9')
                so = 1;
        }
        if (a[0] == 'p' || a[0] == 'P')
            batdau = 1;
        if (kytu == 1 && chuhoa == 1 && so == 1 && batdau == 1) {
            check = 1;
        } else
            printf("sai roi, nhap lai\n");
    }
}

void in(char a[]) {
    int chu = 0;
    int so = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
            chu++;
        if (a[i] >= '0' && a[i] <= '9')
            so++;
    }
    printf("chu: %d\nso: %d", chu, so);
}

void xoa(char a[]) {
    int xoa = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z' ||
            a[i] >= '0' && a[i] <= '9') {
            a[xoa] = a[i];
           xoa++; 
        }
    }
    a[xoa] = '\0';
    printf("\nsau khi xoa la: %s", a);
}

int main() {
    char a[1000];
    nhap(a);
    in(a);
    xoa(a);
    return 0;
}
