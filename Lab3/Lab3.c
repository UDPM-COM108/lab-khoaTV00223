#include <stdio.h>
#include <math.h>

// ===== Bài 1 =====
void bai1() {
    double dtb;
    printf("nhap diem tb: ");
    scanf("%lf", &dtb);

    if (dtb >= 9) printf("xuat sac\n");
    else if (dtb >= 8) printf("gioi\n");
    else if (dtb >= 7) printf("kha\n");
    else if (dtb >= 5) printf("trung binh\n");
    else printf("hoc sinh yeu!\n");
}

// ===== Bài 2 =====
void bai2() {
    double a, b;
    printf("nhap a: ");
    scanf("%lf", &a);
    printf("nhap b: ");
    scanf("%lf", &b);

    if (a == 0) {
        if (b == 0) printf("pt vo so nghiem\n");
        else printf("pt vo nghiem\n");
    } else {
        printf("nghiem x = %.2lf\n", -b/a);
    }
}

// ===== Bài 3 =====
void bai3() {
    double a, b, c;

    printf("nhap a: ");
    scanf("%lf", &a);
    printf("nhap b: ");
    scanf("%lf", &b);
    printf("nhap c: ");
    scanf("%lf", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("vo so nghiem\n");
            else printf("vo nghiem\n");
        } else {
            printf("nghiem x = %.2lf\n", -c/b);
        }
    } else {
        double delta = b*b - 4*a*c;

        if (delta < 0) printf("vo nghiem\n");
        else if (delta == 0) printf("nghiem kep x = %.2lf\n", -b/(2*a));
        else {
            printf("x1 = %.2lf\n", (-b + sqrt(delta)) / (2*a));
            printf("x2 = %.2lf\n", (-b - sqrt(delta)) / (2*a));
        }
    }
}

// ===== Bài 4 =====
void bai4() {
    int kwh;
    float tien = 0;

    printf("nhap so dien tieu: ");
    scanf("%d", &kwh);

    if (kwh <= 50) {
        tien = kwh * 1678;
    } else if (kwh <= 100) {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("phai dong: %.0f VND\n", tien);
}

// ===== MENU =====
int main() {
    int choice;

    do {
        printf("\n========= MENU =========\n");
        printf("1. bai 1: tinh hoc luc\n");
        printf("2. bai 2: giai PT bac 1\n");
        printf("3. bai 3: giai PT bac 2\n");
        printf("4. bai 4: tinh tien dien\n");
        printf("0. Thoat\n");
        printf("chon: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 0: printf("thoat...\n"); break;
            default: printf("chon lai\n");
        }
    } while (choice != 0);

    return 0;
}
