#include<bits/stdc++.h>

using namespace std;

#define MAX 50
#define TRUE 1
#define FALSE 0

int G[MAX][MAX], n, u=1;

void Init (){
	FILE *fp;
	int i, j;
	fp = fopen("input_5.txt","r");
	if(fp==NULL){
		cout << "Khong mo duoc file";
		return;
	}
	fscanf(fp,"%d", &n);
	cout << endl << "So dinh do thi: " << n;
	cout << endl << "Ma tran ke cua do thi:";
	for(i=1;i<=n;i++){
		cout << endl;
		for(j=1;j<=n;j++){
			fscanf(fp,"%d", &G[i][j]);
//			cout << "\t" << G[i][j];
			printf("%-5d", G[i][j]);
		}
	}
	fclose(fp);
}

int Kiemtra(){
	int i, j, s, d=0;
	for(i=1;i<=n;i++){
		s=0;
		for(j=1;j<=n;j++)
			if(G[i][j]>0)
				s++;
		if(s%2!=0){
			d++;
			u=i;
		} 	
	}
//	cout <<endl<< d << endl << u << endl;
	if(d>2) return(FALSE);
	return(TRUE);
}

void DDEULER(){
	int v, x, top , dCE;
	int stack[MAX], CE[MAX];
	top=1;
	stack[top]=u;
	dCE=0;
	do{
		v=stack[top];
		x=1;
		while(x<=n && G[v][x]==0)
			x++;
		if(x>n){
			dCE++;
			CE[dCE]=v;
			top--;
		}
		else{
			top++;
			stack[top]=x;
			G[v][x]=0;
			G[x][v]=0;
		}
	} while(top!=0);
	cout << endl << "Co duong di Euler: ";
	for(x=dCE; x>0 ; x--)
		cout << "  " << CE[x];
		cout<<"\nDay la do thi nua Euler!";
}

int main(){
	Init();
	if(Kiemtra())
		DDEULER();
	else cout<<endl<< "Khong co duong di Euler";
	return 0;
}
