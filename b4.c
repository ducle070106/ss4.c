#include <stdio.h>

int main() {
    int thang, nam;
    printf("Nhập vào tháng (1-12): ");
    scanf("%d", &thang);
    switch (thang) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Tháng %d có 31 ngày.\n", thang);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("Tháng %d có 30 ngày.\n", thang);
        break;
    case 2:
        printf("Mời nhập vào năm: ");
        scanf("%d", &nam);
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
            printf("Tháng 2 năm %d có 29 ngày (năm nhuận).\n", nam);
        } else {
            printf("Tháng 2 năm %d có 28 ngày.\n", nam);
        }
        break;
    default:
        printf("Số tháng không hợp lệ. Vui lòng nhập một số từ 1 đến 12.\n");
        break;
    }

    return 0;
}