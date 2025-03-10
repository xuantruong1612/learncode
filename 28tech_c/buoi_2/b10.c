#include <stdio.h>

int main() {
    int d1, d2, d3;
    scanf("%d%d%d", &d1, &d2, &d3);
    int ca_3_duong = d1 + d2 + d3;

    int way1, way2;
    if (d2 < d3)
        way1 = 2 * (d1 + d2);
    else
        way1 = 2 * (d2 + d3);

    if (d1 < d3)
        way2 = 2 * (d1 + d2);
    else
        way2 = 2 * (d1 + d3);

    int min_way = ca_3_duong;
    if (way1 < min_way) {
        if (ca_3_duong < way2) {
            min_way = ca_3_duong;
        } else {
            min_way = way2;
        }

        if (way1 < way2) {
            min_way = way1;
        } else {
            min_way = way2;
        }
    }
    printf("%d", min_way);
    return 0;
}
