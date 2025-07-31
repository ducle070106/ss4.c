#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Ngay thang nam khong hop le.\n");
        return 0;
    }
    int daysInMonth;
    switch (month) {
    case 4:
    case 6:
    case 9:
    case 11:
        daysInMonth = 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
        break;
    default:
        daysInMonth = 31;
        break;
    }
    if (day > daysInMonth) {
        printf("Ngay thang nam khong hop le.\n");
    } else {
        printf("Ngay %d/%d/%d la ngay hop le.\n", day, month, year);
    }

    return 0;
}