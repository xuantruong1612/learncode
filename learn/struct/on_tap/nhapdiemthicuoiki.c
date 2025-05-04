#include <stdio.h>

void nhap(int mssv[], int diem[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &mssv[i], &diem[i]);
    }
}

void themsv(int mssv[], int diem[], int *n, int mssvthem, int diemthem) {
    int vitrichen = *n; // chèn mặc định là cuối mảng
    for (int i = 0; i < *n; i++) {
        if (mssvthem < mssv[i]) {
            vitrichen = i;
            break;
        }
    }
    for (int i = *n; i > vitrichen; i--) {
        mssv[i] = mssv[i - 1];
        diem[i] = diem[i - 1];
    }
    mssv[vitrichen] = mssvthem;
    diem[vitrichen] = diemthem;

    (*n)++;
}

void in(int mssv[], int diem[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", mssv[i], diem[i]);
    }
}

int main() {
    int n, mssvthem, diemthem;
    scanf("%d%d%d", &n, &mssvthem, &diemthem);
    int mssv[101];
    int diem[101];
    nhap(mssv, diem, n);
    themsv(mssv, diem, &n, mssvthem, diemthem);
    in(mssv, diem, n);

    return 0;
}
