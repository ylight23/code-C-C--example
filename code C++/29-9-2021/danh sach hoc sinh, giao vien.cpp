#include<iostream>
#include<string>
#define N 100 
using namespace std;

class Nguoi{
	private:
		string ht,ns,gt;
	public:
		void set(string ht,string ns,string gt);
		virtual void nhap() =0;
		virtual void xuat() ;	
};
void Nguoi::set(string ht ,string ns, string gt){
	this->ht=ht;
	this->ns=ns;
	this->gt=gt;
}
void Nguoi::nhap(){
	cout<<"\nNhap ho ten: ";
	fflush(stdin);
	getline(cin, ht);
	cout<<"Nhap nam sinh: ";
	getline(cin,ns);
	cout<<"Nhap gioi tinh: ";
	cin>>gt;
}
void Nguoi::xuat(){
	cout<<"\nHo va ten: "<<ht<<endl;
	cout<<"Nam sinh: "<<ns<<endl;
	cout<<"Gioi tinh: "<<gt<<endl;
	
}
class Student : virtual public Nguoi{
	protected:
		char rank[10];
		double dtb;
	public:
//		void set(){
//			Nguoi::set(ht,ns,gt);
//		}
		void nhap(){
			Nguoi::nhap(); //ghi de phuong thuc// tinh ke thua
			cout<<"Nhap diem trung binh: ";
			cin>>dtb;
			//cout<<"Nhap xep loai: ";
			//cin>>rank;
		}
		const char *ranking( double dtb){
			if(dtb <=4 && dtb>=0){
				return "Yeu";
			}
			if(dtb>=5 && dtb<=7){
				return "Kha";
			}
			else if(dtb>=8 && dtb<=10){
				return "Gioi";
			}
			else 
				return "Not valid";
		}
		
		void xuat(){
			//cout<<"Thong tin hoc sinh:"<<endl;
			Nguoi::xuat();
			cout<<"Diem trung binh: "<<dtb<<endl;
			cout<<"Xep loai: "<<ranking(dtb)<<endl;
			//&ranking;	
		}
	
};
class Teacher: virtual public Nguoi{
	protected:
		double heso;
		
	public:
//		void set(){
//			Nguoi::set();
//		}
		void nhap(){
			Nguoi::nhap();
			cout<<"Nhap he so luong:";
			cin>>heso;
		}
		void xuat(){
			Nguoi::xuat();
			cout<<"Tong luong thang: "<<heso*30<<"trieu dong"<<endl;
		}
};
int main(){
	int n;
	Student a[N];
	Teacher b[N];
	cout<<"\nNhap so hoc sinh: ";
	cin>>n;
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	cout<<"-------------------------"<<endl;
	for(int i=0;i<n;i++){	
		a[i].xuat();
	}
	cout<<"\nNhap so giao vien: ";
	cin>>n;
	for(int i=0;i<n;i++){
		b[i].nhap();
	}
	cout<<"-------------------------"<<endl;
	for(int i=0;i<n;i++){	
		b[i].xuat();
	}
	
}
