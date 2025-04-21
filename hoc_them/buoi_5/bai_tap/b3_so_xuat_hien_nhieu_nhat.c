#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int count[10000] = {0};
    for (int i = 0; i < n; i++){
        count[a[i]]++;
    }
    int dem = 0, result;
    for (int i = 0; i < n; i++){
        if (count[a[i]] > dem){
        dem = count[a[i]];
        result = a[i];
        }
        else if (count[a[i]] == dem){
            if (result > a[i])
                result = a[i];
        }
    }
    printf("%d", result);
}
