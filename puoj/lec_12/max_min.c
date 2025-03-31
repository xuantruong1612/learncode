#include <stdio.h>

void in(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int findmax(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int findmin(int a[], int n){
    int min = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main (){
    int n;
    scanf("%d", &n);
    int a[n];
    in(a, n);
    int max = findmax(a, n);
    printf("Gia tri lon nhat cua mang la: %d", max);
    int min = findmin(a, n);
    printf("\nGia tri nho nhat cua mang la: %d", min);
}
