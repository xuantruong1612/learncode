#include <stdio.h>
#include <string.h>

struct hocSinh{
    char ten[20];
    int tuoi;
    char queQuan[100];
};

typedef struct hocSinh hs;

void input(hs *n){
    printf("nhap ten: ");
    fgets(n->ten, sizeof(n->ten), stdin);
    n->ten[strcspn(n->ten, "\n")] = '\0';
    printf("nhap tuoi: ");
    scanf("%d", &n->tuoi);
    getchar();
    printf("nhap que quan: ");
    fgets(n->queQuan, sizeof(n->queQuan), stdin);
    n->queQuan[strcspn(n->queQuan, "\n")] = '\0';
}

void output (hs *n){
    printf("%s\n", n->ten);
    printf("%d\n", n->tuoi);
    printf("%s\n", n->queQuan);
}
int main () {
    hs n;
    input (&n);
    output(&n);
    return 0;
}
