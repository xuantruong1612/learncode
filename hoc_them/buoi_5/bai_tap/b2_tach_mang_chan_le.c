#include <stdio.h>

int main(){
    int n;
    int a[1000];
    scanf("%d", &n);
    int chan[1000], le[1000];
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            chan[count1++] = a[i];
        }
        else {
            le[count2++] = a[i];
        }
    }
    for (int i = 0; i < count2; i++){
        printf("%d ", le[i]);
    }
    printf("\n");
    for (int i = 0; i < count1; i++){
        printf("%d ", chan[i]);
    }
    return 0;
}
