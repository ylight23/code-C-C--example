#include<iostream>
using namespace std;
# define N 100	
void nhap(int arr[] ,int &n){
	do{
		cout<<"Nhap so phan tu: ";
		cin>>n;
		if(n<0 || n>N){
			cout<<"Khong hop le.Nhap lai";;
		}
	}
	while(n<0 || n>N);
	for(int i=0;i<n;i++){
		cout<<"Nhap arr["<<i<<"]: ";
		cin>>arr[i];
	}
}
int  max(int arr[], int n){
	int Max= arr[0];
	for(int i=0; i<n;i++){
		if(arr[i] > Max){
			Max= arr[i] ;
		}
	}
	return Max;
}
	
	
void xuat( int arr[], int n) {
	for(int i=0; i< n; i++) {
			
		cout<<  arr[i] << "  ";
	}
}
int DemSoLan(int arr[], int n){

    int dem;
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(max == arr[i])
        {
            dem++;
        }
        else if(arr[i] > max)
        {
            max = arr[i];
            //dem = 1;
        }
    }
    return dem;
}
int FindByLoop(int arr[], int n){ // thuat toan tim chu so lon thu2 trong mang
    int firstMax, secondMax;
    if (arr[0] > arr[1]){
        firstMax = arr[0];
        secondMax = arr[1];
    }else{
        firstMax = arr[1];
        secondMax = arr[0];
    }
    for(int i = 2; i < n; i++){
        if(arr[i] >= firstMax){
            secondMax = firstMax;
            firstMax = arr[i];
        }else if (arr[i] > secondMax){
            secondMax = arr[i];
        }
    }
    return secondMax;
}
 
int main(){
	int arr[N];
	int n;
	//int idx;
	//int Max;
	nhap(arr,n);
	
	
	xuat(arr,n);
	int Max= max(arr,n);
	cout<<"\nSo lon nhat trong mang la: "<<Max<<"";
	int max= DemSoLan(arr,n);
	cout<<"\nSo luong phan tu xuat hien nhieu lan "<<max<<"";
	int Second=FindByLoop(arr, n);
	cout<<"\nSo lon thu 2 la "<< Second<<"";
    
	return 0;
	
}

