#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhap(char* hoTen, int size){
    fgets(hoTen, size, stdin);
}

void xoaDauCach(char* str){
    int len = strlen(str);
    while (len > 0 && str[len - 1] == ' '){
        str[len - 1] = '\0';
        len--;
    }
}

char* layTen(char *xau) {
    int i = strlen(xau) - 1;
    while (i >= 0 && xau[i] == ' ') i--;
    while (i >= 0 && xau[i] != ' ') i--;
    return &xau[i + 1];
}

void print(char* ten){
    printf("%s\n", ten);
}

int main(){
    char hoTen[100];
    nhap(hoTen, sizeof(hoTen));
    xoaDauCach(hoTen);
    char *ten = layTen(hoTen);
    print(ten);

    return 0;
}
