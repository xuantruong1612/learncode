#include <stdio.h>

int main(){
    double C; // celsius
    scanf("%lf", &C);
    double K = 273.15 + C;
    printf("%.2lf", K);

    return 0;
}
