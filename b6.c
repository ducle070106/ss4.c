#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi;
    int so_dien_tieu_thu;
    double tong_tien_dien = 0.0;
    printf("Nhập chỉ số công tơ điện đầu tháng: ");
    scanf("%d", &chi_so_cu);
    printf("Nhập chỉ số công tơ điện cuối tháng: ");
    scanf("%d", &chi_so_moi);
    if (chi_so_moi < chi_so_cu) {
        printf("Lỗi: Chỉ số mới không thể nhỏ hơn chỉ số cũ.\n");
        return 1;
    }
    so_dien_tieu_thu = chi_so_moi - chi_so_cu;
    if (so_dien_tieu_thu <= 0) {
        tong_tien_dien = 0;
    } else if (so_dien_tieu_thu < 50) {
        tong_tien_dien = so_dien_tieu_thu * 10000;
    } else if (so_dien_tieu_thu < 100) {
        tong_tien_dien = (50 * 10000) + ((so_dien_tieu_thu - 50) * 15000);
    } else if (so_dien_tieu_thu < 150) {
        tong_tien_dien = (50 * 10000) + (50 * 15000) + ((so_dien_tieu_thu - 100) * 20000);
    } else if (so_dien_tieu_thu < 200) {
        tong_tien_dien = (50 * 10000) + (50 * 15000) + (50 * 20000) + ((so_dien_tieu_thu - 150) * 25000);
    } else {
        tong_tien_dien = (50 * 10000) + (50 * 15000) + (50 * 20000) + (50 * 25000) + ((so_dien_tieu_thu - 200) * 30000);
    }
    printf("\n--- HÓA ĐƠN TIỀN ĐIỆN ---\n");
    printf("Số điện tiêu thụ trong tháng: %d kWh\n", so_dien_tieu_thu);
    printf("Tổng số tiền phải trả: %.0f VND\n", tong_tien_dien);

    return 0;
}