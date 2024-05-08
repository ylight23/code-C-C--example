#include<stdio.h>
#include<string.h>

int total=0;
int num=0;

struct Word{
	int count;
	char word[20];
	
};
void nhap(FILE*f, Word w[]){
	while(!feof(f) ){
		char s[20];
		fscanf(f, "%s", &s);
		total ++;
		int ok =1;
		for(int i=0; i<num;i++)
		if(strcmp(w[i].word,s)==0){
			ok=0;
			w[i].count++;
		}
		if(ok){
			strcpy(w[num].word,s);
			w[num].count=1;
			num++;
		}
	}
}
void xuat(Word w[]){
	FILE*fout= fopen("KQ.OUT","w");
	fprintf(fout, "%d",num);
	for(int i=0;i<num;i++)
		fprintf(fout,"%s\t%0.1f\n",w[i].word,(float)w[i].count/total);
	fclose(fout);	
}
int main() {
	FILE*f1= fopen("DATA1.IN", "r");
	Word w[100];
	nhap(f1,w);
	xuat(w);
	fclose(f1);
	return 0;
}
