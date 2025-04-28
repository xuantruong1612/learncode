#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhap(char* str, int size){
    fgets(str, size, stdin);
}

void xoaDauCham(char* str){
    int len = strlen(str);
    if (str[len - 1] == '.'){
        str[len - 1] = '\0';
    }
}

int demTu(char* str){
    int count = 0;
    int i = 0;
    while (str[i] == ' ') i++;
    while (str[i] != '\0'){
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) 
            count++;
        i++;
    }
    return count;
}

void print(int tu){
    printf("%d\n", tu);
}

int main() {
    char str[1000];
    nhap(str, sizeof(str));
    xoaDauCham(str);
    int tu = demTu(str);
    print(tu);

    return 0;
}
