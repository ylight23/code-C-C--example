#include<stdio.h>
#include<math.h>

struct PhanSo{
	int TuSo;
	int MauSo;
	
};
typedef struct PhanSo PHANSO;

void nhapPS(PHANSO &);
void xuatPS(PHANSO);
PHANSO rutgonPS(PHANSO);
PHANSO tongPS(PHANSO, PHANSO);
PHANSO tichPS(PHANSO, PHANSO);
bool kiemtraToiGian(PHANSO);

void nhapPS(PHANSO &ps){
	int tmp;
	printf("\nNhap tu so: ");
	scanf("%d", &tmp);
	ps.TuSo =tmp;
	do {
		printf("\nNhap mau so: ");
		scanf("%d", &tmp);
		ps.MauSo = tmp;
		if(ps.MauSo == 0){
			printf("\nMau khong hop le.Nhap lai");
			
		}
	}
	while(ps.MauSo==0);
	
}
void xuatPS(PHANSO ps){
	printf("\n%d/%d\n", ps.TuSo, ps.MauSo);
}
int timUCLN(int a, int b) {
    
    if(a < 0)
    {
        a = a * -1;
    }
    if(b < 0)
    {
        b = b * -1;
    }

    if(a == 0 && b !=0)
    {
        return b;
    }
    else if( b == 0 && a != 0 )
    {
        return a;
    }

        while(a != b)
        {
            if(a > b)
            {
                a = a - b;
            }
            else
                b = b - a;
        }
        return a;
}
PHANSO rutgonPS(PHANSO a){
	int UCLN= timUCLN(a.TuSo, a.TuSo);
	a.TuSo = a.TuSo/UCLN;
	a.MauSo = a.MauSo/UCLN;
	return a; 
}
PHANSO tongPS(PHANSO a, PHANSO b){
	PHANSO add;
	add.TuSo= a.TuSo* b.MauSo + a.MauSo*b.TuSo;
	add.MauSo= a.MauSo*b.MauSo;
	return add;
}
PHANSO tichPS(PHANSO a, PHANSO b){
	PHANSO multi;
	multi.TuSo = a.TuSo * b.TuSo;
	multi.MauSo = a.MauSo * b.MauSo;
	return multi;  
}
bool kiemtraToiGian(PHANSO a){
	PHANSO c = rutgonPS(a);
	if(c.TuSo == a.TuSo && c.MauSo == a.MauSo)
		return true;
	return false;	
}
int main(){
	
	
	PHANSO ps1, ps2;
	nhapPS(ps1);
	xuatPS(ps1);
	nhapPS(ps2);
	xuatPS(ps2);
	
	PHANSO a =rutgonPS(ps1);
	printf("\nPhan so sau khi rut gon: ");
	xuatPS(a);
	
	PHANSO b = rutgonPS(ps2);
	printf("\nPhan so sau khi rut gon: ");
	xuatPS(b);
	
	PHANSO add = tongPS(a,b);
	printf("\nTong 2 phan so: ");
	xuatPS(add);
	
	PHANSO multi = tichPS(a,b);
	printf("\nTich 2 phan so: ");
	xuatPS(multi);
	
	//bool check = kiemtraToiGian(a);
	//if(check)
	//	printf("\nPhan so a toi gian");
	//else
	//	printf("\nPhan so a chua toi gian");	
}
