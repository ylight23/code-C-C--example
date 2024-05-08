#include<iostream>
#include<string>
using namespace std;

class Nguoi{
	private:
		string hoten;
		double luong;
	public:
		Nguoi(){
		}
		~Nguoi(){
		}
		virtual void nhap(){
			cout<<"Nhap ten:";
			fflush(stdin);
			getline(cin,hoten);
		}
		virtual void xuat(){
			cout<<"Ho va ten:"<<hoten<<endl;
			//cout<<"Luong 1 thang: "<<luong<<endl;
		}
		virtual double setLuong(){
			
			return luong;
		}	
		bool operator >(Nguoi m){
			//Nguoi n;
			if(this->setLuong()>m.setLuong()){
				return true;
			}
			return false;
		}
		bool operator <(Nguoi m){
			
			if(this->setLuong()<m.setLuong()){
				return true;
			}
			return false;
		}
		friend bool operator>(Nguoi m,Nguoi n){
			
			if(m.setLuong()>n.setLuong()){
				return true;
			}
			return false;
		}
};
class BienChe: public Nguoi{
	private:
		double heso,phucap;
	public:
		BienChe(){
		}
		~BienChe(){
		}
		void nhap(){
			Nguoi::nhap();
			cout<<"Nhap he so co ban: ";
			cin>>heso;
			cout<<"Nhap phu cap: ";
			cin>>phucap;
		}
		double setLuong(){
			return heso*400+phucap;	
		}	
		void xuat(){
			Nguoi::xuat();
			cout<<"He so:"<<heso<<endl;
			cout<<"Phu cap: "<<phucap<<endl;
			cout<<"Luong 1 thang bien che:"<<setLuong()<<endl;
		}
		
};
class HopDong: public Nguoi{
	private:
		int ngaynghi, thuong;
	public:
		HopDong(){
		}
		~HopDong(){
		}
		void nhap(){
			Nguoi::nhap();
			cout<<"Nhap so ngay nghi: ";
			cin>>ngaynghi;
			cout<<"Nhap luong thuong them: ";
			cin>>thuong;
		}
		double setLuong(){
			return 300-(300*ngaynghi)/30 + thuong;
			
		}
		void xuat(){
			Nguoi::xuat();
			cout<<"So ngay nghi: "<<ngaynghi<<endl;
			cout<<"Thuong them: "<<thuong<<endl;
			cout<<"Luong 1 thang hop dong: "<<setLuong()<<endl;
		}	
};
int main(){
	int n;
	cout<<"Nhap so luong: ";
	cin>>n;
	Nguoi **a=new Nguoi*[n];
	for(int i=0;i<n;i++){
		int ch=-1;
		Nguoi *newNguoi=NULL;
		while(ch<1 ||ch>2){
			cout<<"1.Nhap bien che:"<<endl;
			cout<<"2.Nhap hop dong:"<<endl;
			cin>>ch;
		}
		if(ch==1){
			newNguoi= new BienChe();
			newNguoi->nhap();
		}
		else if(ch==2){
			newNguoi = new HopDong();
			newNguoi->nhap();
		} 
		a[i]= newNguoi;	
		
	}
	cout<<"----------------------"<<endl;
	for(int i=0;i<n;i++){
		a[i]->xuat();
		
	}
}
