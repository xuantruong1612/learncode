#include <stdio.h>

void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

int doi_xung(int a[], int n){
    for (int i = 0; i < n / 2; i++){
        if (a[i] != a[n - 1 - i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n]; 
    nhap(a, n);
    if (doi_xung(a, n))
        printf("1");
    else
        printf("-1");
    return 0; 
}
