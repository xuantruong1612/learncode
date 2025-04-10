#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhVien {
    int masv;
    char ten[30];
};

int main() {
    FILE *fi, *fo;
    fi = fopen("input.txt", "r");
    int n;
    fscanf(fi, "%d ", &n);

    struct sinhVien *sv =
        (struct sinhVien *)malloc(n * sizeof(struct sinhVien));

    for (int i = 0; i < n; i++) {
        fscanf(fi, "%d ", &(sv + i)->masv);
        fgets((sv + i)->ten, sizeof(sv + i)->ten, fi);
        (sv + i)->ten[strcspn((sv + i)->ten, "\n")] = '\0';
    }
    fclose(fi);

    fo = fopen("output.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(fo, "ma: %d\n", (sv + i)->masv);
        fprintf(fo, "ten: %s\n", (sv + i)->ten);
    }
    fclose(fo);
    return 0;
}
