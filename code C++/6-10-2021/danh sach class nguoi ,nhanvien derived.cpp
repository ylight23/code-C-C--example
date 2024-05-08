#include<iostream>
#include<string>
#define N 100
#include<algorithm>
#include<vector>
using namespace std;
class Nguoi{
	private:
		string name,day_month,country;
		int year;
	public:
		Nguoi(){
		}	
		~Nguoi(){
		}	
		Nguoi(string name, string dat_month, string country, int year){
        	this->name = name;
        	this->day_month = day_month;
        	this->country = country;
       		this->year = year;
   		}
		virtual void nhap(){
			fflush(stdin);
			cout<<"\nNhap ho ten: ";
			
			getline(cin,name);
			fflush(stdin);
			cout<<"Nhap ngay thang nam sinh dd/mm: ";
			
			getline(cin,day_month);
			fflush(stdin);
			cout<<"Nhap que quan: ";
			
			getline(cin,country);
			fflush(stdin);
			cout<<"Nhap nam sinh: ";
			
			cin>>year;
			
		}
		void xuat(){
			cout<<"Ho va ten: "<<name<<endl;
			cout<<"Ngay thang nam sinh(dd/mm): "<<day_month<<endl;
			cout<<"Nam sinh:"<<year<<endl;
			cout<<"Que quan: "<<country<<endl;
		}
//		bool operator<(Nguoi &obj){
//			if(this->year<obj.year){
//				return true;
//			}
//			return false;	
//		}
//		bool operator>(Nguoi &obj){
//			if(this->year>obj.year){
//				return true;
//			}
//			return false;
//		}
//		bool operator=(Nguoi &obj){
//			if(this->year=obj.year){
//				return true;
//			}
//			return false;
//		}
//		bool operator==(Nguoi &obj){
//			if(this->year=obj.year){
//				return true;
//			}
//			return false;
//		}
//		bool operator!=(Nguoi &obj){
//			if(this->year!=obj.year){
//				return true;
//			}
//			return false;
//		}
 		int operator>(const Nguoi &n){
        	Nguoi m;
        	if (m.year > n.year){
            	return 1;
        	}
        	else{
           		return 0;
        	}
    	}
		int get_year(){
			return year;
		}
		string get_name(){
			return name;
		}

};
class NhanVien: public Nguoi{
	private:
		double luong;
		string chucvu;
	public:
		NhanVien(){
		}
		NhanVien(string name,string day_month, string country , int year, double luong,string chucvu) : Nguoi(name ,day_month,country,year){
			this->luong = luong;
			this->chucvu=chucvu;
		}
		void nhap(){
			Nguoi::nhap();
			fflush(stdin);
			cout<<"Nhap tien luong: ";
		
			cin>>luong;
			fflush(stdin);
			cout<<"Nhap chuc vu: ";
			
			getline(cin,chucvu);
		}	
		void xuat(){
			Nguoi::xuat();
			cout<<"Chuc vu nhan vien: "<<chucvu<<endl;
			cout<<"Tien luong nhan vien: "<<luong<<endl;
			cout<<endl;
		}
		double get_luong(){
			return luong;
		}
//		int get_year(){
//			return year();
//		}
//		string get_name(){
//			return get_name();
//		}
		void swap(NhanVien &a,NhanVien &b){
			NhanVien tmp=a;
			a=b;
			b=tmp;
		}
		void sort(NhanVien arr[], int n){
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(arr[i]>arr[j]){
						swap(arr[i], arr[j]);
						
					}
				}
			}
		}
};
class QuanLi{
	NhanVien *a;
	int n;
	
	public:
		QuanLi(){
		}
		QuanLi(int n){
			this->n=n;
		}
		QuanLi( NhanVien *a){
			for(int i=0;i<sizeof(a);i++){
				this->a=a;
			}
		}
		void Nhap(){
			cout<<"Nhap so luong:";
			cin>>n;
			a=new NhanVien[n];
			for(int i=0;i<n;i++){
				a[i].nhap();
			}
		}
		void Xuat(){
			for(int i=0;i<n;i++){
				a[i].xuat();
			}
			cout<<endl;
		}
		void SXLuongT(){
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i].get_luong()> a[j].get_luong())
						swap(a[i],a[j]);
				}
			}
		}
		void SXLuongG(){
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i].get_luong()< a[j].get_luong())
						swap(a[i],a[j]);
				}
			}
		}
		void SXTuoi(){
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i].get_year()> a[j].get_year())
						swap(a[i],a[j]);
				}
			}
		}
		void InLuong(){
			int vt;
			int max=a[0].get_luong();
			for(int i=0;i<n;i++){
				if(max>a[i].get_luong());
					max= a[i].get_luong();
					vt=i;
			}
			a[vt].xuat();
		}
};

void menu(QuanLi nhanvien){
	int x;		
	//a=new NhanVien();	
	do{
		system("cls");
		cout<<"\t\t MENU"<<endl;
		cout<<"1.Sap xep danh sach luong tang dan.Press 1"<<endl;
		cout<<"2.Sap xep danh sach luong giam dan.Press 2"<<endl;
		cout<<"3.Sap xep danh sach tuoi tang dan.Press 3"<<endl;
		cout<<"4.In ra nhan vien co tien luong cao nhat.Press 4"<<endl;
		cout<<"5.Thoat!"<<endl;
		cout<<"Hay chon theo li tri cua ban !"<<endl;
		cin>>x;
		switch(x){
			case 1: {
				nhanvien.Nhap();
				nhanvien.SXLuongT();
				cout<<"------------------"<<endl;
				cout<<"\nSau sap xep:"<<endl;
				nhanvien.Xuat();
				system("pause");
			}
				break;
			case 2: {
				nhanvien.Nhap();
				nhanvien.SXLuongG();
				cout<<"--------------------"<<endl;
				cout<<"\nSau sap xep:"<<endl;
				nhanvien.Xuat();
				system("pause");
			}
				break;
			case 3: {
				nhanvien.Nhap();
				nhanvien.SXTuoi();
				cout<<"--------------------"<<endl;
				cout<<"\nSau sap xep:"<<endl;
				nhanvien.Xuat();
				system("pause");
			}
				break;
			case 4: {
				nhanvien.Nhap();
				cout<<"--------------------"<<endl;
				cout<<"\nNhan vien luong cao nhat:"<<endl;
				nhanvien.InLuong();
				system("pause");
			}
				break;
			default:
				break;	
		}
		
	}
	while(x!=5);
}

int main(){
	QuanLi nhanvien;
	menu(nhanvien);
	system("pause");
//	QuanLi NV(3);
//	NV.Nhap();
//	NV.SXTuoi();
//	cout<<endl;
//	cout<<"\nDanh sach tang dan:"<<endl;
//	NV.Xuat();
	return 0;
}
