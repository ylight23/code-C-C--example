#include<stdio.h> // tim ai huong luong cao nhat dung ham struct

int main() {
	struct nhanvien
	{
		char hoten[20];
		int luong;
	};
	struct nhanvien e[4] ={ "A", 10 ,"B" ,20, "C", 40 ,"D", 40};
	int i;
	int max,vitri;
	max = e[0].luong;
	vitri = 0;
	for(i=1;i<4; i++) 
	 if(max <=e[i].luong) {
	 	max = e[i].luong;
	 	vitri = i;
	 };
	 printf("= %s\n", e[vitri].hoten);
	 return 0;
	}

