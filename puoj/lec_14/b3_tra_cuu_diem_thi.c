// Tra cuu diem thi

#include <stdio.h>

void input(int sinhvien[], int diem[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d %d", &sinhvien[i], &diem[i]);
    }
}

void tracuu (int sinhvien[], int diem[], int mssv, int n) {
    int found = 0;
    for (int i = 0; i < n; i++){
    if(sinhvien[i] == mssv){
        printf("%d", diem[i]);
        found = 1;
        break;
    }
}
    if (!found){
        printf("No data");
    }
}

int main () {
    int n, mssv;
    scanf("%d %d", &n, &mssv);
    int sinhvien[n];
    int diem[n];
    input(sinhvien, diem, n);
    tracuu(sinhvien, diem, mssv, n);

    return 0;
}
