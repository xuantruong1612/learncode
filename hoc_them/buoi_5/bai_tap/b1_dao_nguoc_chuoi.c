#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char a[1000][1000];
    for (int i = 0; i < n; i++){
        scanf("%s", a[i]);
    }
    for (int i = n - 1; i >= 0; i--){
        for (int j = strlen(a[i]) - 1; j >= 0; j--){
            printf("%c", a[i][j]);
        }
        printf(" ");
    }
    return 0;
}
