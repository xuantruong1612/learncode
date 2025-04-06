#include <stdio.h>
#include <stdlib.h>

struct conNguoi {
    int tuoi;
    float vongMot;
    float chieuCao;
};

struct conNguoi taoConNguoi(int t, float v1, float cc) {
    struct conNguoi c;
    c.tuoi = t;
    c.vongMot = v1;
    c.chieuCao = cc;
    return c;
}

int main() {
    struct conNguoi ngocAnh = {18, 95, 1.63};
    struct conNguoi lan = {17, 90, 1.70};
    struct conNguoi khoai = {19, 80, 1.65};

    //    printf("%p\n", (void *)&ngocAnh);  // Địa chỉ biến ngocAnh
    //    printf("%p\n", (void *)&lanAnh); // Địa chỉ biến lanAnh
    //    printf("%p\n", (void *)&lan); // Địa chỉ biến khoai

    struct conNguoi *boNhi;
    boNhi = &lan;
    lan.tuoi = 18;
    printf("tuoi cua lan la: %d\n", boNhi->tuoi);

    boNhi = &khoai;
    khoai.vongMot = 85;
    printf("vong 1 cua khoai la: %.f\n", boNhi->vongMot);

    struct conNguoi *nguoiYeu;
    nguoiYeu = &ngocAnh;
    printf("chieu cao ngoc anh la: %.2f m\n", nguoiYeu->chieuCao);
}
