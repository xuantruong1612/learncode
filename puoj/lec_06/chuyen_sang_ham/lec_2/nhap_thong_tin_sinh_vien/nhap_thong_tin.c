#include <stdio.h>
#include <string.h>

void nhap_thong_tin(char ten[], char mssv[], char tuoi[], char que_quan[]) {
    fgets(ten, 50, stdin);
    ten[strcspn(ten, "\n")] = 0;

    fgets(mssv, 10, stdin);
    mssv[strcspn(mssv, "\n")] = 0;

    fgets(tuoi, 3, stdin);
    tuoi[strcspn(tuoi, "\n")] = 0;
    getchar();

    fgets(que_quan, 100, stdin);
    que_quan[strcspn(que_quan, "\n")] = 0;

    printf("Ho ten sinh vien: %s\n", ten);
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Tuoi sinh vien: %s\n", tuoi);
    printf("Que quan: %s\n", que_quan);
}

int main() {
    char ten[50], mssv[10], tuoi[3], que_quan[100];
    nhap_thong_tin(ten, mssv, tuoi, que_quan);
    return 0;
}
