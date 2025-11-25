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


