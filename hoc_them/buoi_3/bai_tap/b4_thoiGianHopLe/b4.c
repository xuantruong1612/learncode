#include <stdio.h>

int main() {
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    int check = 1;

    if ((1980 > year || year > 3000)
        &&(1 > month || month > 12) && (1 > day || day > 31)) check = 0;
    else {
        int maxDay;
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                maxDay = 29;
            } else
                maxDay = 28;
        } else if ((month == 4 || month == 6 || month == 9 || month == 11))
            maxDay = 30;
        else
            maxDay = 31;
        if (day > maxDay)
            check = 0;
    }
    if (check)
        printf("TRUE");
    else
        printf("FALSE");
    return 0;
}
