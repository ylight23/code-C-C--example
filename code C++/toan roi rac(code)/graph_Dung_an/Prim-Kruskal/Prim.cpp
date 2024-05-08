#include<bits/stdc++.h>

using namespace std;

#define MAX 10000
#define TRUE 1
#define FALSE 0

int a[100][100];
int n, i, sc, w;
int chuaxet[100];
int cbt[100][3];

void Init(){
	FILE *fp;
	int i, j;
	fp = fopen("input_1.txt", "r");
	fscanf(fp, "%d", &n);
	cout << "So dinh: " << n << endl;
	cout << "Ma tran trong so: " << endl;
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++){
			fscanf(fp,"%d", &a[i][j]);
//			cout << " " << a[i][j];
			printf("%-5d", a[i][j]);
			if(a[i][j]==0  && i!=j)
				a[i][j]=MAX;
		}
		cout << endl;
	}
	fclose(fp);
}

void Result(){
	cout << endl<<"Duong di: " ;
	for(i=1;i<=sc;i++)
		cout << endl << " " << cbt[i][1];
		cout << " " << cbt[i][2];
}

void PRIM(){
	int i, j, k, top, min, l, t, u;
	int s[100];
	sc=0;// canh cua do thi cay 
	w=0;//do dai
	u=1;//dinh bat dau
	for(i=1; i<=n; i++)//khoi tao mang chuaxet TRUE - cac dinh chua di qua
		chuaxet[i]=TRUE;
	top=1;// khoi tao dinh top=1
	s[top]=u;//
	chuaxet[u]=FALSE;
	
//	cout << "Dung";
	while(sc<n-1){// do thi cay hoan chinh co n-1 canh
		min=MAX;
//		cout << "Dung";
		for(i=1; i<=top; i++){
			t=s[i];
			for(j=1; j<=n; j++){
				if(chuaxet[j] && a[t][j]<min){
					min=a[t][j];
					k=t;// k la dinh dau
					l=j;//l la dinh cuoi
				}
			}
		}
		sc++;// tang canh cua cay
		w=w+min;// gan lai do dai moi
		cbt[sc][1]=k;//luu lai dinh dau
		cbt[sc][2]=l;// luu lai dinh cuoi
		
		chuaxet[l]=FALSE;
		a[k][l]=MAX;//xoa canh da luu
		a[l][k]=MAX;//xoa canh da luu
		top++;//
		s[top]=l;
//		cout<< endl;
	}
}

int main(){
	Init();
	PRIM();
	cout<<"Do thi co cay khung la cac canh ngan nhat! "<<endl;
	cout<<endl<<"Do dai ngan nhat: " << w;
	for(i=1;i<=sc;i++)
		cout << endl << " " << cbt[i][1]<< " " << cbt [i][2];
	return 0;	
}
