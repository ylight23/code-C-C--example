#include<iostream>
using namespace std;

class mtime{
	private:
		int h,m,s;
	public:
		mtime():h(0), m(0),s(0){
	
		}	
		mtime(int h_,int m_, int s_): h(h_), m(m_), s(s_){
			chuanhoa();
		}
		friend istream &operator >>(istream &is, mtime& a) {
			cout<<"Nhap gio: ";
			is>>a.h;
			cout<<"Nhap phut: ";
			is>>a.m;
			cout<<"Nhap giay: ";
			is>>a.s;
			a.chuanhoa();
		}
		friend ostream&operator<<(ostream &os,  mtime a){
			cout<<"gio-phut-giay: ";
			os<<a.h<<"-"<<a.m<<"-"<<a.s<<endl;
			a.chuanhoa();
		} 
		mtime operator+(mtime m1){
			mtime m2;
			m2.h=this->h+m1.h;
			m2.m=this->m+m1.m;
			m2.s=this->s+m1.s;
			chuanhoa();
			return m2;
		}
		void chuanhoa(){
			while(s>=60){
				s=s-60;
				m=m+1;
			}
			while(m>=60){
				m=m-60;
				h=h+1;
			}
			
		}
};
int main(){
//	mtime m1(1,65,77);
//	mtime m2(3,67,88);
//	mtime m3;
//	m3=m1+m2;
//	cout<<m3;
	mtime m1,m2,m3;
	cin>>m1;
	cout<<m1;
	cin>>m2;
	cout<<m2;
	m3=m1+m2;
	cout<<m3;
	
}
