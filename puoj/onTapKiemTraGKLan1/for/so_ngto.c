#include <stdio.h>

int so_ngto(int n){
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i ++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main (){
    int n;
    scanf("%d", &n);
    if (so_ngto(n) == 1) printf("YES");
    else printf ("NO");
}
