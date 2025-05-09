#include <stdio.h>
#include <string.h>

typedef struct {
    char ten[100];
    int nam;
    double chieucao;
    double cannang;
} bmi;

void nhap(bmi *b, int *n, int soluong, int hsd) {
    printf("nhap so thong tin: ");
    scanf("%d", n);
    getchar();
    for (int i = 0; i < *n; i++) {
        printf("nhap ten: ");
        fgets(b[i].ten, sizeof(b[i].ten), stdin);
        b[i].ten[strcspn(b[i].ten, "\n")] = '\0';
        while (strlen(b[i].ten) >= 100) {
            printf("sai, nhap lai\n");
            fgets(b[i].ten, sizeof(b[i].ten), stdin);
        }

        printf("nhap chieu cao (m): ");
        scanf("%lf", &b[i].chieucao);
        printf("nhap can nang (kg): ");
        scanf("%lf", &b[i].cannang);
        getchar();

        do {
            printf("nhap nam sinh: ");
            scanf("%d", &b[i].nam);
            getchar();
            if (b[i].nam < 1900 || b[i].nam > 2023) {
                printf("sai, nhap lai\n");
            }
        } while (b[i].nam < 1900 || b[i].nam > 2023);

        // do {
        //     printf("nhap so luong: ");
        //     scanf("%d", &soluong);
        //     if (soluong < 0) {
        //         printf("sai, nhap lai \n");
        //     }
        // } while (soluong < 0);
        // do {
        //     printf("nhap hsd: ");
        //     scanf("%d", &hsd);
        //     getchar();
        //     if (hsd < 0) {
        //         printf("sai, nhap lai\n");
        //     }
        // } while (hsd < 0);
    }
}

void tuoi(bmi *b, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int tuoi = 2023 - b[i].nam;
        if (tuoi >= 45 && tuoi <= 65) {
            count++;
        }
    }
    printf("so luong khach hang tu 45 den 65 la: %d\n", count);
}

void in(bmi *b, int n) {
    printf("%-5s|%-15s|%-10s|%-10s\n", "STT", "TEN", "NAM SINH", "BMI");
    for (int i = 0; i < n; i++) {
        double bmi = b[i].cannang / (b[i].chieucao * b[i].chieucao);
        printf("%-5d|%-15s|%-10d|%-10.1lf\n", i + 1, b[i].ten, b[i].nam, bmi);
    }
}

void sapxep(bmi *b, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            double bmi1 = b[i].cannang / (b[i].chieucao * b[i].chieucao);
            double bmi2 = b[j].cannang / (b[j].chieucao * b[j].chieucao);
            if (bmi1 > bmi2) {
                bmi temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

void bmi_min(bmi *b, int n) {
    int m;
    do {
        printf("nhap m < n: ");
        scanf("%d", &m);
        if (m <= 0 || m > n)
            printf("sai, nhap lai\n");
    } while (m <= 0 || m > n);
    sapxep(b, n);
    printf("%-5s|%-15s|%-10s|%-10s\n", "STT", "TEN", "NAM SINH", "BMI");
    for (int i = 0; i < m; i++) {
        double bmi = b[i].cannang / (b[i].chieucao * b[i].chieucao);
        printf("%-5d|%-15s|%-10d|%-10.1lf\n", i + 1, b[i].ten, b[i].nam, bmi);
    }
}
int main() {
    int n;
    int soluong;
    int hsd;
    bmi b[1000];
    nhap(b, &n, soluong, hsd);
    tuoi(b, n);
    sapxep(b, n);
    in(b, n);
    bmi_min(b, n);
}
