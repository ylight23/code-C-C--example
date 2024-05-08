#include<bits/stdc++.h>

using namespace std;
#include<fstream>
#define MAX 100 	
#define TRUE 1
#define FALSE 0

int CK[MAX][2], n,G[MAX][MAX],chuaxet[MAX],socanh, QUEUE[MAX];
void Init (){
	FILE *fp;
	fp = fopen("input1.txt","r");
	if(fp==NULL){
		cout << "Khong mo duoc file";
		return;
	}
	fscanf(fp,"%d",& n);
	cout << endl << "So dinh do thi:" << n;
	cout << endl << "Ma tran ke cua do thi:";
	for(int i=1;i<=n;i++){
		cout << endl;
		for(int j=1;j<=n;j++){
			fscanf(fp,"%d", &G[i][j]);
//			cout << "  " << G[i][j];
			printf("%-5d",G[i][j]);
		}
	}
	
	fclose(fp);
	for(int i=1;i<=n;i++){
		chuaxet[i]=true;
		
	}
}
void STREE_DFS(int i){
	int j;
	cout<<"\n";
	for(int j=1;j<=n;j++){
		if(chuaxet[j]&& G[i][j]){
			chuaxet[j]=false;
			socanh++;
			CK[socanh][1]=i;
			CK[socanh][2]=j;
			if(socanh==n-1)
			 return;
			STREE_DFS(j); 
		}
	}
}
void result(){
	for(int i=1;i<=socanh;i++){
		cout<<"\n Canh "<< i;
		for(int j=1;j<=2;j++){
			cout<<"   "<<CK[i][j];
		}
	}
}
void STREE_BFS(int u){
	int dauQ,cuoiQ, v,p;
	dauQ=1;cuoiQ=1;
	QUEUE[dauQ]=u;
	chuaxet[u]=false;
	while(dauQ<=cuoiQ){
		v=QUEUE[dauQ]; dauQ=dauQ+1;
		for(p=1;p<=n;p++){
			if(chuaxet[p] && G[v][p]){
				chuaxet[p]=false;
				socanh++;
				CK[socanh][1]=v;
				CK[socanh][2]=p;
				cuoiQ=cuoiQ +1;
				QUEUE[cuoiQ]=p;
				if(socanh==n-1)
				return;
			}
		}
	}
}
int main(){
	int i=1;
	Init();
	socanh=0;
	chuaxet[i]=false;
//	STREE_DFS(i);
	STREE_BFS(i);
	result();
	
}
