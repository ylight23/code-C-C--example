#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
//NguyenTienTrung
void Khoitao(float a[], int n){
    for(int i =0; i <n; i++){
        a[i]=10+(rand()/(float) RAND_MAX) *90;
    }
}
bool kiemTra(float a, float b, float c){
    if(a+b >c && b+c >a && a+c >b){
        return true;
    }
    return false;
}
void in(float a[], int n){
    for( int i = 0; i <n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int m=j+1; m<n; m++){
                if(kiemTra(a[i],a[j],a[m])==true){
                    cout << a[i]<<","<<a[j]<<","<<a[m]<<endl;
                }
            }
        }
    }
}

int main(){
    int n;
    float a[10];
    cin >>n;
    Khoitao(a,n);
    for(int i=0; i <n; i++){
        cout << a[i] <<", " ;
    }
    cout <<endl;
    in(a,n); 
}
