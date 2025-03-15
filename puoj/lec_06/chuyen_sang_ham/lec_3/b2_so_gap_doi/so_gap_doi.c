#include <stdio.h>

int so_gap_doi (int n) {
    return n*2;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    printf("%d", so_gap_doi(n));

    return 0;
}
