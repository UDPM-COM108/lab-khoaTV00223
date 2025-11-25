#include <stdio.h>

int main() {
    int choose;

    printf("===== MENU =====\n");
    printf("1. Bai 1\n");
    printf("2. Bai 2\n");
    printf("3. Bai 3\n");
    printf("4. Bai 4\n");
    printf("5. Bai 5\n");
    printf("6. Bai 6\n");
    printf("7. Bai 7\n");
    printf("8. Bai 8\n");
    printf("9. Bai 9\n");
    printf("10. Bai 10\n");
    printf("0. Thoat\n");
    printf("===========================\n");

    printf("Nhap lua chon: ");
    scanf("%d", &choose);

    // Không xử lý bài nào, chỉ có menu thôi
    printf("Ban da chon: %d\n", choose);

    return 0;
}
