#include <stdio.h>

int main(){
    double dtb;
    printf("nhap diem tb");
    scanf("%lf" , &dtb);
    if(dtb>=9){
        printf("xuat xasc");
    }else if (dtb>=8){
        printf("gioi");
    }else if (dtb>=7){
        printf("kha");
    }else if (dtb>=5){
        printf("trung binh");
    }else{
    }    printf("hay may");
    
    return 0;

}


