#include<iostream>
#include<math.h>
using namespace std;
class TamGiac{
public:
    enum dangTamGiac {Thuong, Can, Deu, Vuong}; //enum cung giong nhu kieu ham dang int
private:
    float a,b,c;
public:
    TamGiac():a(3),b(4),c(5) {}
    TamGiac(int _a, int _b, int _c):a(_a),b(_b),c(_c){
        if (a+b<=c || b+c<=a || a+c<=b){
            a=3;
            b=4;
            c=5;
        }
    }
    float ChuVi() const{
        return (a+b+c);
    }
    float DienTich() const{
        float s=0.5*(a+b+c);
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    static dangTamGiac Dang(const TamGiac& tg)
    {
        float a=tg.a,b=tg.b,c=tg.c;
        if (a==b && b==c){
        	cout<<"Tam giac deu"<<endl;
        	return Deu;
		}
            
        if (a==b || b==c || a==c){
        	cout<<"Tam giac can"<<endl;
        	return Can;
		}
            
        if (c<b) swap(c,b);
        if (c<a) swap(c,a);
        if (a*a+b*b==c*c){
        	cout<<"Tam giac vuong"<<endl;
        	return Vuong;
		}
            
        else
        	cout<<"Tam giac thuong"<<endl;
            return Thuong;
    }
    friend istream& operator>>(istream & is, TamGiac &tg){
		cout<<"Nhap a:";
		is>>tg.a;
		cout<<"Nhap b: ";
		is>>tg.b;
		cout<<"Nhap c: ";
		is>>tg.c;
		//a.DateOfMonth(day);
		return is;
	}
	friend ostream& operator<<(ostream & os, const TamGiac &tg){
		os<<tg.a<<"-"<<tg.b<<"-"<<tg.c;
	//	a.DateOfMonth(a.day);
		return os;
	}

};
int main(){
	TamGiac tg;
	cin>>tg;
	cout<<tg<<endl;
	//cout<<tg.ChuVi()<<endl;
	//cout<<tg.DienTich()<<endl;
	//tg.showtamgiac();
	cout<<tg.Dang(tg)<<endl;
	cout<<TamGiac::Dang(tg);
}

