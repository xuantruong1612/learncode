/* Một sinh viên có các thống số sau:

* - Mã sinh viên (có 8 ký tự số)
* - Tên sinh viên (nhiều hơn 5 ký tự và không quá 30 ký tự bao gồm ký tự trắng)
* - Điểm GPA (là số thực nằm trong khoảng từ 0 đến 4)
* Cho n thông tin sinh viên đã chuẩn, bạn hãy kiểm tra xem có bao nhiêu sinh viên K18
* có kết quả học trung bình.

* Biết rằng sinh viên K18 thì có hai ký tự đầu của mã sinh viên là 24, sinh viên
* có kết quả học trung bình là sinh viên có GPA nằm trong đoạn từ 2.0 đến nhỏ
* hơn 2.5

* INPUT:
* Một dòng duy nhất chứa số nguyên n.
* Tiếp theo là 3 * n dòng chứa thông tin của n sinh viên. Mỗi thông tin của sinh viên sẽ lưu trên
* một dòng 
* OUTPUT: Một số nguyên duy nhất là số sinh viên cần tìm.
* input:
* 2
* 21223344
* Nguyen Hoang Duong
* 2.1
* 24334435
* Bui Minh Duc
* 3.2 
* ouput:
* 0
*/

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    int count = 0;

    for (int i = 0; i < n; i++) {
        char maSV[20];
        char tenSV[100];
        float gpa;

        fgets(maSV, sizeof(maSV), stdin);
        maSV[strcspn(maSV, "\n")] = '\0';

        fgets(tenSV, sizeof(tenSV), stdin);
        tenSV[strcspn(tenSV, "\n")] = '\0';

        scanf("%f", &gpa);
        getchar();

        if (strncmp(maSV, "24", 2) == 0 && gpa >= 2.0 && gpa < 2.5) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
