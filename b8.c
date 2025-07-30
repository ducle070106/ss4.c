#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhập vào độ dài 3 cạnh (cách nhau bởi dấu cách): ");
    scanf("%f %f %f", &a, &b, &c);
    if ((a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Kết quả: Đây là 3 cạnh của một tam giác hợp lệ.\n");
    } else {
        printf("Kết quả: Đây không phải là 3 cạnh của một tam giác hợp lệ.\n");
    }
    return 0;
}