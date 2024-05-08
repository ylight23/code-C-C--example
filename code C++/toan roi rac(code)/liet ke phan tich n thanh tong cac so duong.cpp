#include<iostream>
using namespace std;
int n,k,sum, a[100];
void xuat(int a[], int n){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void quay_lui(int i, int k, int sum){
	for(int j=k;j>=1;j--){ //chay nguoc lai j=1;j<=k;j++ 
		if(sum+j<=n){
			a[i]=j; //ghi nhan 1 j neu j thoa ma k>= j >=1
			sum+=j;// tinh tong cua cac phan tu j bao gom lap lai	
			if(sum==n){ //va j<=k va thoa man cac j co tong ==n can tim thi xuat
				xuat(a,n);
			}
			else
				quay_lui(i+1,j,sum);// tiep tuc xet truong hop tang i+1 lên và xét cá truong hop j trong trg hop i do
									// vi du trong i=3 ,xet truog hop j tu 3->1 thoa man tong sum
									//neu xong 1 truong hop tiep tuc i+1=4 va  chay j 4->1
			sum-=j;	//giam tong di neu quay lui buoc truoc( co tang thi phai giam) de quay lai vong for lai truong hop trc do
		}
	}	
}
int main(){
	cin>>n;
	quay_lui(1,n,0);//chay i=1 va sum=0
}
//neu rut gon code
// j=k;j>=1;j--
//	if(sum+j<=n)	
//		a[i]=j;
//		if(sum+j==n)
//			xuat()
//		else quay_lui(i+1,j,sum+j)

//-------------------------

//neu chay xuoi code
//	j=1;j<=k;j++
//	if(sum+j<=n)
//		a[i]=j
//		if(sum+j==n)
//			xuat()
//		else
//			quay_lui(i+1,j,sum+j)		
