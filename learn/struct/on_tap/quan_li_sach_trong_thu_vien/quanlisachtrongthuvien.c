#include <stdio.h>
#include <string.h>

struct thuVien {
    char tenSach[50];
    int maSach;
    char tenTG[50];
    int nam;
    int soluong;
};

void nhap(FILE *fi, struct thuVien *tv, int *n) {
    fscanf(fi, "%d", n);

    for (int i = 0; i < *n; i++) {
        fscanf(fi, "%d %s %s %d %d", &tv[i].maSach, tv[i].tenSach, tv[i].tenTG,
               &tv[i].nam, &tv[i].soluong);
    }
}

void sapxep(struct thuVien tv[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (tv[i].nam > tv[j].nam ||
                (tv[i].nam == tv[j].nam && tv[i].maSach > tv[j].maSach)) {
                struct thuVien temp = tv[i];
                tv[i] = tv[j];
                tv[j] = temp;
            }
        }
    }
}

void in(FILE *fo, struct thuVien *tv, int n) {
    for (int i = 0; i < n; i++) {
        fprintf(fo, "%d %s %s %d %d\n", tv[i].maSach, tv[i].tenSach,
                tv[i].tenTG, tv[i].nam, tv[i].soluong);
    }
}

int main() {
    FILE *fi, *fo;
    fi = fopen("input.txt", "r");
    fo = fopen("output.txt", "w");
    struct thuVien tv[1000];
    int n;
    nhap(fi, tv, &n);
    sapxep(tv, n);
    in(fo, tv, n);
    fclose(fi);
    fclose(fo);
    return 0;
}
