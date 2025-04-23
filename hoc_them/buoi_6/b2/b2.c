#include <stdio.h>

int nhap(int a[], int n){
    for (int i = 0; i < n; i++){ 
        scanf("%d", &a[i]); 
    }
}

int sum_array(int a[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){ 
        sum += a[i];
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(a, n);
    printf("%d", sum_array(a, n));
}
