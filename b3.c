#include <stdio.h>

int main() {
    int so;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &so);
    if (so % 3 == 0 && so % 5 == 0) {
        printf("%d chia hết cho cả 3 và 5.\n", so);
    }
    else if (so % 3 == 0) {
        printf("%d chỉ chia hết cho 3.\n", so);
    }
    else if (so % 5 == 0) {
        printf("%d chỉ chia hết cho 5.\n", so);
    }
    else {
        printf("%d không chia hết cho 3 và cũng không chia hết cho 5.\n", so);
    }

    return 0;
}