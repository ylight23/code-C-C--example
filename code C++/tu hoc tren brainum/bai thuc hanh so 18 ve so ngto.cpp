#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int a,b,i,flag;
	
	cout<<"Nhap 2 so a va b: ";
	cin>> a>> b;
	if(a<b &&a>0 &&b>0){
		for(int i=a;i<=b;i++){
			flag=1;
			for(int j=2;j<=sqrt(i);j++){ // dieu kien kiem tra so nguyen to
				
				if(i%j==0 ){
					flag=0;
					break;
				}
				if(i<2){
					flag=0;
					break;
				}			
			}
			if(flag==1&& i>=2){
			cout<<i<< "  ";
			}
		}
	}
	if(a<=0 && b<=0 || a<=0|| b<=0){
		cout<<"a,b la cac so duong.Nhap lai!"<<endl;
	}
	if(a>=b ){
	
		cout<<"a phai nho hon b.Nhap lai"<<endl;
	}
}
//Cach 2 su dung ham bool kiem tra chu thuat toan van nhu the thui :)))	
//bool ngto(int n){
//	if(n<2){
//		return false;
//	}
//	int i;
//	for(int i=2;i<sqrt(n);i++){
//		if(n%i==0){
//			return false;
//		}
//		
//	}
//	return true;
//}	
//int main(){
//	int a,b,i;
//	cout<<"Nhap a va b: ";
//	cin>>a>>b;
//	if(a>0 && b>0){
//		int i;
//		for(int i=a;i<=b;i++){
//		
//			if(ngto(i)==true){
//				cout<<i<< "  ";
//			}
//		}
//	}
//	else 
//		cout<<"a,b phai la cac so duong!";
//	return 0;	
//	
//}

