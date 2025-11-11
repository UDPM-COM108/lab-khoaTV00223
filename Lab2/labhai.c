//BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
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