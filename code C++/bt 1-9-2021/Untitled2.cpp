#include<iostream>
#include<conio.h>
using namespace std;
 
class nhanvien{
    public:
    	char tennhanvien[20];
    	void get(){
        	//cout<<"Nhap id cua nhan vien: ";
        	//cin>>idnhanvien;
        	cout<<"Nhap ten nhan vien: ";
       		cin>>tennhanvien;
        	//cout<<"Nhap chuc danh cua nhan vien: ";
        	//cin>>chucdanh;
    	}
};
class luong:public nhanvien{
    float lcoban,heso,lrong;
    public:
    	void get1(){             
        	cout<<"Nhap luong co ban: ";
        	cin>>lcoban;
       		cout<<"Nhap he so luong: ";
        	cin>>heso;
            
   		}
    	void calculate(){
        	lrong=lcoban*heso;
    	}
    	void display(){
        	cout<<tennhanvien<<"\t"<<lcoban<<"\t"<<heso<<"  \t"<<lrong<<"(trieu dong)"<<"\n";
   		}
};
 
int main(){
    int n;
    luong s[100];
    
    cout<<"Nhap so nhan vien: ";
    cin>>n;
    for(int i=0;i<n;i++){
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout<<"\nten  \tlcoban \theso \tlrong \n";
    for(int i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}
