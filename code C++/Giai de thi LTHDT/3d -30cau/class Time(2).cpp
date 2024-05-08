#include<iostream>
using namespace std;
#include <cstdlib>
 #include <cmath>
class Time{
	private:
		int gio;
		int phut;
		int giay;
	public:
		
		Time(): gio(0) ,phut(0), giay(0) { //khoi tao k tham so
			//gio=phut=giay=0;
			chuanhoa();
		}
		~Time(){
			
		}	
		Time(int h,int m, int s): gio(h), phut(m), giay(s){ //khoi tao co tham so
			
		}
		friend istream &operator >>(istream &is, Time &a){//nap chong toan tu cin
			cout<<"Nhap gio: ";
			is>>a.gio;
			cout<<"Nhap phut: ";
			is>>a.phut;
			cout<<"Nhap giay: ";
			is>>a.giay;
			a.chuanhoa();
			return is;
		}
		friend ostream &operator <<(ostream &os,  Time a){ // toan tu cout &os cho dong xuat luon dc cap nhat =>truyen tham chieu con Time a co the thanh const Time &a tranh de bi thay doi gia tri,k tao bien copy
			cout<<"Hien thi gio/phut/giay : ";
			os<<a.gio<<"/"<<a.phut<<"/"<<a.giay<<endl;
			a.chuanhoa();
			return os;
		}
		Time operator+( Time t2 ) {
			Time t1;
//			int h=t1.getHour()+t2.getHour();
//			int m=t1.getMinute()+t2.getMinute();
//			int s=t1.getSecond()+t2.getSecond();
//			return Time(h,ms,s);
			t1.gio=this->gio+t2.gio;
			t1.giay=this->giay+t2.giay;
			t1.phut=this->phut+t2.phut;
			return t1;
		}

		friend Time operator+(const Time &t1, const Time &t2){
			Time t3;
			t3.gio=t1.gio+t2.gio;
			t3.phut=t1.phut+t2.phut;
			t3.giay=t1.giay+t2.giay;
			return t3;
//			int h=t1.get_Hour()+t2.get_Hour();
//			int m=t1.get_Minute()+t2.get_Minute();
//			int s=t1.get_Second()+t2.get_Second();
//			return Time(h,m,s);
		}
		Time operator-(Time t2 ){ //phuong thuc 1 tham chieu
			Time t1;
			t1.gio=this->gio-t2.gio;
			t1.giay=this->giay-t2.giay;
			t1.phut=this->phut-t2.phut;
			return t1;
		}
		friend Time operator-(const Time &t1, const Time &t2){ //ham ban 2 tham chieu
			Time t3;
			t3.gio=t1.gio-t2.gio;
			t3.phut=t1.phut-t2.phut;
			t3.giay=t1.giay-t2.giay;
			return t3;
		}	
		void chuanhoa(){
			int s=giay;
			int m=phut;
			int h=gio;
			
			giay=s%60;
			m+=s/60;
			phut=m%60;
			gio=h+m/60;
		}
		Time operator ++(){ //tien to
			
			giay=giay+1;
//      		if(giay==60) {
//				giay=0;
//				phut=phut+1;
//			}
//      		if(phut==60){
//				phut=0;
//				gio=gio+1;
//			}
      	return *this;

		}
//		Time operator ++(int ){
//			giay=giay+1;
//      		if(giay==60) {
//				giay=0;
//				phut=phut+1;
//			}
//      		if(phut==60){
//				phut=0;
//				gio=gio+1;
//			}
//			return *this;
//		}
		Time operator ++(int a) { //hau to
			
			giay=giay+a; ////?!!!!!
      		if(giay>=60) {
				giay=giay-60;
				phut=phut+1;
			}
      		if(phut>=60){
				phut=phut-60;
				gio=gio+1;
			}
			//this->chuanhoa();
      	return *this;	
		}
		friend Time operator ++(const Time &t2){ //hau to
			Time t1;
//			t1.gio=t2.gio+a;
//			t1.phut=t2.phut+a;
//			t1.giay=t2.giay+a;
		//	t1.giay=t2.giay+a;
			
			return t1;
		}
	
};
int main(){
	Time a1(1,100,57);
	Time a2;
//	cout<<a1;
//	Time a2(1,2,5);
//	cout<<a2;
//	Time a3;
//	a3=a1+a2;
//	cout<<a3;
//	cout<<(a1+a2);
//	Time a1,a2,a3;
//	cin>>a1>>a2;
//	//cout<<a1;
//	a3=a1+a2;
//	cout<<a3;
	//++a1;
//	cout<<a1;
	
	//a1.operator ++();
//	cout<<a1;
	//a1++;
	a1.operator ++(3);
	cout<<a1;
	//++a1;
	//a1.operator ++(1);
	a1++;
	cout<<a1;
	a2=++a1;
//	cout<<a2;
}
//Phanso cong(Phanso a){
//	Phanso b;
//	b.tu=a.tu+x;
//	return b;
//}
