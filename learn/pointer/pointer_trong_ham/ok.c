#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct conNguoi {
    char hoTen[30];
    int tuoi;
    bool gay;
};
struct conNguoi cN(char ht[], int t) {
    struct conNguoi c;
    strcpy(c.hoTen, ht);
    c.tuoi = t;
    c.gay = true;
    return c;
}

void dieuTra(struct conNguoi *nguoi) {
    printf("Bat dau cho %s xem set gay\n", nguoi->hoTen);
    nguoi->gay = false;
}

int main() {
    struct conNguoi hoiChiEm[3] = {
        cN("sadkjf", 17),
        cN("jsahf", 19),
        cN("Nam", 16),
    };
    printf("Truoc khi gay, em %s %s\n", hoiChiEm[2].hoTen,
           hoiChiEm[2].gay ? "khong gay" : "gay");

    dieuTra(&hoiChiEm[2]);
    printf("Sau khi xem set gay, em %s %s\n", hoiChiEm[2].hoTen,
           hoiChiEm[2].gay ? "khong gay" : "gay");
}
