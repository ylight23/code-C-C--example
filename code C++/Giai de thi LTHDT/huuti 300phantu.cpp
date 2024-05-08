#include<iostream>
using namespace std;

class huuti	{
  
  	public:
		int ts,ms;
  		friend ostream &operator<<(ostream &os,huuti &ht);
  		friend istream &operator>>(istream &is,huuti &ht);
  		int operator==(huuti a);
  		int operator!=(huuti a);
  		int operator>(huuti a);
 	 	int operator<(huuti a);

};
// ??nh ngh?a toán t? chèn dòng
ostream &operator<<(ostream &os,huuti &ht){
    os<<ht.ts<<"/"<<ht.ms<<endl;
    return os;
}

// ??nh ngh?a toán t? trích dòng
istream &operator>>(istream &is,huuti &ht){
    cout<<"Nhap tu so: ";
    is>>ht.ts;
    cout<<"Nhap mau so: ";
    is>>ht.ms;
    return is;
}
int huuti::operator==(huuti a){
   	if(ts*a.ms==ms*a.ts)
     	return 1;
   	else
     	return 0;
}
// ??nh ngh?a toán t? so sánh khác
int huuti::operator!=(huuti a){
   	if(ts*a.ms!=ms*a.ts)
     	return 1;
   	else
     	return 0;
}

// ??nh ngh?a toán t? l?n h?n
int huuti::operator>(huuti a){
   	if(ts*a.ms>ms*a.ts)
     	return 1;
   	else
     	return 0;
}

// ??nh ngh?a toán t? nh? h?n
int huuti::operator<(huuti a){
   	if(ts*a.ms<ms*a.ts)
     	return 1;
   	else
     	return 0;
}

class daysohuuti{
	public:
		huuti ht[300];
		void sapxep();
		int timkiem(huuti a);
		void nhap();
		void xuat();
};
  //Dinh nghia cac ham thanh vien cua lop daysohuuti
void daysohuuti::sapxep(){
    int i,j;
    huuti t;
    for(i=0;i<299;i++)
    for(j=0;j<300;j++)
    if(ht[j]<ht[i]) {
	t=ht[j];
	ht[j]=ht[i];
	ht[i]=t;
	}
}

// Tìm ki?m s? h?u t?, n?u tìm th?y tr? l?i v? trí s? h?u t? trong dãy, không tìm th?y tr? v? giá tr? 0
int daysohuuti::timkiem(huuti a){
    int i;
    for(i=0;i<300;i++) {
    if(ht[i]==a)
	return 1;
    }
    return 0;
}
void daysohuuti::nhap(){
    int i;
    for(i=0;i<300;i++)   {
    cout<<"Nhap so huu ti thu"<<i;
    cin>>ht[i];
    if(ht[i].ms==0)
    	//system("pause");
    }
}
void daysohuuti::xuat(){
    int i;
    for(i=0;i<300;i++)
    cout<<ht[i];
}
int main(){
	huuti a[300];
//	cin>>a[0]>>a[1];
//	cout<<a[0]<<a[1];
	daysohuuti b;
	b.nhap();
	
	b.sapxep();
	b.xuat();
	
}

