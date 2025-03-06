#include <stdio.h>

int main () {
    double d;
    scanf ("%lf", &d);
    if (d >= 9 && d <= 10) printf ("A+");
    else if (d >= 8.5 && d < 9) printf ("B+");
    else if (d >= 7 && d < 8) printf ("B");
    else if (d >= 6.5 && d < 7) printf ("C+");
    else if (d >= 5.5 && d < 6.5) printf ("C");
    else if (d >= 5 && d < 5.5) printf ("D+");
    else if (d >= 4 && d < 5) printf ("D");
    else if (d >= 0 && d < 4) printf ("F");
    else printf("khong hop le");
    return 0;
}
