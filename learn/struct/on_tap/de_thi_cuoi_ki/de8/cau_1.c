#include <stdio.h>
#include <string.h>

void nhap(char a[]) {
    int kytu = 0;
    int chuso = 0;
    int check = 0;

    while (check == 0) {
        printf("nhap chuoi: ");
        fgets(a, 100, stdin);
        a[strcspn(a, "\n")] = '\0';
        kytu = chuso = 0;
        if (strlen(a) >= 10)
            kytu = 1;
        for (int i = 0; i < strlen(a); i++) {
            if (a[i] >= '0' && a[i] <= '9')
                chuso = 1;
        }
        if (chuso == 1 && kytu == 1)
            check = 1;
        else
            printf("sai, nhap lai\n");
    }
}

void mahoa(char a[]) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            a[i] = 'a' + (a[i] - '0');
        }
    }
    printf("sau khi ma hoa: %s\n", a);
}

void xenke(char a[]) {
    mahoa(a);
    int index = 0;
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') {
            if (index % 2 == 0) {
                a[i] -= 32;
            }
            index++;
        }
    }
    printf("xen ke: %s", a);
}

int main() {
    char a[100];
    nhap(a);
    xenke(a);
}
