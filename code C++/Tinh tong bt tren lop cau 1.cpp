#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int x,n;
	float S,P;
	S=0;
	P=1;

	cout<< "Nhap x: ";
	cin>> x ;
	cout<<"Nhap n: ";
	cin>> n;
	for(int i=0;i<n; i++){
		for(int j=1;j<=i;j++){
			P=P+1;
			
		}
		S=S+ ((pow(x,i))/P);
		P=1;
	}
	cout<< "Tong :"<< S<<""<<endl;
	
	return 0;
}
