#include<bits/stdc++.h>
#include<fstream>
using namespace std;

#define MAX 100
#define TRUE 1
#define FALSE 0

void Init (int G[][MAX], int *n, int *chuaxet){
	FILE *fp;
	int i, j;
	fp = fopen("input1.txt","r");
	if(fp==NULL){
		cout << "Khong mo duoc file";
		return;
	}
	fscanf(fp,"%d", n);
	cout << endl << "So dinh do thi:" << *n;
	cout << endl << "Ma tran ke cua do thi:";
	for(i=1;i<=*n;i++){
		cout << endl;
		for(j=1;j<=*n;j++){
			fscanf(fp,"%d", &G[i][j]);
//			cout << "  " << G[i][j];
			printf("%-5d",G[i][j]);
		}
	}
	for(i=1; i<=*n; i++)
		chuaxet[i]=0;
}

void BFS(int G[][MAX], int n, int i, int chuaxet[], int QUEUE[MAX]){
	int u, dauQ, cuoiQ, j;
	dauQ=1;
	cuoiQ=1;
	QUEUE[cuoiQ]=i;
	chuaxet[i] = FALSE;	
	// thiet lap hang doi voi dinh dau la i
	while(dauQ<=cuoiQ){
		u=QUEUE[dauQ];
		cout << "   "<<u;
		dauQ=dauQ+1;//duyet dinh dau hang doi
		for(j=1; j<=n ; j++){
			if(G[u][j]>0 && chuaxet[j]){
				cuoiQ=cuoiQ+1;
				QUEUE[cuoiQ]=j;
				chuaxet[j]=FALSE;
			}
		}
	}
}

int main(){
	int G[MAX][MAX], n, chuaxet[MAX], QUEUE[MAX], i;
	Init (G , &n, chuaxet);
	cout << endl << endl;
	for(i=1;i<=n;i++)
		chuaxet[i]=TRUE;
	cout<<"Cac dinh duyet theo BFS: ";
	for(i=1;i<=n;i++)
		if(chuaxet[i])
			BFS(G, n, i, chuaxet, QUEUE);
			
	return 0;
}
