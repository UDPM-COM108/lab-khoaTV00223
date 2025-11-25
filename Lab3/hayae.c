 #include <stdio.h>

int main(){
    printf("vn co bao nhieu ae?\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n ");
    printf("chon di cu");
    char dapan;
    scanf("%s", &dapan);
    switch(dapan){
        case 'a' : printf("m sai haha\n");
        break;
        case 'b' : printf("m sai haha\n");
        break;
        case 'c' : printf("ok m dung\n");
        break;
        case 'd' : printf("m sai haha\n");
        break;
        default:
            printf("m chon a b c d coi");

    }

    

}