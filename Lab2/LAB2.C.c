    /*BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
#include <stdio.h>

int main(){
    int a,b;
    printf("Nhap chieu dai : ");
    scanf("%d", &a);
    printf("Nhap chieu rong :");
    scanf("%d", &b);
    int p = ( a + b ) * 2;
    int d = a * b;
    printf ("chuvi và dientich : %d, %d", +p, +d);

    return 0;
}

/*Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
#include <math.h>
int main(){
    float a;
    printf("Nhap ban kinh : ");
    scanf("%f", &a);
    float pi = 3.14;
    float p = 2 * pi * a;
    float d = pi * a * a;
    printf("chuvi va dientich : %.2f, %.2f", +p, +d);

    return 0;
}
bai 4
#include <stdio.h>
int main() {
    float a, b, c, tb;
    printf("Nhap diem Toan: ");
    scanf("%f", &a);
    printf("Nhap diem Ly: ");
    scanf("%f", &b);
    printf("Nhap diem Hoa: ");
    scanf("%f", &c);
    tb = (a * 3 + b * 2 + c * 1) / 6;

    printf("Diem trung binh: %.2f\n", tb);

    return 0;
}
   
bai 5
#include <stdio.h>
int main(){
    float a, b, c, chuvi, dientich;
    printf("nhap a : ");
    scanf("%f", &a);
    printf("nhap b : ");
    scanf("%f", &b);
    printf("nhap c : ");
    scanf("%f", &c);
    printf("nhap chu vi: ");
    scanf("%f", &chuvi);
    printf("nhap dien tich: ");
    scanf("%f", &dientich);
    chuvi = a + b + c;
    dientich = (a * b) / 2;
    printf("chu vi tam giac: %.2f\n", chuvi);
    printf("dien tich tam giac: %.2f\n", dientich);

    return 0;
}
    