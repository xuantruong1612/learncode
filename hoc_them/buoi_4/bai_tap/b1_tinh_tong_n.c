#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("%d", n);
        return 0;
    }

    int result = 0;
    for (int i = 0; i <= n; i++){
        if (i % 2 == 0)
            result += i;
    }
    printf("%d", result);
    return 0;
}
