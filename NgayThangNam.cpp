#include "NgayThangNam.h"

int NgayThangNam::SoNgayTrongThang() {
        if (iThang == 2) {
            // Kiem tra nam nhuan
            if ((iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0)) {
                return 29;
            }
            return 28;
        }
        if (iThang == 4 || iThang == 6 || iThang == 9 || iThang == 11) {
            return 30;
        }
        return 31;
    }
void NgayThangNam::Nhap(){
    cout << "Nhap ngay, thang, nam: "
    cin >> iNgay >> iThang >> iNam;
}
void NgayThangNam::Xuat(){
    cout << iNgay << "/" << iThang << "/" << iNam:
}
NgayThangNam NgayThangNam::NgayThangNamTiepTheo(){
    NgayThangNam ngayMai;
        NgayMai.iNgay = ngay;
        NgayMai.iThang = thang;
        NgayMai.iNam = nam;

        NgayMai.ingay++;
        if (NgayMai.iNgay > NgayMai.SoNgayTrongThang()) {
            NgayMai.iNgay = 1;
            NgayMai.iThang++;
            if (NgayMai.iThang > 12) {
                NgayMai.iThang = 1;
                NgayMai.iNam++;
            }
        }
        return NgayMai;
}
