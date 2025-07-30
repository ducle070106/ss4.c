#include <stdio.h>

int main() {
    int number;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("%d là số dương.\n", number);
    } else if (number < 0) {
        printf("%d là số âm.\n", number);
    } else {
        printf("Bạn đã nhập số 0.\n");
    }

    return 0;
}