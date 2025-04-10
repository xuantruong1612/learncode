#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct sv {
    char ma[100];
    char ten[100];
    float GPA;
};
typedef struct sv sv;
void nhap(sv *a) {
    scanf("%s", a->ma);
    getchar();
    fgets(a->ten, sizeof(a->ten), stdin);
    scanf("%f", &a->GPA);
}
void in(sv a) { printf("%s\n%s\n%f\n", a.ma, a.ten, a.GPA); }
void sx(sv a[], int n) {
    for (int i = 0; i < n; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j].GPA < a[max].GPA) {
                max = j;
            }
        }
        sv temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    sv a[n];
    for (int i = 0; i < n; i++)
        nhap(&a[i]);

    sx(a, n);
    for (int i = 0; i < n; i++) {
        printf("%s ", a[i].ma);
    }
}
