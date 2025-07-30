#include <stdio.h>

int main() {
    int soNguyen;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &soNguyen);
    if (soNguyen % 2 == 0) {
        printf("%d là số chẵn.\n", soNguyen);
    } else {
        printf("%d là số lẻ.\n", soNguyen);
    }
    return 0;
}