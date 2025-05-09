#include <stdio.h>
#include <string.h>

void nhap(char a[]) {
    int kytu = 0;
    int chuso = 0;
    int inhoa = 0;
    int khac0 = 0;
    int check = 0;

    while (check == 0) {
        printf("nhap bien so xe: ");
        fgets(a, 1000, stdin);
        a[strcspn(a, "\n")] = '\0';

        if (strlen(a) == 11)
            kytu = 1;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] >= '0' && a[i] <= '9')
                chuso = 1;
        }
        if (a[0] != '0' && a[strlen(a)] != '0')
            khac0 = 1;
        if (a[2] >= 'A' && a[2] <= 'Z')
            inhoa = 1;
        if (kytu == 1 && chuso == 1 && khac0 == 1 && inhoa == 1)
            check = 1;
        else
            printf("sai roi, nhap lai: \n");
    }
}

void delete(char a[]) {
    int dem = 0;
    int kytudb = 0;
    int n = strlen(a);
    for (int i = 0; i < n; i++) {
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z' ||
            a[i] >= '0' && a[i] <= '9') {
            a[dem] = a[i];
            dem++;
        } else if (a[i] == '-' || a[i] == '.')
            kytudb = 1;
    }
    a[dem] = '\0';
    if (kytudb)
        printf("sau khi xoa la: %s", a);
    else
        printf("xau truyen vao khong phai bien so xe");
}

int main() {
    char a[1000];
    nhap(a);
    delete (a);
    return 0;
}
