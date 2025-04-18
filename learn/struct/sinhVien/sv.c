#include <stdio.h>
#include <string.h>

struct sinhVien{
    char ma[20];
    char ten[100];
    float gpa;
};

void nhapThongTin(struct sinhVien sv[], int n){
    for (int i = 0; i < n; i++){
        fgets(sv[i].ma, sizeof(sv[i].ma), stdin);
        sv[i].ma[strcspn(sv[i].ma, "\n")] = '\0';
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0';
        scanf("%f", &sv[i].gpa);
        getchar();
    }
}

void inThongTin(struct sinhVien sv){
    printf("ma: %s", sv.ma);
    printf("ten: %s", sv.ten);
    printf("gpa: %.2f", sv.gpa);
}

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    
    struct sinhVien ds[n];
    nhapThongTin (ds, n);

    int count = 0;
    for (int i = 0; i < n; i++){
        if (strncmp(ds[i].ma, "24", 2) == 0 && ds[i].gpa >= 2.0 && ds[i].gpa < 2.5){
            count++;
        }
    }
    printf("%d", count);
}
