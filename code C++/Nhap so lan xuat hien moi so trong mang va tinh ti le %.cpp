#include<iostream>
#define MAX 100
using namespace std;

void nhap (int a[], int &n){

    do{
        cout << "\nNhap so phan tu: ";
        cin >> n;
        if(n <= 0 || n > MAX){
            cout<<"\nSo phan tu khong hop le. Xin kiem tra lai !" << endl;
        }
    }
	while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++){
        cout << endl << "Nhap a["<<i <<"]: " ;
        cin>> a[i];
    }
}

void xuat(int a[], int n){

    for(int i = 0; i < n; i++){
       cout<< a[i] << endl;
    }
}


void LietKeTanSuatXuatHien(int a[], int n){
    for(int i = 0; i < n; i++){
        int dem = 0;
        float sum;
        for(int j = 0; j < n; j++) {// j chay toi 0
        
            if(a[i] == a[j]){
            
                if(i <= j){         
                
                    dem++;    //j=i dem so phan tu
                }
                else
                {
                    break;    // bo quan phan tu bi trung
                }
            }
        }
        if(dem != 0){	
        	sum= (float)dem/n*100; // ep kieu float (dem)
            cout <<"\nGia tri "<<a[i]<<" co tan suat xuat hien la "<<dem<<" voi ti le phan tram la "<< sum<<" " << endl;
        }
    }
}
int main(){

    int n;
    int a[MAX];
    nhap(a, n);
    xuat(a, n);
    LietKeTanSuatXuatHien(a, n);
   
    return 0;
}


