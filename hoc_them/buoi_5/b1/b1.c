#include <stdio.h>

int main(){
    char a[10], b[10];
    int me = 0, you = 0;
    for (int i = 0; i < 10; i++){
        scanf("%c" , &a[i]);
        me++;
        if (a[i] == '\n') break;
    }
    for (int i = 0; i < 10; i++){
        scanf("%c", &b[i]);
        you++;
        if (b[i] == '\n') break;
    }

}
