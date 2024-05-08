#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
#define E(x, i) x.HeSo[i]
struct DonThuc
{
    float HeSo;
    int SoMu;
};
typedef struct DonThuc DONTHUC;
struct DaThuc
{
    float HeSo[MAX];
    int SoMu;
};
typedef struct DaThuc DATHUC;

void KhoiTaoDaThucRong(DATHUC &);
void NhapDaThuc(DATHUC &);
void XuatDaThuc(DATHUC, char[]);


DATHUC TinhHieu2DaThuc(DATHUC, DATHUC);
DATHUC TinhTong2DaThuc(DATHUC, DATHUC);
////DATHUC TinhTich2DaThuc(DATHUC, DATHUC);
////DATHUC TinhThuong2DaThuc(DATHUC, DATHUC);
//DATHUC TinhDaThucDu(DATHUC, DATHUC);
//DATHUC TinhDaoHamCap1(DATHUC);
//DATHUC TinhDaoHamCapk(DATHUC);
float TinhGiaTri(DATHUC, float);
//float TimNghiemDaThucTrongDoanAB(float, float);

//DATHUC operator +(DATHUC, DATHUC);
//DATHUC operator -(DATHUC, DATHUC);
//DATHUC operator *(DATHUC, DATHUC);
//DATHUC operator /(DATHUC, DATHUC);


//DATHUC TinhDaoHamCap1(DATHUC);
//DATHUC TinhDaoHamCapk(DATHUC, int);
//float TinhDaoHamCapk(DATHUC, float);

// Dinh nghia ham
void KhoiTaoDaThucRong(DATHUC &dt)
{
    dt.SoMu = 0;
    for (int i = 0; i < MAX; i++)
        dt.HeSo[i] = 0;
}
void NhapDaThuc(DATHUC &dt)
{
    KhoiTaoDaThucRong(dt);
    do
    {
        printf("\nNhap bac da thuc: ");
        scanf("%d", &dt.SoMu);
        if(dt.SoMu < 1)
        {
            printf("\nSo bac cua da thuc phai >= 1. Xin kiem tra lai !");
        }
    }while(dt.SoMu < 1);

    for(int i = dt.SoMu; i >= 0; i--)
    {
        float temp;
        printf("\nNhap he so: ");
        scanf("%f", &temp);
        dt.HeSo[i] = temp;
    }
}

void XuatDaThuc(DATHUC dt)
{
    //printf("%s", thongbao);
    for(int i = dt.SoMu; i > 0; i--)
    {
        if (dt.HeSo[i] != 0)
        {
            printf("%8.3fx^%d + " , dt.HeSo[i], i);
        }
    }
    printf("%8.3f\n", dt.HeSo[0]);
}


// Bài 493: Tính t?ng 2 da th?c
DATHUC TinhTong2DaThuc(DATHUC a, DATHUC b)
{
    DATHUC ketqua;
    KhoiTaoDaThucRong(ketqua);

    // xét b?c da th?c k?t qu?
    // n?u b?c da th?c a l?n hon b?c da th?c b
    if(a.SoMu > b.SoMu)
    {
        ketqua.SoMu = a.SoMu;  // b?c da th?c k?t qu? là b?c da th?c a
    }
    else
    {
        ketqua.SoMu = b.SoMu;
    }
    // xét h? s? da th?c k?t qu?:
    for(int i = 0; i <= ketqua.SoMu; i++)
    {
        ketqua.HeSo[i] = a.HeSo[i] + b.HeSo[i];
    }
    return ketqua;
}
int main()
{
    DATHUC kq;
    DATHUC dt1, dt2;
    printf("Nhap da thuc 1: \n");
    NhapDaThuc(dt1);
    printf("\nDa thuc 1 la: ");
    XuatDaThuc(dt1);
	printf("\nNhap da thuc 2: \n");
    NhapDaThuc(dt2);
    printf("\nDa thuc 2 la: ");
    XuatDaThuc(dt2);
    printf("\nTong 2 da thuc: ");
    XuatDaThuc(TinhTong2DaThuc(dt1, dt2));
    //XuatDaThuc(TinhHieu2DaThuc(dt1, dt2), "Da thuc 1 - Da thuc 2 = ");
    //XuatDaThuc(TinhTich2DaThuc(dt1, dt2), "Da thuc 1 * Da thuc 2 = ");
    //XuatDaThuc(TinhThuong2DaThuc(dt1, dt2), "Da thuc 1 / Da thuc 2 = ");

    
  //  XuatDaThuc(TinhDaoHamCap1(dt1), "Dao ham cap 1 = ");

  //  getch();
    return 0;
}
