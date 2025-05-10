#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[100];
    int nam;
    double chieucao;
    double cannang;
} khachhang;

void nhap(khachhang *kh, int *n) {
    printf("nhap so khach hang: ");
    scanf("%d", n);
    getchar();
    for (int i = 0; i < *n; i++) {
        printf("nhap ten: ");
        fgets(kh[i].ten, sizeof(kh[i].ten), stdin);
        kh[i].ten[strcspn(kh[i].ten, "\n")] = '\0';

        do {
            printf("nhap nam sinh: ");
            scanf("%d", &kh[i].nam);
            getchar();
            if (kh[i].nam < 1900 || kh[i].nam > 2023) {
                printf("sai, nhap lai\n");
            }
        } while (kh[i].nam < 1900 || kh[i].nam > 2023);
        do {
            printf("nhap chieu cao (m): ");
            scanf("%lf", &kh[i].chieucao);
            if (kh[i].chieucao <= 0) {
                printf("sai, nhap lai\n");
            }
        } while (kh[i].chieucao <= 0);
        do {
            printf("nhap can nang (kg): ");
            scanf("%lf", &kh[i].cannang);
            getchar();
            if (kh[i].cannang <= 0) {
                printf("sai, nhap lai\n");
            }
        } while (kh[i].cannang <= 0);
    }
}

void in(khachhang *kh, int n) {
    printf("%-5s|%-20s|%-10s|%-5s\n", "STT", "TEN", "NAM SINH", "BMI");
    for (int i = 0; i < n; i++) {
        double bmi = kh[i].cannang / (kh[i].chieucao * kh[i].chieucao);
        printf("%-5d|%-20s|%-10d|%-5.1lf\n", i + 1, kh[i].ten, kh[i].nam, bmi);
    }
}

void sapxep(khachhang *kh, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double bmi1 = kh[i].cannang / (kh[i].chieucao * kh[i].chieucao);
            double bmi2 = kh[j].cannang / (kh[j].chieucao * kh[j].chieucao);
            if (bmi1 > bmi2) {
                khachhang temp = kh[i];
                kh[i] = kh[j];
                kh[j] = temp;
            }
        }
    }
}

void tuoi(khachhang *kh, int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        int tuoi = 2023 - kh[i].nam;
        if (tuoi >= 45 && tuoi <= 65) {
            dem++;
        }
    }
    printf("tuoi nam trong 45 den 65 la: %d\n", dem);
}

void bmi_min(khachhang *kh, int n) {
    sapxep(kh, n);
    int m;
    do {
        printf("nhap m <= n: ");
        scanf("%d", &m);
        if (m <= 0 || m > n) {
            printf("sai, nhap lai\n");
        }
    } while (m <= 0 || m > n);
    printf("%-5s|%-20s|%-10s|%-5s\n", "STT", "TEN", "NAM SINH", "BMI");
    for (int i = 0; i < m; i++) {
        double bmi = kh[i].cannang / (kh[i].chieucao * kh[i].chieucao);
        printf("%-5d|%-20s|%-10d|%-5.1lf\n", i + 1, kh[i].ten, kh[i].nam, bmi);
    }
}

int main() {
    int n;
    khachhang kh[1000];
    nhap(kh, &n);
    in(kh, n);
    tuoi(kh, n);
    printf("sau khi sap xep theo bmi\n");
    sapxep(kh, n);
    in(kh, n);
    printf("sau khi sap xep bmi thap nhat theo m\n");
    bmi_min(kh, n);
}
