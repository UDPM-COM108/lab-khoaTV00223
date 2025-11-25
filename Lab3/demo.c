//Bài 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC
#include <stdio.h>

int main(){
    double dtb;
    printf("nhap diem tb : ");
    scanf("%lf", &dtb);

    if(dtb >= 9){
        printf("xuat xac");
    }else if (dtb >= 8){
        printf("gioi");
    }else if (dtb >= 7){
        printf("kha");
    }else if (dtb >= 5){
        printf("trung binh");
    }else{
        printf("hoc sinh yeu!");
    }

    return 0;
}

//Bài 2: Giải phương trình bậc nhất
#include <stdio.h>

int main(){
    double a, b;
    printf("nhap a: ");
    scanf("%lf", &a);
    printf("nhap b: ");
    scanf("%lf", &b);

    if(a == 0){
        if(b == 0) printf("pt vo so nghiem");
        else printf("pt vo nghiem");
    }else{
        printf("nghiem x = %.2lf", -b/a);
    }

    return 0;
}

//Bài 3: Giải Phương trình bậc 2
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;

    printf("nhap so a: ");
    scanf("%lf", &a);
    printf("nhap so b: ");
    scanf("%lf", &b);
    printf("nhap so c: ");
    scanf("%lf", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("pt vo so nghiem.");
            } else {
                printf("pt vo nghiem.");
            }
        } else {
            double x = -c / b;
            printf("nghiem x = %.2lf", x);
        }
    }
    else {
        double delta = b*b - 4*a*c;

        if (delta < 0) {
            printf("pt vo nghiem.");
        }
        else if (delta == 0) {
            double x = -b / (2*a);
            printf("pt nghiem kep: x = %.2lf", x);
        }
        else {
            double x1 = (-b + sqrt(delta)) / (2*a);
            double x2 = (-b - sqrt(delta)) / (2*a);

            printf("pt hai nghiem rieng:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }


    return 0;
}

//bai 4 tinh tien dien
#include <stdio.h>

int main() {
    int kwh;
    float tien = 0;

    printf("nhap so dien tieu thu: ");
    scanf("%d", &kwh);

    if (kwh <= 50) {
        tien = kwh * 1678;
    } 
    else if (kwh <= 100) {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    } 
    else if (kwh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } 
    else if (kwh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } 
    else if (kwh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } 
    else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    printf("tien phai dong: %.0f dong\n", tien);

    return 0;
}



