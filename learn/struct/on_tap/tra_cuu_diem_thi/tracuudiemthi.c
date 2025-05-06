#include <stdio.h>
#include <stdbool.h>

void nhap(int mssv[], int diem[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &mssv[i], &diem[i]);
    }
}

void find(int mssv[], int diem[], int n, int mssvcantim) {
    bool co = false;
    for (int i = 0; i < n; i++) {
        if (mssv[i] == mssvcantim) {
            printf("%d", diem[i]);
            co = true;
            break;
        }
    }
    if (!co)
        printf("No data");
}

int main() {
    int n, mssvcantim;
    scanf("%d%d", &n, &mssvcantim);
    int mssv[n];
    int diem[n];
    nhap(mssv, diem, n);
    find(mssv, diem, n, mssvcantim);

    return 0;
}
