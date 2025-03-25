#include <stdio.h>

int find_N(double M) {
    double S = 0.0;
    int N = 0;
    while (S <= M) {
        N++;
        S += 1.0 / N;
        if (S > M) {
            return N - 1;
        }
    }

    return 0; // Không có giá trị N thỏa mãn
}

int main() {
    double M;
    scanf("%lf", &M);
    int kq = find_N(M);

    if (kq > 0) {
        printf("%d\n", kq);
    } else {
        printf("NULL\n");
    }

    return 0;
}
