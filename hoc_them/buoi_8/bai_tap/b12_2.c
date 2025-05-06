#include <stdio.h>

double* maximum(double* a, int size) {
    if (size == 0) {
        return NULL;
    }

    double* maxPtr = &a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > *maxPtr) {
            maxPtr = &a[i];
        }
    }
    return maxPtr;
}

int main() {
    int size;
    scanf("%d", &size);

    if (size <= 0) {
        printf("Mang rong.\n");
        return 0;
    }

    double a[size];
    for (int i = 0; i < size; i++) {
        scanf("%lf", &a[i]);
    }

    double* maxValue = maximum(a, size);
    if (maxValue != NULL) {
        printf("Gia tri lon nhat: %.2lf\n", *maxValue);
    } else {
        printf("Mang rong.\n");
    }

    return 0;
}
