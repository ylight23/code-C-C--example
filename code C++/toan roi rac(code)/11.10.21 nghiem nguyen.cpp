#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int d[100000] ;
int a[100000];
int n ;
int b;

void printResult() { // ham dung de in mot cau hinh ra ngoai
    for(int i = 1 ; i <=n ; i++) {
        cout<<d[i]<<" " ;
    }
    cout<<endl ;
}

bool check(){
	int temp=0;
	for(int i=1; i <=n ;i++)
		temp+=(d[i]*a[i]);
	if(temp==b) return true;
	return false;
}

int dem=0;
void backtrack(int i ) { // ham quay lui
    for(int j = 0 ; j<=(b/a[1]) ; j++ ) { // xet cac kha nang cua j
        d[i] = j ; // ghi nhan mot gia tri cua j
        if(i==n ) { // neu cau hinh da du k phan tu
            if (check() == true){
            	printResult();
            	dem ++;
			}
        }
        else {
            backtrack(i+1) ; // quay lui
        }
    }
}


int main()
{
    cout<<"Nhan n va b: " ;
    cin>>n>>b ;
    for(int i=1;i<=n;i++){
    	cout << "Nhap mang a "<<i<<" : ";
		cin >> a[i];
	} 
	sort(a, a+n+1); 
	cout << endl;
	d[0]=0;
    backtrack(1) ;
    cout << " dem = " << dem << endl;
    return 0;
}
