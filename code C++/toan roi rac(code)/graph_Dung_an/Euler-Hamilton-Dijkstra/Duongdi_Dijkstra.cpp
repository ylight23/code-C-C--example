#include<iostream>
using namespace std;
#define MAX 100
#define TRUE 1
#define FALSE 0
int n,s,z;
char chon;
int truoc[MAX],d[MAX], G[MAX][MAX];
int final[MAX];

void Init(){
	FILE *fp;
	int i,j;
	fp=fopen("input_2.txt", "r");
	fscanf(fp,"%d", &n);
	cout<<"\nSo dinh: "<<n;
	cout<<"\nMa tran trong so: ";
	for(int i=1;i<=n;i++){
		cout<<endl;
		for(int j=1;j<=n;j++){
			fscanf(fp, "%d", &G[i][j]);
			printf("%-5d", G[i][j]);
			if(G[i][j]==0){
				G[i][j]=32000;
			}
		}
	}
	fclose(fp);
}
void Result(){
	int i,j;
	cout<<"\nDuong di Dijsktra ngan nhat tu "<<s<<" den "<<z<<" la\n";
	cout<<" <="<<z;
	i=truoc[z];
	while(i!=s){
		cout<<" <="<<i;
		i=truoc[i];
	}
	cout<<" <="<<s;
	cout<<"\n Do dai duong di la: "<<d[z];
}
void Dijkstra(){
	int v,u,minp;
	cout<<"\n Tim duong di tu s= ";
	cin>>s;
	cout<<" den z= ";
	cin>>z;
	for(int v=1;v<=n;v++){
		d[v]=G[s][v];
		truoc[v]=s;
		final[v]=FALSE;
		
	}
	truoc[s]=0;
	d[s]=0;
	final[s]=TRUE;
	while(!final[z]){
		minp=32000;
		for(int v=1;v<=n;v++){
			if((!final[v]) && (minp>d[v])){
				u=v;
				minp=d[v];
			}
		}
		final[u]=TRUE;
		if(!final[z]){
			for(int v=1;v<=n;v++){
				if((!final[v]) && (d[u]+G[u][v]<d[v])){
					d[v]=d[u]+G[u][v];
					truoc[v]=u;
				}
			}
		}
	}
}
int main(){
	Init();
	Dijkstra();
	Result();
	
}
