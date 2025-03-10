/*Có bạn đứng thành vòng tròn trên sân, mỗi bạn cầm một bảng và cô giáo đứng ở giữa vòng tròn.
*Khi cô giáo đọc một số thì các bạn đó viết lên bảng số đấy.
*/Bạn hãy cho biết tổng của tất cả các số được ghi trên bảng là bao nhiêu.

#include <stdio.h>

int main () {
    long long n, t;
    scanf("%lld%lld", &n, &t);
    long long vitri = n * t;
    printf ("%lld", vitri);
    return 0;  
}
