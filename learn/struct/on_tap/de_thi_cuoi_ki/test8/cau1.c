#include <stdio.h>
#include <string.h>

void nhap(char a[]) {
    int kytu = 0;
    int chuso = 0;
    int check = 0;

    while (check == 0) {
        printf("nhap chuoi: ");
        fgets(a, 1000, stdin);
        a[strcspn(a, "\n")] = '\0';

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

void chuyendoi(char a[]) {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            a[i] = 'a' + (a[i] - '0');
        }
    }
    printf("chuyen thanh ki tu: %s\n", a);
}

void xenke(char a[]){
    int index = 0;
    for (int i = 0; i < strlen(a); i++){
        if (a[i]>='A' && a[i] <='Z' || a[i] >='a' &&a[i]<='z'){
            if (a[i]>='A' && a[i] <= 'Z'){
                a[i] += 32;
            }
            if(index % 2 == 0) {
                a[i] -= 32;
            }
            index++;
        }
    }
    printf("xen ke: %s", a);
}

int main() {
    char a[1000];
    nhap(a);
    chuyendoi(a);
    xenke(a);
}
