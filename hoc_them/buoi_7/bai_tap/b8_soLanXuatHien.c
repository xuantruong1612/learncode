#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhap(char* text, int size){
    fgets(text, size, stdin);
}

void nhapKyTu(char* c){
    scanf("%c", c);
}

int demTanSuat(char* text, char c) {
    int count = 0;
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == c) {
            count++;
        }
    }
    return count;
}

void print(char c, int count){
    printf("ky tu %c xuat hien %d lan\n", c, count);
}

int main (){
    char text[1000];
    char c;
    nhap(text, sizeof(text));
    nhapKyTu(&c);
    
    int count = demTanSuat(text, c);
    print(c, count);

    return 0;
}
