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
