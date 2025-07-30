#include <stdio.h>

int main() {
    int a, b, c, temp;
    printf("Nhập vào 3 số nguyên (cách nhau bởi dấu cách): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Các số theo thứ tự từ nhỏ đến lớn là: %d %d %d\n", a, b, c);

    return 0;
}