#include <stdio.h>
#include <math.h>
void bai1(){
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
    else printf("x ko la so nguyen to\n");
    int r = sqrt(x);
    if(r*r == x) printf("x la so chinh phuong\n");
    else printf("x ko la so chinh phong\n");
}
void bai2(){
    int x, y;
    printf("nhap x: ");
    scanf("%d", &x);
    printf("nhap y: ");
    scanf("%d", &y);
    int a = x, b = y;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    int ucln = a;
    int bcnn = (x / ucln) * y;
    printf("uoc chung lon nhat= %d\n", ucln);
    printf("boi chung nho nhat= %d\n", bcnn);
}

void bai3(){
    int bd, kt;
    printf("nhap gio bat dau: ");
    scanf("%d", &bd);
    printf("nhap gio ket thuc: ");
    scanf("%d", &kt);
    if (bd < 12 || kt > 23 || bd >= kt) {
        printf("thoi gian khong hop le!\n");
        return;
    }

    int gio = kt - bd;
    double tien;
    if (gio <= 3) tien = gio * 150000;
    else tien = 3 * 150000 + (gio - 3) * (150000 * 0.7);
    if (bd >= 14 && bd <= 17) tien *= 0.9;
    printf("tien karaoke: %.0lf VND\n", tien);
}

void bai4(){
    int kwh;
    double tien = 0;
    printf("nhap kwh: ");
    scanf("%d", &kwh);
    if (kwh <= 50) tien = kwh * 1678;
    else if (kwh <= 100) tien = 50*1678 + (kwh-50)*1734;
    else if (kwh <= 200) tien = 50*1678 + 50*1734 + (kwh-100)*2014;
    else if (kwh <= 300) tien = 50*1678 + 50*1734 + 100*2014 + (kwh-200)*2536;
    else if (kwh <= 400) tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kwh-300)*2834;
    else tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kwh-400)*2927;
    printf("tien dien: %.0lf VND\n", tien);
}

void bai5(){
    int money;
    printf("nhap so tien: "); scanf("%d",&money);
    while(money>=500){ printf("500: %d to\n",money/500); money=money%500; }
    while(money>=200){ printf("200: %d to\n",money/200); money=money%200; }
    while(money>=100){ printf("100: %d to\n",money/100); money=money%100; }
    while(money>=50){ printf("50: %d to\n",money/50); money=money%50; }
    while(money>=20){ printf("20: %d to\n",money/20); money=money%20; }
    while(money>=10){ printf("10: %d to\n",money/10); money=money%10; }
    while(money>=5){ printf("5: %d to\n",money/5); money=money%5; }
    while(money>=2){ printf("2: %d to\n",money/2); money=money%2; }
    while(money>=1){ printf("1: %d to\n",money/1); money=money%1; }
}

void bai6(){
    double vay;
    printf("nhap so tien vay: "); scanf("%lf",&vay);
    double goc=vay/12,lai=0.05;
    int i=1;
    while(i<=12){
        double tra=goc+vay*lai;
        vay-=goc;
        printf("thang %d: %.0lf\n",i,tra);
        i=i+1;
    }
}
void bai7(){
    int phantram;
    printf("nhap phan tram vay (vd 80): ");
    scanf("%d", &phantram);
    int giatri = 500000000;
    int vay = giatri * phantram / 100;
    int tratruoc = giatri - vay;
    printf("tra truoc: %d\n", tratruoc);
    int goc = vay / 24;
    double laisuat = 0.006; 
    int thang = 1;
    while (thang <= 24) {
        int tienlai = vay * laisuat;
        int tra = goc + tienlai;
        printf("thang %d: %d\n", thang, tra);
        vay -= goc;
        thang++;
    }
}

void bai8(){
    int n;
    printf("nhap so sinh vien: ");
    scanf("%d", &n);
    char ten[50][50];
    float diem[50];
    int i = 0;
    while (i < n){
        printf("nhap ten: ");
        scanf("%s", ten[i]);
        printf("nhap diem: ");
        scanf("%f", &diem[i]);
        i=i+1;
       
    }

    printf("\n=== danh sach sinh vien ===\n");
    i = 0;
    while (i < n){
        printf("%s - %.2f - ", ten[i], diem[i]);
        if (diem[i] >= 9) printf("xuat sac\n");
        else if (diem[i] >= 8) printf("gioi\n");
        else if (diem[i] >= 6.5) printf("kha\n");
        else if (diem[i] >= 5) printf("trung binh\n");
        else printf("yeu\n");
        i=i+1;
        
    }
}


void bai9(){
    int a, b;
    printf("nhap so 1 (1-15): ");
    scanf("%d", &a);
    printf("nhap so 2 (1-15): ");
    scanf("%d", &b);
    int x = (a * 7 + 3) % 15 + 1;
    int y = (b * 11 + 5) % 15 + 1;
    printf("so trung: %d - %d\n", x, y);
    int trung = 0;
    if (a == x || a == y) trung++;
    if (b == x || b == y) trung++;
    if (trung == 0) printf("tạch\n");
    else if (trung == 1) printf(" giai nhi\n");
    else printf("trúng ròi!1!1\n");
}

void bai10(){
    int a, b, c, d;
    printf("nhap phan so 1 (a b): ");
    scanf("%d %d", &a, &b);
    printf("nhap phan so 2 (c d): ");
    scanf("%d %d", &c, &d);
    printf("tong = %d/%d\n", a*d + b*c, b*d);
    printf("hieu = %d/%d\n", a*d - b*c, b*d);
    printf("tich = %d/%d\n", a*c, b*d);
    printf("thuong = %d/%d\n", a*d, b*c);
}

int main(){
    int chon;

    do{
        printf("\n========= menu =========\n");
        printf("1. bai 1: kiem tra so nguyen\n");
        printf("2. bai 2: uclt,bcnt\n");
        printf("3. bai 3: karaoke\n");
        printf("4. bai 4: tien dien\n");
        printf("5. bai 5: doi tien\n");
        printf("6. bai 6: lai suat\n");
        printf("7. bai 7: mua xe\n");
        printf("8. bai 8: sinh vien\n");
        printf("9. bai 9: fpt lottery \n");
        printf("10. bai 10: tinh phan so\n");
        printf("0. thoat\n");
        printf("chon: ");
        scanf("%d", &chon);
        switch(chon){
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 4: bai4(); break;
            case 5: bai5(); break;
            case 6: bai6(); break;
            case 7: bai7(); break;
            case 8: bai8(); break;
            case 9: bai9(); break;
            case 10: bai10(); break;
            case 0: printf("sủi\n"); break;
            default: printf("chon lai\n");
        }
    } while(chon != 0);

    return 0;
}
