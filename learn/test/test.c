#include <stdio.h>

int find_n(int M) {
    double S = 0.0;
    int N = 0;
    while (S <= M) {
        N++;
        S += 1.0 / N;
        if (S > M)
            return N - 1;
    }
    return 0;
}

int main() {
    double M;
    scanf("%lf", &M);
    int kq = find_n(M);
    if (kq > 0)
        printf("%d", kq);
    else 
        printf("NULL");
    return 0;
}
