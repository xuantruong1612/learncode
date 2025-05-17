#include <stdio.h>
#include <math.h>

int main (){
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%lld", (long long)pow(x, y));

    return 0;
}
