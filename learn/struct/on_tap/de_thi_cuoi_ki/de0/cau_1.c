#include <stdio.h>
#include <string.h>

// 1.a
void nhap(char a[]) {
    int kytu = 0;
    int chuhoa = 0;
    int so = 0;
    int batdau = 0;
    int check = 0;

    while (check == 0) {
        printf("nhap chuoi vao day:");
        fgets(a, 1000, stdin);
        kytu = chuhoa = so = batdau = 0;
        if (strlen(a) >= 6)
            kytu = 1;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
                chuhoa = 1;
            if (a[i] >= '0' && a[i] <= '9')
                so = 1;
            if (a[0] == 'P' || a[0] == 'p')
                batdau = 1;
        }
        if (kytu == 1 && chuhoa == 1 && so == 1 && batdau == 1)
            check = 1;
        else
            printf("sai roi, nhap lai\n");
    }
}

// 1.b
void dem(char a[]) {
    int chu = 0;
    int so = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z')
            chu++;

        if (a[i] >= '0' && a[i] <= '9')
            so++;
    }
    printf("chu: %d\nso: %d\n", chu, so);
}

// 1.c
void xoa(char a[]) {
    int n = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z' || a[i] >= 'a' && a[i] <= 'z' ||
            a[i] >= '0' && a[i] <= '9') {
            a[n] = a[i];
            n++;
        }
    }
    a[n] = '\0';
    printf("sau khi xoa: %s", a);
}

// 1.d
void goi(char a[]) {
    nhap(a);
    dem(a);
    xoa(a);
}

int main() {
    char a[1000];
    goi(a);
    return 0;
}
