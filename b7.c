#include <stdio.h>

int main() {
    int nam;
    printf("Nhập vào một năm: ");
    scanf("%d", &nam);
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        printf("Kết quả: Năm %d là một năm nhuận.\n", nam);
    } else {
        printf("Kết quả: Năm %d không phải là năm nhuận.\n", nam);
    }

    return 0;
}