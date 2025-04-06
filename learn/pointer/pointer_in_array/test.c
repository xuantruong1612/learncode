#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct conNguoi {
    char hoTen[30];
    int tuoi;
    float vongMot;
    float chieuCao;
};

struct conNguoi taoConNguoi(char ht[], int t, float v1, float cc) {
    struct conNguoi c;
    strcpy(c.hoTen, ht);
    c.tuoi = t;
    c.vongMot = v1;
    c.chieuCao = cc;
    return c;
}

int main() {
    struct conNguoi ae[5] = {
        taoConNguoi("huong", 18, 95, 1.63), taoConNguoi("lan", 17, 90, 1.70),
        taoConNguoi("thao", 19, 80, 1.65), taoConNguoi("tuyet", 20, 50, 1.50),
        taoConNguoi("mai", 16, 50, 1.70)};

    struct conNguoi *boNhi;
    for (boNhi = ae; boNhi < ae + 5; boNhi++) {
    //for (boNhi = &ae[0]; boNhi < ae + 5; boNhi++){ // phần tử đầu tiên
        printf("%s\n", boNhi->hoTen);
    }
}
