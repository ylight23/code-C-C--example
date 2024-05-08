#include<iostream>
#include<stdio.h>
#define N 100	
using namespace std;
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
int  max(int arr[], int n){// tim phan tu lon nhat 
	int Max= arr[0];
	for(int i=0; i<n;i++){
		if(arr[i] > Max){
			Max= arr[i] ;
		}
	}
	return Max;
}
void sort(int arr[], int n){//sap xep  tang dan
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
}	
	
void xuat( int arr[], int n) {// ham  xuat
	for(int i=0; i< n; i++) {
			
		cout<<  arr[i] << "  ";
	}
}
int DemSoLan(int arr[], int n){ //dem phan tu xuat hien nhieu nhat

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
    }
	else{
        firstMax = arr[1];
        secondMax = arr[0];
    }
    for(int i = 2; i < n; i++){
        if(arr[i] >= firstMax){
            secondMax = firstMax;
            firstMax = arr[i];
        }
		else if (arr[i] > secondMax){
            secondMax = arr[i];
        }
    }
    return secondMax;
}
//void timdaycontang(int arr[], int n){
//	int dem;
//	printf("Day con tang dai nhat la: ");
//	for(int i=0;i<n-1;i++){
//		dem=0;
//		while(arr[i]<arr[i+1]){
//			if(arr[i]<arr[i+1]){
//				printf("%d ", arr[i]);
//			}
//			else
//				printf("%d ",arr[i+1]);
//				dem++;
//				i++;
//		}
//		//printf("\n");
//	}
//	cout<<endl;
//}
//void timdaycontang(int arr[], int n){
//	int dem;
//	printf("Day con tang dai nhat la: ");
//	for(int i=0;i<n;i++){
//		int m=arr[0];
//		if(m<arr[i]){
//			cout<<arr[i]<<" ";
//			m=arr[i];
//		}
//		if(m>arr[i] && arr[i]<arr[i+1]){
//			cout<<arr[i]<<" ";
//			m=arr[i];
//		}
//		if(m>arr[i]){
//			m=arr[i];
//		}
//	}
//	cout<<endl;
//}
//void timdaycontang(int arr[], int n){
//	
//	for(int i=0;i<n-1;i++){
//		int t=arr[i];
//		int j;
//		for(int j=i+1;j<=n;j++){
//			if(t<arr[j]){
//				t=arr[j];
//				printf("%d ", t);
//				
//			}
//			else 
//			 	break;
//		}
//		i=j;
//		printf("\n");
//	}
//}
void kiemtrasolanxuathien(int arr[], int n,int x){
	int demsolan=0;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			demsolan++;
		}
	}
	cout<<"So lan xuat hien: "<<demsolan<<endl;
}
int main(){
	int arr[N];
	int n;
	
	int x;
	nhap(arr,n);
	
	//sort(arr,n);
	xuat(arr,n);
	int Max= max(arr,n);
	cout<<"\nSo lon nhat trong mang la: "<<Max<<"";
	int max= DemSoLan(arr,n);
	cout<<"\nSo luong phan tu xuat hien nhieu lan "<<max<<"";
	int Second=FindByLoop(arr, n);
	cout<<"\nSo lon thu 2 la "<< Second<<""<<endl;
    timdaycontang(arr,n);
    cout<<"Nhap so x can kiem tra: ";
    cin>>x;
    kiemtrasolanxuathien(arr,n,x);
	return 0;
	
}
