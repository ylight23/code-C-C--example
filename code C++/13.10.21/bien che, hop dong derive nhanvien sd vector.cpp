#include<string>
#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
class NhanVien{
	private:
		string hoten;
		double luong;
	public:
		void begin();
		void end();
		NhanVien(){
		}
		~NhanVien(){
		}
		NhanVien(string hoten, double luong){
			this->hoten=hoten;
			this->luong=luong;
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
		virtual double getLuong(){
			
			return luong;
		}

		virtual string getName(){
			return hoten;
		}
		virtual string tachten(string hoten){
			string ten;
			int i;
			for(int i=hoten.length()-1;i>=0;i--){
				if(hoten[i]= ' ')
					break;
			}
			for(int j=i+1;j<hoten.length();j++){
					ten+=hoten[i];
				}
			
			return ten;
		}
		bool operator > (  NhanVien &m){
			NhanVien n; 
        	if (n.getLuong()> m.getLuong())
           		return true;
            else
            	return false;
    	}
    	bool operator < ( NhanVien &m){
			NhanVien n; 
        	if (n.getLuong() < m.getLuong())
           		return true;
            else
            	return false;
    	}
		bool operator = (  NhanVien &m){
			NhanVien n; 
        	if (n.getLuong() == m.getLuong())
           		return true;
            else
            	return false;
    	}
    	bool operator != (  NhanVien &m){
			NhanVien n; 
        	if (n.getLuong() != m.getLuong())
           		return true;
            else
            	return false;
    	}
    	bool operator == ( NhanVien &m){
    		NhanVien n;
        	if (n.getLuong() ==m.getLuong())
           		return true;
            else
            	return false;
    	}
    	
		//bool operator(const NhanVien &)
		bool check(string s){
			if(this->hoten==s){
				return true;
			}
			return false;
		}
};
class BienChe: public NhanVien{
	private:
		double heso,phucap;
	public:
		BienChe(){
		}
		~BienChe(){
		}
		BienChe(string name,double luong,double heso,double phucap ): NhanVien(name, luong){
			this->heso=heso;
			this->phucap=phucap;
		}
		void nhap(){
			NhanVien::nhap();
			cout<<"Nhap he so co ban: ";
			cin>>heso;
			cout<<"Nhap phu cap: ";
			cin>>phucap;
		}
		void setLuong(double luong){
			
		}
		double getLuong(){
			return heso*400+phucap;	
		}	
		void xuat(){
			NhanVien::xuat();
			cout<<"He so:"<<heso<<endl;
			cout<<"Phu cap: "<<phucap<<endl;
			cout<<"Luong 1 thang bien che:"<<getLuong()<<endl;
		}
};
class HopDong: public NhanVien{
	private:
		int ngaynghi, thuong;
	public:
		HopDong(){
		}
		~HopDong(){
		}
		HopDong(string name,double luong,int ngaynghi ,int thuong ): NhanVien(name, luong){
			this->ngaynghi=ngaynghi;
			this->thuong=thuong;
		}
		void nhap(){
			NhanVien::nhap();
			cout<<"Nhap so ngay nghi: ";
			cin>>ngaynghi;
			cout<<"Nhap luong thuong them: ";
			cin>>thuong;
		}
		double getLuong(){
			return 300-(300*ngaynghi)/30 + thuong;	
		}
		void xuat(){
			NhanVien::xuat();
			cout<<"So ngay nghi: "<<ngaynghi<<endl;
			cout<<"Thuong them: "<<thuong<<endl;
			cout<<"Luong 1 thang hop dong: "<<getLuong()<<endl;
		}
//		string getName(){
//			NhanVien::getName();
//		}	
};

class QuanLi{
	public:
		void congvecto();
		void ThemNhanVien();
		void XuatNhanVien();
		void TimNhanVien();
		void SapXepNhanVienLg();
		void SapXepNhanVienT();
		int XoaNhanVien();
		//bool compare(NhanVien tmp1, NhanVien tmp2);
	private:
		vector<NhanVien*> NV_;
		vector<NhanVien*> BienChe_;
		vector<NhanVien*> HopDong_;
		
			
};

template<class NhanVien>
	vector<NhanVien*> operator+( vector<NhanVien *>& BienChe_, vector<NhanVien*> &HopDong_){
		vector<NhanVien*> NV_;
		NV_.reserve(BienChe_.size() + HopDong_.size()); //cong 2 vecto
		NV_.insert(NV_.end(),BienChe_.begin(),BienChe_.end()); //them vecto bienche_
		NV_.insert(NV_.end(),HopDong_.begin(),BienChe_.end()); //them vecto hopdong_
		return NV_;
}
void QuanLi::ThemNhanVien(){
	NhanVien * nhanvien;
	int choose;
	do{
		system("cls");
		cout<<"\n1.Them nhan vien bien che.";
		cout<<"\n2.Them nhan vien hop dong.";
		cout<<"\n3.Quay lai!"<<endl;
		cin>>choose;
		switch (choose){
			case 1:{
				nhanvien=new BienChe();
				nhanvien->nhap();
				BienChe_.push_back(nhanvien);
				
			}
				break;
			case 2:{
				nhanvien=new HopDong();
				nhanvien->nhap();
				HopDong_.push_back(nhanvien);
			}
				break;
			default:
				break;
		}
	} 
	while (choose!=3);
}
void QuanLi::XuatNhanVien() {
	int choose;
	do{
		system("cls");
		cout<<"\n1.Xuat nhan vien bien che.";
		cout<<"\n2.Xuat nhan vien hop dong.";
		cout<<"\n3.Quai Lai\n"<<endl;
		cout<<endl;
		cin>>choose;
		switch (choose){
			case 1:
				{
				system("cls");
				cout<<"\nDanh sach nhan vien bien che."<<endl;
				for(int i=0;i<BienChe_.size();i++)
				{
					BienChe_[i]->xuat();
				}
				system("pause");
			}
				break;
			case 2:
				{
				system("cls");
				cout<<"\nDanh sach nhan vien hop dong."<<endl;
				for(int i=0;i<HopDong_.size();i++)
				{
					HopDong_[i]->xuat();
				}
				system("pause");
			}
				break;
			default:
				break;
		}
	}
	while (choose!=3);
}
void QuanLi::TimNhanVien(){
	int choose;
	string s;
	do{
		system("cls");//quay lai chuong trinh truoc
		cout<<"\n1.Tim nhan vien bien che."<<endl;
		cout<<"\n2.Tim nhan vien hop dong."<<endl;
		cout<<"\n3.Quay lai."<<endl;
		cin>>choose;
		switch(choose){
			case 1:{	
				cout<<"Nhap ten nhan vien:";
				fflush(stdin);
				getline(cin,s);
				
				for(int i=0;i<BienChe_.size();i++){
					if(BienChe_[i]->check(s)){
						BienChe_[i]->xuat();
					}
					else
						cout<<"Not valid!\n";
				}
				system("pause");
			}
				break;
			case 2:{
				
				cout<<"Nhap ten nhan vien:";
				fflush(stdin);
				getline(cin,s);
				for(int i=0;i<HopDong_.size();i++){
					if(HopDong_[i]->check(s)){
						HopDong_[i]->xuat();
					}
					else
						cout<<"Not valid!\n";
				}
				system("pause");
			}
				break;
			default:
				break;
		}
	}
	while(choose!=3);
}
void QuanLi::SapXepNhanVienLg(){//da sua xong

	int choose;
	do {
		system("cls");//quay lai chuong trinh truoc(xoa man hinh)
		cout<<"\n1.Sap xep nhan vien bien che."<<endl;
		cout<<"\n2.Sap xep nhan vien hop dong."<<endl;
		cout<<"\n3.Quay lai."<<endl;
		cin>>choose;
		switch(choose){
			case 1:{ 
				for(int i=0;i<BienChe_.size();i++){
					for(int j=i+1;j<BienChe_.size();j++){
						//cout<<BienChe_[i]->getLuong() <<" "<<BienChe_[j]->getLuong()<<endl;
						if(BienChe_[i]->getLuong() > BienChe_[j]->getLuong()){
							swap(BienChe_[i],BienChe_[j]);
//							cout<<BienChe_[i]->getLuong() <<" "<<BienChe_[j]->getLuong();
						}		
					}
					BienChe_[i]->xuat();		
				}
				system("pause");
			}
			break;
			case 2:{
				for(int i=0;i<HopDong_.size();i++){
					for(int j=i+1;j<HopDong_.size();j++){
						if(HopDong_[i]->getLuong() > HopDong_[j]->getLuong()){
							swap(HopDong_[i],HopDong_[j]);
						}		
					}
					HopDong_[i]->xuat();		
				}
				system("pause");	
			}
			break;
			default:
				break;
		}
	}
	while(choose !=3);
}
void QuanLi::SapXepNhanVienT(){
	int choose;
	do {
		system("cls");//quay lai chuong trinh truoc(xoa man hinh)
		cout<<"\n1.Sap xep nhan vien bien che."<<endl;
		cout<<"\n2.Sap xep nhan vien hop dong."<<endl;
		cout<<"\n3.Quay lai."<<endl;
		cin>>choose;
		switch(choose){
			case 1:{
				for(int i=0;i<BienChe_.size();i++){
					for(int j=i+1;j<BienChe_.size();j++){
						string namei=BienChe_[i]->tachten(BienChe_[i]->getName());
						string namej=BienChe_[j]->tachten(BienChe_[j]->getName());
						//if(namei>namej) ==1){
							swap(BienChe_[i],BienChe_[j]);
						}
					}
				//	BienChe_[i]->xuat();	
				
				system("pause");
				break;
			}
			case 2:{
				for(int i=0;i<BienChe_.size();i++){
					for(int j=i+1;j<BienChe_.size();j++){
						if(BienChe_[i]->getName().compare(BienChe_[j]->getName()) ==1 ){ //sx theo bang chu cai a,b,c ==1
							swap(BienChe_[i],BienChe_[j]);
						}
					}
					BienChe_[i]->xuat();	
				}
				system("pause");
				break;
			}
			default:
				break;	
		}
	}
	while(choose!=3);
}
int QuanLi::XoaNhanVien(){ 
	int foundID=0;
	string s;
	system("cls");
    cout<<"Nhap ten nhan vien muon xoa: ";
	fflush(stdin);
    getline(cin,s);
	for(int i=0;i<BienChe_.size();i++){
		int vt;
		if(BienChe_[i]->getName()==s){
			foundID=1;
			vt=i;
			BienChe_.erase(BienChe_.begin()+vt);
			cout<<"Da xoa nhan vien "<<s<<" khoi danh sach"<<endl;
		}	
	}
	//system("pause");
	if(foundID==0){
			
		cout<<"Khong ton tai ten"<<endl;
		system("pause");
		return 0;
	}
	else
		system("pause");
		return 1;
}
void Menu(QuanLi quanlynhanvien){
	int choose;
	do{
		system("cls");
		cout<<"\n1.Them nhan vien.";
		cout<<"\n2.Xuat nhan Vien.";
		cout<<"\n3.Tim nhan vien.";
		cout<<"\n4.Sap xep nhan vien theo luong tang dan.";
		cout<<"\n5.Sap xep nhan vien theo ten.";
		cout<<"\n6.Xoa nhan vien.";
		cout<<"\n7.Thoat!"<<endl;
		
		cin>>choose;
		switch (choose){
		case 1:
			quanlynhanvien.ThemNhanVien();
			break;
		case 2:
			quanlynhanvien.XuatNhanVien();
			break;
		case 3:
			quanlynhanvien.TimNhanVien();
			break;
		case 4:
			quanlynhanvien.SapXepNhanVienLg();
			break;
		case 5:
			quanlynhanvien.SapXepNhanVienT();
			break;
		case 6:
			quanlynhanvien.XoaNhanVien();
			break;
		default:
			break;
		}
	} 
	while (choose!=7);
}
int main(){
	QuanLi quanlynhanvien;
	Menu(quanlynhanvien);
	system("pause");
	return 0;
}
