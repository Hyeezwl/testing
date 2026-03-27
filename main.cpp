#include "NgayThangNam.h"
#include <iostream>
using namespace std;

int main(){
    NgayThangNam HomNay, NgayMai;
    cout << "Ngay thang nam hom nay: "
    HomNay.Nhap();

    NgayMai = HomNay.NgayThangNamTiepTheo();

    cout << "Ngay thang nam tiep theo la: "
    cout << NgayMai.Xuat();

}
