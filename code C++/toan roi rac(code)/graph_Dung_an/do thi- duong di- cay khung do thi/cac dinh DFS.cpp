#include<bits/stdc++.h>

using namespace std;
#include<fstream>
#define MAX 100
#define TRUE 1
#define FALSE 0

void Init (int G[][MAX], int *n){
	FILE *fp;
	fp = fopen("input1.txt","r");
	if(fp==NULL){
		cout << "Khong mo duoc file";
		return;
	}
	fscanf(fp,"%d", n);
	cout << endl << "So dinh do thi:" << *n;
	cout << endl << "Ma tran ke cua do thi:";
	for(int i=1;i<=*n;i++){
		cout << endl;
		for(int j=1;j<=*n;j++){
			fscanf(fp,"%d", &G[i][j]);
//			cout << "  " << G[i][j];
			printf("%-5d",G[i][j]);
		}
	}
}

void DFS(int G[][MAX], int n, int v, int chuaxet[]){
	cout << "	" << v;
	chuaxet[v]=FALSE;
	for(int u=1; u<=n; u++){
		if(G[v][u]>0 && chuaxet[u])
			DFS(G, n, u, chuaxet);
	}
}

int main(){
	int G[MAX][MAX], n, chuaxet[MAX];
	Init(G, &n);
	for(int i=1;i<=n;i++)
		chuaxet[i]=TRUE;
	cout << endl << endl;
	cout<<"Cac dinh theo DFS: ";
	for(int i=1;i<=n;i++)
		if(chuaxet[i])
			DFS(G, n, i, chuaxet);
	
	return 0;
}
