#include<iostream>
#include<string>
using namespace std;
 
class nhanvien{
    private:
    	string tennhanvien;
    	float lcoban,heso,lrong;
    public:
    	void get();
    	void display();
    	void calculate();
    	float getlrong(); //truy xuat thuoc tinh lrong
    	static int compare(nhanvien nhanvien[], int );

};

void nhanvien::get(){
	cout<<"Nhap ten nhan vien: ";
//	cin>>tennhanvien;
	fflush(stdin);
	getline(cin, tennhanvien);
      
	cout<<"Nhap luong co ban: ";
	cin>>lcoban;
	cout<<"Nhap he so luong: ";
	cin>>heso;
    cout<<endl;
}
void nhanvien:: calculate(){
	lrong=lcoban*heso;
}
void nhanvien::display(){
	
	cout<<"\nHo va ten:"<<this->tennhanvien<<endl;
	cout<<"Luong co ban: "<<this->lcoban<<endl;
	cout<<"He so luong: "<<this->heso<<endl;;
	cout<<"Luong nhan duoc: "<<this->lrong<<endl;
	
}
float nhanvien::getlrong(){
	return lrong;
}

bool operator<(nhanvien &nv1,nhanvien &nv2){
	
	if(nv1.getlrong()<nv2.getlrong()){
		return true;
	}
	return false;	  
}
bool operator>(nhanvien &nv1,nhanvien &nv2){
	
	if(nv1.getlrong()>nv2.getlrong()){
		return true;
	}
	return false;	  
}
bool operator<=(nhanvien &nv1, nhanvien &nv2){
	
	if(nv1.getlrong()<=nv2.getlrong()){
		return true;
	}
	return false;	  
}
bool operator>=(nhanvien &nv1, nhanvien &nv2){
	
	if(nv1.getlrong()>=nv2.getlrong()){
		return true;
	}
	return false;	  
}
bool operator==(nhanvien &nv1, nhanvien &nv2){
	if(nv1.getlrong()==nv2.getlrong()){
		return true;
	}
	return false;
	  
}
    
int main(){
    int i,n;
    nhanvien s[100];
    
    cout<<"Nhap so nhan vien: ";
    cin>>n;
    //cin.ignore(n);
    for(int i=0;i<n;i++){
        s[i].get();
        //s[i].get1();
        s[i].calculate();
    }
   
    for(int i=0;i<n;i++){
        s[i].display();
    }
    
    cout<<"\nNguoi huong muc luong nho nhat trong cong ty: ";
    
    float min=s[0].getlrong();
    for(int i=1; i<n; i++){
    	if(s[i].getlrong()< min){
    		min=s[i].getlrong();
		}
	}
	cout<<min;
    return 0;
}
