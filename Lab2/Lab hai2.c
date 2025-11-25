// Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
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
