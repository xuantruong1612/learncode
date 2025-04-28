#include <stdio.h>
#include <string.h>

void nhap(char* str, int size){
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0';
}

void xoaDauCach(char* str){
    int i = 0, j = 0;
    int gapKiTu = 0;
    while (str[i] != '\0'){
        if (str[i] != ' '){
            str[j++] = str[i++];
            gapKiTu = 1;
        }
        else{
            if (gapKiTu){
                str[j++] = ' ';
                gapKiTu = 0;
            }
            while (str[i] == ' ') i++;
        }
    }
    if (j > 0 && str[j - 1] == ' ') j--;
    str[j] = '\0';
}

void print(char* str){
    printf("%s\n", str);
}

int main (){
    char str[1000];
    nhap(str, sizeof(str));
    xoaDauCach(str);
    print(str);

    return 0;
}
