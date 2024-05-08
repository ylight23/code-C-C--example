#include<iostream>
#include<iomanip>
using namespace std;

class HocVien{
	private:
		string name;
		double namsinh;
		double toan,ly,hoa;
	public:
		// static double gpa=(toan+ly+hoa)/3;
		HocVien(){
		}
		~HocVien(){
		}
		HocVien(string name, double namsinh, double toan, double ly, double ,double hoa){
			this->name=name;
			this->namsinh;
			this->toan=toan;
			this->hoa=hoa;
			this->ly=ly;
		}
		friend istream &operator>>(istream &is,HocVien &a){
			cout<<"Nhap ho ten: ";
			fflush(stdin);
			getline(is,a.name);
			cout<<"Nhap nam sinh: ";
			is>>a.namsinh;
			cout<<"Nhap diem toan: ";
			is>>a.toan;
			cout<<"Nhap diem ly: ";
			is>>a.ly;
			cout<<"Nhap diem hoa: ";
			is>>a.hoa;
			return is;
			
		}	
		friend ostream &operator<<(ostream &os, HocVien &a){
//			os<<left;
//			cout<<"Ho va ten"<<endl;
//			cout<<setw(10)<<"Nam sinh"<<setw(10)<<
			os<<left;
			os<<setw(15)<<"Ho ten"<<setw(15)<<"Nam sinh"<<setw(20)<<"Diem trung binh"<<setw(20)<<"Xep loai"<<setw(20)<<"Danh gia"<<setw(30)<<endl;
			os<<setw(15)<<a.name<<setw(15)<<a.namsinh<<setw(20)<<a.getgpa(dtb)<<setw(20)<<hang(gpa)<<setw(20)<<ranking()<<setw(30)<<endl;
			return os;
		}
	//	double getgpa(){
//			gpa= (toan+ly+hoa)/3;
//			return gpa;
//		}
		const char* hang(double gpa){
			double gpa=(toan+ly +hoa)/3;
			if(gpa>=8 && gpa <=10){
				return "Gioi";
			}
			else if(gpa>=5 && gpa<=7){
				return "Kha";
			}
			else (gpa <5 && gpa>=0){
				return "Trung binh yeu";
			}
		}
		const char *ranking(){
			double gpa=(toan+ly +hoa)/3;
			if(gpa>=7 && toan>=5 && ly>=5 && hoa>=5){
				return "Lam luan van";
			}
			else if(gpa<=7 && toan>=5 && ly>=5 && hoa >=5){
				return "Thi tot nghiep"
			}
			else if(toan<5 || ly<5 || hoa <5){
				return "Thi lai";
			}
		}
		double getgpa () const{
			gpa=(toan+ly+hoa)/3;
			return gpa;
		}
		void setgpa(double dtb){
			dtb=gpa;
		}
};
int main(){
	HocVien a;
	cin>>a;
	cout<<a;
}
