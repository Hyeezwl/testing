#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H


class NgayThangNam
{
    public:
        NgayThangNam();
        virtual ~NgayThangNam();
        void Nhap();
        void Xuat();
        NgayThangNam NgayThangNamTiepTheo();

    protected:

    private:
        int iNgay = 1;
        int iThang = 1;
        int iNam = 2026;

#endif // NGAYTHANGNAM_H
