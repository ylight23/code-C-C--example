#include<iostream>
using namespace std;
int b[100];
int n;
int ok;
void khoitao(){
    for(int i=0;i<n;i++){
        b[i]=0;
    }
}
int Sinh(){
    int i=n-1;
    while(b[i]==1 && i>=0){
        b[i]=0;
        --i;
    }
    if(i<0){
        ok=0;
        return 1;
    }
    else b[i]=1;
    return 0;
}
int main(){
    ok=1;
	cout<<"Nhap do dai n: ";
    cin>>n;
    //khoitao();
	while(ok==1){
        for(int i=0;i<n;i++){
            cout<<b[i];
        }
        cout<<endl;
        Sinh();
	}
    return 0;
}
