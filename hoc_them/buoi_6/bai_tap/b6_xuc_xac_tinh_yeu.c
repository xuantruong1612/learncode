#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LAN_TUNG 100

int main() {
    int thongKe[13] = {0}; 
    int xucXac1, xucXac2, tong;

    srand(time(NULL));

    for (int i = 0; i < LAN_TUNG; i++) {
        xucXac1 = rand() % 6 + 1;
        xucXac2 = rand() % 6 + 1;
        tong = xucXac1 + xucXac2;
        thongKe[tong]++;
    }

    printf("Diem cam xuc:     ");
    for (int i = 2; i <= 12; i++) {
        printf("%2d ", i);
    }
    printf("\nSo lan rung dong: ");
    for (int i = 2; i <= 12; i++) {
        printf("%2d ", thongKe[i]);
    }
    printf("\n");

    return 0;
}
