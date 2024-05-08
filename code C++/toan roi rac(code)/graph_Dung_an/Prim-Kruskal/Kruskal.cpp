#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;
#define MAX 50
#define TRUE 1
#define FALSE 0
int n,m, minl,correct;
int dau[500], cuoi[500], w[500];
int daut[50], cuoit[50], father[50];

void Init(){
	int i;
	FILE *fp;
	fp=fopen("input_1.txt", "r");
	fscanf(fp, "%d %d", &n, &m);
	cout<<"\nSo dinh do thi: "<<n;
	cout<<"\nSo canh do thi: "<<m;
	cout<<"\nDS ke do thi: ";
	for(int i=1;i<=m;i++){
		fscanf(fp,"%d%d%d", &dau[i], &cuoi[i], &w[i]);
		cout<<"\nCanh "<<i<<":"<<dau[i]<<" "<<cuoi[i]<<" "<<w[i];
	 
	}
	fclose(fp);
	
}
vooid Heap(int First, int Last){
	int i,j,k,t1,t2,t3;
	j=First;
	while(j=(Last/2)){
		if((2*j)<Last && w[2*j+1]<w[2*j])
			k=2*j+1;
		else
			k=2*j;
		if(w[k]<w[j]){
			t1=dau[j];
			t2=cuoi[j];
			t3=w[j];
			dau[j]=dau[k];
			cuoi[j]=cuoi[k];
			w[j]=w[k];
			dau[k]=t1;
			cuoi[k]=t2;
			w[k]=t3;
			j=k;
			
		}	
		else
			j=Last;
	}
}
int Find(int i){
	int tro=i;
	while(father[tro]>0)
		tro=father[tro];
		
}
