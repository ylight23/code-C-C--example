#include<bits/stdc++.h>

using namespace std;

#define MAX 100
#define TRUE 1
#define FALSE 0

void Init (int G[][MAX], int *n, int *solt, int *chuaxet){
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
			cout << "\t" << G[i][j];
		}
	}
	for(i=1; i<=*n; i++)
		chuaxet[i]=0;
		
	*solt=0;
	fclose(fp);
}

void Result(int *chuaxet, int n, int solt){
	cout << endl << endl;
	if(solt == 1){
		cout << endl << "Do thi la lien thong";
		return;
	}
	for(int i=1; i<=solt; i++){
		cout << endl << "Thanh phan lien thong thu  "<<i;
		for(int j=1;j<=n;j++){
			if(chuaxet[j]==i)
				cout << "	"<<j;
		}
	}
}

void BFS(int G[][MAX], int n, int i, int *solt, int chuaxet[], int QUEUE[MAX]){
	int u, dauQ, cuoiQ, j;
	dauQ=1;
	cuoiQ=1;
	QUEUE[cuoiQ]=i;
	chuaxet[i] = *solt;	
	// thiet lap hang doi voi dinh dau la i
	while(dauQ<=cuoiQ){
		u=QUEUE[dauQ];
		cout << "  "<<u;
		dauQ=dauQ+1;//duyet dinh dau hang doi
		for(j=1; j<=n ; j++){
			if(G[u][j]==1 && chuaxet[j]==0){
				cuoiQ=cuoiQ+1;
				QUEUE[cuoiQ]=j;
				chuaxet[j]=*solt;
			}
		}
	}
}

void Lien_Thong(){
	int G[MAX][MAX], n, chuaxet[MAX], QUEUE[MAX], solt, i;
	Init(G, &n, &solt, chuaxet);
	cout << endl << endl;
	for(i=1;i<=n;i++)
		if(chuaxet[i]==0){
			solt = solt +1;
			BFS(G, n, i, &solt, chuaxet, QUEUE);
		}
		
	Result(chuaxet, n, solt);
}

int main(){
	Lien_Thong();
			
	return 0;
}
