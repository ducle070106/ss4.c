#include <stdio.h>

int main() {
    int so1, so2, so3;
    printf("Nhập vào 3 số nguyên (cách nhau bởi dấu cách): ");
    scanf("%d %d %d", &so1, &so2, &so3);
    if ((so3 > so1 && so3 < so2) || (so3 > so2 && so3 < so1)) {
        printf("Kết quả: %d nằm trong khoảng giữa %d và %d.\n", so3, so1, so2);
    } else {
        printf("Kết quả: %d KHÔNG nằm trong khoảng giữa %d và %d.\n", so3, so1, so2);
    }
    return 0;
}