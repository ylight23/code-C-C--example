#include<stdio.h>
#include<stdlib.h>
//Phan 1 khoi tao 1 NODE
//khoi tao struct
typedef struct node NODE; //nen' 
struct node{
	int key;
	node*next; // kieu du lieu la int / double/float/diem/ hocsinh....
};
NODE* create_node(int x) {  // khai bao node  ;truyen gia tri x de create
	NODE*n; //khai bao node n
	n=(NODE*)malloc (sizeof(NODE)); // cap phat bo nho kich co NODE // ep kieu NODE* neu ko se tra ve void*
	n ->key =x; // gan key =x 
	n ->next=NULL;
	return n; 
}
//Phan 2 them1 node vao cuoi DSLK 
//bang cach lay node cuoi tro toi node vua tao
NODE*find_end_node(NODE*head) { //tim node cuoi cung DSLK

	NODE*p=head; // gan p
	if(p==NULL)
	return NULL;
	while(p->next != NULL){
		p=p ->next;
	}
	return p;
}
void add_last(NODE* &head,NODE*n) {
	if(head==NULL){ // truong hop danh sach rong
		head=n;
		return;
	}
	NODE*p= find_end_node(head); // truong hop tim thay dia chi node cuoi cung
	p ->next =n;
}
//Phan 3 them 1 node vao dau DSLK
//tuong tu nhu cac them c=vao cuoi DSLK
void add_first_node(NODE* &head, NODE*n){ // them 1 node dau DSLK
	if(head==NULL){ //truong hop danh sach rong ko lam gi ca
		head=n;
		return;
	}
	n ->next=head; //gan node tiep theo la head //voi truong hop da tim thay dia chi node dau tien
	head=n; //gan head =n tro node dau tien la n
}
void output(NODE*head){ // xuat ra de xem dc
	NODE*p= head; //head luon dung dau //p la bien tam thoi
	while(p !=NULL){
		printf("%d\t", p->key);
		p=p->next;
	}
} 
////Phan 4 tim phan tu x trong DSLK
//NODE*find_node(NODE*head, int x){ 
//	NODE*p =head; //khoi tao p bat dau tu head
//	while(p !=NULL){ //cho vong lap while ko tro toi null
//		if(p->key ==x) // neu tim thay x tuc la key tro toi x can tim return p
//			return p;
//		p=p->next;	//tiep tuc duyet qua cac node con lai
//		}
//	return NULL; //neu ko tim thay key ->x	
//	
//}
int main(){
	NODE*head= NULL; //ko gan se la vung nho rac'
	NODE*n1= create_node(1);
	NODE*n2= create_node(2);
	NODE*n3= create_node(3);
	NODE*n4= create_node(4);
	add_last(head,n1); //bien head ko bao h thay doi // do do hay dung bien tam thoi p
	add_last(head,n2);
	add_last(head,n3);
	add_first_node(head,n4);
//	NODE*n5 = find_node(head,3); // tao node co gia tri la 3 cho trc
//	if(n5 != NULL){
//		printf("%d", n5->key);
//	}
//	else{
//		printf("not found !");
//	}
	output(head);
	return 1;
}
