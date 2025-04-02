#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 3;
    printf("i = %d\n", i);
    printf("Dia chi o nho cua bien i: %d", &i);

    int *p;
    p = &i;
    printf("p = %d \n", p);
    printf("Gia tri cua o nho p tro vao: %d", *p);
}
