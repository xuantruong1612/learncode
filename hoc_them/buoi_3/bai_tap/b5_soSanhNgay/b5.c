#include <stdio.h>

int main() {
    int year1, month1, day1;
    int year2, month2, day2;
    scanf("%d%d%d", &year1, &month1, &day1);
    scanf("%d%d%d", &year2, &month2, &day2);

    if (year1 > year2)
        printf("1");
    else if (year1 < year2)
        printf("-1");
    else {
        if (month1 < month2)
            printf("-1");
        else if (month1 > month2)
            printf("1");
        else {
            if (day1 < day2)
                printf("-1");
            else if (day1 > day2)
                printf("1");
            else
                printf("0");
        }
    }
    return 0;
}
