#include <stdio.h>
#include <math.h>
int main(){
    int x;
    printf("nhap x: ");
    scanf("%d", &x);
    printf("x la so nguyen\n");
    int nt = 1;
    if(x < 2) nt = 0;
    else {
        int i = 2;
        while(i <= sqrt(x)) {
            if(x % i == 0) { nt = 0; break; }
            i = i + 1;
        }
    }

    if(nt) printf("x la so nguyen to\n");
    else printf("x KHONG la so nguyen to\n");

    int a = sqrt(x);
    if(a*a== x) printf("x la so chinh phuong\n");
    else printf("x KHONG la so chinh phuong\n");
}