#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class HangHoa{
	protected:
		char ma[20];
		char ten[20];
		int soluong, dongia;
		double trigia;	
	public:
		HangHoa(){
		}
		~HangHoa();
		HangHoa(char ma,char ten,int soluong,int dongia,int trigia){
			this->ma[20]=ma;
			this->ten[20]=ten;
			this->soluong=soluong;
			this->dongia=dongia;
			this->trigia=trigia;
		}
		
		virtual void nhap(){
			
			cout<<"Nhap ma hang: ";
			cin>>ma;
			cout<<"Nhap ten hang: ";
			cin>>ten;
			cout<<"Nhap so luong hang ton kho: ";
			cin>>soluong;
			cout<<"Nhap don gia/hang: ";
			cin>>dongia;
	
		}
		virtual void xuat(){
			cout<<"Ten ma san pham: "<<ma<<endl;;
			cout<<"Ten san pham: "<<ten<<endl;
			cout<<"So hang con ton kho: "<<soluong<<endl;
			cout<<"Gia 1 san pham: "<<dongia<<endl;
			cout<<"Tri gia ton kho: "<<getTri()<<endl;
		}
		
		virtual double getTri(){
			return trigia;
		}
		bool check(char s[20]){
			if(this->ma==s){
				return true;
			}
			return false;
		}
		virtual char *getID(){
			return ma;
		}
};

class ThucPham:  public HangHoa{
	private:
		char ngaysx[20];
		char ngayhh[20];
		char nhacc[10];
	public:
		ThucPham(){
		}
		~ThucPham(){
		}
		ThucPham(char ma, char ten,int soluong, int dongia,double trigia, char ngaysx,char ngayhh, char nhacc):HangHoa(ma,ten,soluong,dongia,trigia){
			this->ngaysx[20]=ngaysx;
			this->ngayhh[20]=ngayhh;
			this->nhacc[10]=nhacc;
		}
		void nhap();
		void xuat();
		double getTri();
			
};
void ThucPham::nhap(){
	HangHoa::nhap();
	cout<<"Nhap ngay san xuat: ";
	cin>>ngaysx;
	cout<<"Nhap ngay het han: ";
	cin>>ngayhh;
	cout<<"Nhap hang cung cap: ";
	cin>>nhacc;
	
}
double ThucPham::getTri(){
	return soluong*dongia*(1+0,05);
}
void ThucPham::xuat(){
	HangHoa::xuat();
	cout<<"Ngay san xuat - het han: "<<ngaysx<<" - "<<ngayhh<<endl;
	cout<<"Nha cung cap: "<<nhacc<<endl;
	
}
class DienMay: public HangHoa{
	private:
		int baohanh;
		int congsuat;
		char loai[10];
	public:
		DienMay(){
		}
		~DienMay(){
		}
		DienMay(char ma, char ten,int soluong, int dongia,double trigia, int baohanh,int congsuat,char loai):HangHoa(ma,ten,soluong,dongia,trigia){
			this->baohanh=baohanh;
			this->congsuat=congsuat;
			this->loai[10]=loai;
		}
		void nhap();
		void xuat();
		double getTri();		
};
void DienMay::nhap(){
	HangHoa::nhap();
	cout<<"Nhap thoi gian bao hanh: ";
	cin>>baohanh;
	cout<<"Nhap cong suat may (W): ";
	cin>>congsuat;
	cout<<"Nhap chung loai: ";
	cin>>loai;
	
}
double DienMay::getTri(){
	return soluong*dongia*(1+0,1);
}
void DienMay::xuat(){
	HangHoa::xuat();
	cout<<"Thoi gian bao hanh: "<<baohanh<<endl;
	cout<<"Cong suat may: "<<congsuat<<endl;
	cout<<"Hang sang pham: "<<loai<<endl;
	
}
class MayMac: public HangHoa{
	private:
		char nhasx[20];
		char ngaynk[20];
	public:
		void nhap();
		void xuat();
		double getTri();
		MayMac(){
		}		
		~MayMac(){
		}
		MayMac(char ma, char ten,int soluong, int dongia,double trigia, char nhasx,char ngaynk):HangHoa(ma,ten,soluong,dongia,trigia){
			this->nhasx[20]=nhasx;
			this->ngaynk[20]=ngaynk;
			
		}
};
void MayMac::nhap(){
	HangHoa::nhap();
	cout<<"Nhap nha san xuat: ";
	cin>>nhasx;
	cout<<"Nhap ngay nhap kho: ";
	cin>>ngaynk;
}
double MayMac::getTri(){
	return soluong*dongia*(1+0,1);
}
void MayMac::xuat(){
	HangHoa::xuat();
	cout<<"Nha san xuat: "<<nhasx<<endl;
	cout<<"Ngay nhap kho: "<<ngaynk<<endl;
}
class QuanLi{
	private:
		vector<HangHoa*> hanghoa;
	public:
		void XuatSP();
		void SuaSP();
		int XoaSP();
		void ThemSP();
		void TonKhoMax();
};
void QuanLi::ThemSP(){
	HangHoa *hh;
	int ch;
	do{
		system("cls");
		cout<<"1.Nhap thuc pham"<<endl;
		cout<<"2.Nhap dien may"<<endl;
		cout<<"3.Nhap may mac"<<endl;
		cout<<"4.Thoat"<<endl;
		cout<<"Hay chon: ";
		cin>>ch;
		switch(ch){
			case 1:{
				hh= new ThucPham();
				hh->nhap();
				hanghoa.push_back(hh);
				break;
			}
			case 2:{
				hh=new DienMay();
				hh->nhap();
				hanghoa.push_back(hh);
				break;
			}
			case 3:{
				hh= new MayMac();
				hh->nhap();
				hanghoa.push_back(hh);
				break;
			}
			case 4:
				break;
		}
	}
	while(ch!=4);
}
void QuanLi::XuatSP(){
	system("cls");
	for(int i=0;i<hanghoa.size();i++){
		hanghoa[i]->xuat();
		cout<<"================="<<endl;
	}
	
}
void QuanLi::SuaSP(){
	int foundID=0;
	//sua theo ma hang
	char s[20];
	system("cls");
	cout<<"Nhap ma hang can sua:";
	cin>>s;
	for(int i=0;i<hanghoa.size();i++){
		if(strcmp(hanghoa[i]->getID(),s)==0){
			foundID=1;
			hanghoa[i]->xuat();
			cout<<"------------"<<endl;
			hanghoa[i]->nhap();
			cout<<"=============="<<endl;
			cout<<"Sau khi sua"<<endl;
			hanghoa[i]->xuat();
			
		}
	}
	if(foundID==1){
		cout<<"==========="<<endl;
		cout<<"Sua thanh cong!!!!"<<endl;
		system("pause");
	
	}
   	else{
   	cout<<"=========="<<endl;
		cout<<"Khong ton tai!!!! "<<endl;	
		system("pause");
	}	
}
int QuanLi::XoaSP(){
	char s[20];
	system("cls");
	cout<<"Nhap ma can xoa: ";
	cin>>s;
	int foundID=0;
	for(int i=0;i<hanghoa.size();i++){
		int vt;
		if(strcmp(hanghoa[i]->getID(),s)==0){
		//if(hanghoa[i]->getID().compare(s)==0){
		
			foundID=1;
			vt=i;
			cout<<"--------------------------------"<<endl;
			cout<<"Thong tin sp muon xoa"<<endl;
			hanghoa[i]->xuat();
			hanghoa.erase(hanghoa.begin()+vt);		
		}
	}
	if(foundID==0){
		cout<<"Khong ton tai"<<endl;
		system("pause");
		return 0;
	}
	else if(foundID==1)
		cout<<"Xoa thanh cong"<<endl;
		system("pause");
		return 1;	
	
}
void QuanLi::TonKhoMax(){
	int vt=0;
	double max;
	system("cls");
	cout<<"Hang hoa co gia tri ton kho lon nhat:"<<endl;
	for(int i=0;i<hanghoa.size();i++){
				
		if(max<hanghoa[i]->getTri()){
			max=hanghoa[i]->getTri();
			vt=i;
		}
	}
	hanghoa[vt]->xuat();
	system("pause");
}
void menu(QuanLi hang_hoa){
	int ch;
	do{
		system("cls");
		cout<<"1.Them hang hoa"<<endl;
		cout<<"2.Xuat hang hoa"<<endl;
		cout<<"3.Sua hang hoa "<<endl;
		cout<<"4.Xoa hang hoa"<<endl;
		cout<<"5.Tim gia tri ton kho max"<<endl;
		cout<<"6.Thoat"<<endl;
		cout<<"Moi chon: ";
		cin>>ch;
		switch(ch){
			case 1:{
				hang_hoa.ThemSP();
				break;
			}
			case 2:{
				hang_hoa.XuatSP();
				system("pause");
				break;
			}
			case 3:{
				hang_hoa.SuaSP();

				break;
			}
			case 4:{
				hang_hoa.XoaSP();
				break;
			}
			case 5:{
				hang_hoa.TonKhoMax();
				break;
			}
			default:
				break;
		}
	}
	while(ch!=6);
		
}

int main(){
	QuanLi a;
	menu(a);
	system("pause");
	return 0;
}
