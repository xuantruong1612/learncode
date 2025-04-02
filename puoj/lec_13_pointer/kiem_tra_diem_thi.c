/* Cho một danh sách điểm thi cuối kỳ môn Cấu trúc dữ liệu và thuật toán của 
* sinh viên gồm mã số sinh viên và điểm sinh viên.
* In ra điểm thi của sinh viên có mã số sinh viên. */

#include <stdio.h>

int main () {
    int n, mssv;
    scanf ("%d%d", &n, &mssv);
    int ms, diem, find = 0;
    for (int i = 0; i < n; i++){
            scanf("%d %d", &ms, &diem);
            if (ms == mssv){
                printf("%d", diem);
                find = 1;
                break;
            }                   
    }
    if(!find){
        printf("No data\n");
    }
    return 0;

}
