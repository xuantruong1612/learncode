// Đóng mở file

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fi, *fo;
    int n;

    // Mở file để đọc
    fi = fopen("input.txt", "r");
    fscanf(fi, "%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        fscanf(fi, "%d", &a[i]);
    }
    fclose(fi);  // Đóng file sau khi đọc

    // Mở file để ghi
    fo = fopen("output.txt", "w");

    for (int i = 0; i < n; i++) {
        fprintf(fo, "%d ", a[i]);
    }

    fclose(fo);  // Đóng file sau khi ghi
    return 0;
}
