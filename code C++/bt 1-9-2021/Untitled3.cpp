#include<iostream>
#include<math.h>
using namespace std;

class DaGiac{
	private:
		//float height, width;
	public:
		void set();
		float areaCir(float );
		float areaRec(float ,float);
		float areaTri(float ,float );
		bool compare(float ,float ,float ,float, float );
};
//void DaGiac::set(float &r){
//	cout<<"Nhap du lieu ban kinh cua hinh tron: ";
//	cin>>r;
//}
//void DaGiac::set(float &a, float &b){
//	cout<<"Nhap du lieu chieu dai, chieu rong cua hinh chu nhat: ";
//	cin>>a>>b;
//}
//void DaGiac::set(float &c, float &d){
//	cout<<"Nhap du lieu chieu cao ,day cua hinh tam giac: ";
//	cin>>c>>d;
//}
float DaGiac::areaCir(float r){
	
	return (r*r*3.14);
}
float DaGiac::areaRec(float a, float b){
	
	return (a*b);
}
float DaGiac::areaTri(float c, float d ){

	return ((c*d)/2);
}
bool DaGiac::compare(float r, float a, float b, float c,float d){
	float max=areaCir(r);
	if(max <areaRec(a,b) ){
		max=areaRec(a,b);
	}
	if(max < areaTri(c,d) ){
		max= areaTri(c,d);
	}
	cout<<max;
}

int main(){
	DaGiac i;
	float r,a,b,c,d;
	cout<<"Nhap du lieu ban kinh cua hinh tron: ";
	cin>>r;
	cout<<"Nhap du lieu chieu dai, chieu rong cua hinh chu nhat: ";
	cin>>a>>b;
	cout<<"Nhap du lieu chieu cao ,day cua hinh tam giac: ";
	cin>>c>>d;
	cout<<"Dien tich hinh tron: "<<i.areaCir(r);
	cout<<"\nDien tich hinh chu nhat: "<<i.areaRec(a,b);
	cout<<"\nDien tich hinh tam giac: "<<i.areaTri(c,d);
	cout<<"\nDien tich lon nhat la: ";
	i.compare(r,a,b,c,d);	
	return 0;	
}
