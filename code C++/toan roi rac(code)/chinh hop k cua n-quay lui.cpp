#include<iostream>
//moi gia tri j cua 1 cau hinh day du k phan tu thi j1 se chay tu 1 den toi da (n-k+1) phan tu=> tiep theo j2 tu j1+1-> n-k+2 phan tu=> j3 tu j2+1->n-k+3 phantu
// vi du chinh hop 3 cua 5=> ;i1=1->j1=1(max j1<=3) ->a[1]=1(danh dau); i2=2;j2=a[1]+1=2 va max j2<=4 (danh dau);i3=3->j3=a[2]+1=a[3]=3 va maxj3<=4(danh dau)
							//du i1,i2,i3 ==k phan tu =>xuat
							//i1=1->j1=1(j<=3) va a[1]=1(danhdau);i2=2;j2=a[1]+1=a[2]=2(max j2<=4)(danhdau);i3=3->j3=a[2]+1=a[3]=3(trung lap)->quay lui b2 va i+1=3, j++ ->j=3=a[3]=4(va max j3<=5)	
using namespace std;			//=>du i1,i2,i3 ==k ptu-> xuat
int n,k, a[100],b[100];
void xuat(int a[], int k){
	for(int i=1;i<=k;i++){ //k<=n
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
//j se  tang them 1 neuphan tu danh dau bi trung va sd quay lui buoc truoc no va tang i+1=j+1 len 
void Try(int i, int a[], int n){
	for(int j=a[i-1]+1; j<=(n-k+i);j++){//dkien X(i-1) +1 <= X <= n-k+i //vi tri sau phu thuoc vi tri dau+1 va toi da giatri moi vi tri chay dc n-k+i gia tri khi j++ len
			a[i]=j;//danh dau khi khi xuat hien-> tang j++
			if(i==k){ //i chay du k phan tu thi xuat 
				xuat(a,k);//
			}
			else //neu trung quay lui  tang i+1 len va a[i]=j+1 vd 123, 124 a[3] =j+1=3+1=4
				Try(i+1,a,n);
	}
}
int main(){
	cin>>n>>k;
	Try(1,a,n);

}
