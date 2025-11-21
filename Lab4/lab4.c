#include <stdio.h>
#include <math.h>
void bai1(){
    int min, max;
    printf("nhap min: ");
    scanf("%d", &min);
    printf("nhap max: ");
    scanf("%d", &max);

    int i = min;
    float tong = 0;
    float dem = 0;

    while (i <= max) {
        if (i % 2 == 0) {
            tong = tong + i;
            dem = dem + 1;
        }
        i = i + 1;
    }

    if (dem == 0) {
        printf("khong co so chan\n");
    } else {
        float tb = tong / dem;
        printf("trung binh = %.2f\n", tb);
    }
}

void bai2(){
    int x;
    printf("nhap x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("khong phai so nguyen to\n");
        return;
    }

    int i = 2;
    int dem = 0;

    while (i < x) {
        if (x % i == 0) {
            dem = dem + 1;
        }
        i = i + 1;
    }

    if (dem == 0)
        printf("la so nguyen to\n");
    else
        printf("khong phai so nguyen to\n");
}

void bai3(){
    int x;
    printf("nhap x: ");
    scanf("%d", &x);

    int i = 1;
    int lc = 0;

    while (i <= x) {
        if (i * i == x) {
            lc = 1;
            break;
        }
        i = i + 1;
    }

    if (lc == 1)
        printf("la so chinh phuong\n");
    else
        printf("khong phai so chinh phuong\n");
}

void bai4(){
    int x;
    printf("nhap so thap phan: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("nhi phan = 0\n");
        return;
    }

    int arr[32];
    int i = 0;

    while (x > 0) {
        arr[i] = x % 2;
        x = x / 2;
        i = i + 1;
    }

    printf("nhi phan = ");
    i = i - 1;
    while (i >= 0) {
        printf("%d", arr[i]);
        i = i - 1;
    }
    printf("\n");
}

int main(){
    int chon;
   do{
        printf("\n========= menlu =========\n");
        printf("1. bai 1:trung binh cac so chan\n");
        printf("2. bai 2:kiem tra so nguyen to\n");
        printf("3. bai 3:kiem tra so chinh phuong\n");
        printf("4. bai 4:thap phan sang nhi phan\n");
        printf("0. thoat\n");
        printf("chon: ");
        scanf("%d", &chon);
        switch(chon){
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 0: printf("sủi...\n"); break;
            default: printf("chon lai;)))\n");
        }
    } while(chon != 0);

    return 0;
}
