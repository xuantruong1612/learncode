
#include <stdio.h>

int main() {
    FILE *fi, *fo;
    int n;

    fi = fopen("input.txt", "r");
    fscanf(fi, "%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        fscanf(fi, "%d", &a[i]);
    }
    fclose(fi);
    fo = fopen("output.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(fo, "%d ", a[i]);
    }
    fclose(fo);
    return 0;
}
