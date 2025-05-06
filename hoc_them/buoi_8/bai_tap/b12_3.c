#include <stdio.h>

void nhap(int a[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
}

void reversearray(int *arr, int size) {
    int i = 0, j = size - 1, tmp;
    while (i < j) {
        tmp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = tmp;
        i++;
        j--;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size;
    scanf("%d", &size);
    int a[size];
    nhap(a, size);
    printArray(a, size);
    reversearray(a, size);
    printArray(a, size);

    return 0;
}
