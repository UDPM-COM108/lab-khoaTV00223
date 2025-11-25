#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("nhap so a");
    scanf("%d", &a);
    printf("nhap so b");
    scanf("%d", &b);
    int p = ( a + b ) * 2;
    int d = a * b;
    printf ("alo dap an: %d, %d", +p, +d);

    return 0;
}