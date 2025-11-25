#include <stdio.h>

int main(){
    float a, b, tong, hieu;
    char ten;
    printf("Nhap a")
    scanf("%f" ,%a );
    printf("Mhap b")
    scanf("%f" ,&b);
    printf("nhap ten cua ban");
    scanf("%s" , &ten);
    tong = a + b;
    hieu = a - b;
    printf("ket qua tong: %d" ,tong);
    printf("ket qua hieu: %d" ,hieu);
    return 0;
}