#include <iostream>
 
using namespace std;
string hoten;
string tachten(string hoten){
    string ten;
    int i;
    for(i=hoten.length()-1;i>=0;i--)
        if(hoten[i]==' ') break;
    for(int j=i+1;j<hoten.length();j++)
        ten+=hoten[j];
    return ten;
}
string get_name(){
	return hoten;
}
int main(){
    int n;
    cout<<"Nhap so sinh vien:";
    cin>>n;
    cin.ignore();
    string *hoten= new string [n];
    for(int i=0;i<n;i++){
        cout<<"Nhap ho ten sinh vien "<<i+1<<": ";
        getline(cin,hoten[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(tachten(hoten[i])>tachten(hoten[j])){
                string tmp=hoten[i];
                hoten[i]=hoten[j];
                hoten[j]=tmp;
            }
        }
    }
    cout<<endl<<"Sau khi da sap xep theo ten:"<<endl;
    for(int i=0;i<n;i++)
        cout<<hoten[i]<<endl;
}
