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
    
