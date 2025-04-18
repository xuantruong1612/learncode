#include <stdio.h>

int main(){
    int n, k;
    scanf("%d", &n);
    int a[n + 1];
    for (int i = 0; i <= n; i++){
        scanf("%d", &a[i]);
    }
    printf("nhap vi tri can them: ");
    scanf("%d", &k);
    for (int i = n; i >= k; i--){
        a[i] = a[i - 1];
        printf("nhap so can them: ");
        scanf("%d", &a[k - 1]);
        n++;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
 }
