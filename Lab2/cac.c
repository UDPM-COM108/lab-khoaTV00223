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
    
