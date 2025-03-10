/*Trump là sinh viên mới nhập trường đại học Phenikaa. Trump chưa biết tính điểm chữ như thế nào. Bạn hãy giúp Trump
*Điểm nằm trong khoảng từ 0 đến nhỏ hơn 4 là F
*Điểm nằm trong khoảng từ 4 đến nhỏ hơn 5 là D
*Điểm nằm trong khoảng từ 5 đến nhỏ hơn 5.5 là D+
*Điểm nằm trong khoảng từ 5.5 đến nhỏ hơn 6.5 là C
*Điểm nằm trong khoảng từ 6.5 đến nhỏ hơn 7 là C+
*Điểm nằm trong khoảng từ 7 đến nhỏ hơn 8 là B
*Điểm nằm trong khoảng từ 8 đến nhỏ hơn 8.5 là B+
*Điểm nằm trong khoảng từ 8.5 đến nhỏ hơn 9 là A
*Điểm nằm trong khoảng từ 9 đến nhỏ hơn hoặc bằng 10 là A+
*/
#include <stdio.h>

int main () {
    double d;
    scanf ("%lf", &d);
    if (d >= 9 && d <= 10) printf ("A+");
    else if (d >= 8.5 && d < 9) printf ("A");
    else if (d >= 8 && d <= 8.5) printf ("B+");
    else if (d >= 7 && d < 8) printf ("B");
    else if (d >= 6.5 && d < 7) printf ("C+");
    else if (d >= 5.5 && d < 6.5) printf ("C");
    else if (d >= 5 && d < 5.5) printf ("D+");
    else if (d >= 4 && d < 5) printf ("D");
    else if (d >= 0 && d < 4) printf ("F");
    else printf("khong hop le");
    return 0;
}
