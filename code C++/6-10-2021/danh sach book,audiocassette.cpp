	#include<iostream>
using namespace std;

class Publication{
	private:	
		string name;
		float price;
	public:	
		Publication(){
		}
		~Publication(){
		}
		virtual int isOversize(){
//			if(true){
//				cout<<"This is oversize()"<<endl;
//			}
//			else
//				cout<<"This is not oversize()"<<endl;
		}	
	
		virtual void nhap(){
			cout<<"Nhap ten san pham: ";
			fflush(stdin);
			getline(cin,name);
			cout<<"Nhap gia: ";
			cin>>price;
		}
		virtual void xuat(){
			cout<<"Ten san pham: "<<name<<endl;
			cout<<"Gia san pham: "<<price<<endl;
		}	
//		void swap(Publication &c, Publication &b){
//   			Publication temp = c;
//    		c = b;
//    		b = temp;
//    	}
//    	float getPrice(float price){
//			return price;
//		}
    	bool operator>(Publication &nv1){
	
			if(this->price>nv1.price){
				return true;
			}
			return false;	  
		}
		bool operator<(Publication &nv1){
			if(this->price<nv1.price){
				return true;
			}
			return false;	
		}		
//    	void sort(Publication arr[], int n){
//    		for(int i=0;i<n;i++){
//    			for(int j=i+1;j<n;j++){
//    				if(arr[i]>arr[j]){
//    					swap(arr[i], arr[j]);
//					}
//				}
//			}
//		}	

	
};
class Book: public Publication{
	private:
		int page;
	public:
		Book(){
		}
		~Book(){
		}
		void nhap(){
			Publication::nhap();
			cout<<"Nhap so trang: ";
			cin>>page;
		}
		void xuat(){
			Publication::xuat();
			cout<<"So trang cua sach: "<<page<<endl;
		}
//		float getPrice(){
//			Publication::getPrice(price);
//		}		
//		void sort(int arr,int n){
//			Publication::sort(arr,  n);
//		}
		int isOversize( ){
			if(this->page>=800){
				cout<<"\nThis book is oversize(>800)"<<endl;
			}
			else
				cout<<"This book is not oversize(<800)"<<endl;
		}
};
class Cassette: public Publication{
	private:
		float time;
	public:
		Cassette(){	
		}
		~Cassette(){
		}
		void nhap(){
			Publication::nhap();
			cout<<"Nhap thoi gian chay(min): ";
			cin>>time;
		}
		void xuat(){
			Publication::xuat();
			cout<<"Thoi gian chay : "<<time<<" (min)"<<endl;
		}
		int isOversize(){
			if(this->time>=90){
				cout<<"This cassette is oversize(>90)"<<endl;
			}
			else
				cout<<"This cassette is not oversize(<90)"<<endl;
		}
		
};
int main(){
	int n;	
	cout<<"Nhap so luong:";
	cin>>n;
	Publication**a= new Publication*[n];
	for(int i=0;i<n;i++){
		int ch=-1;
		Publication* newPub=NULL;
		while(ch<1 || ch>2){
			cout<<"\n1. Choose books.Press 1"<<endl;
			cout<<"\n2. Choose cassettes.Press 2\n"<<endl;
			cin>>ch;
		}
		if(ch==1){
			newPub= new Book();
			newPub->nhap();
		}
		else{
			newPub= new Cassette();
			newPub->nhap();
		}
		a[i]= newPub;
	}
	cout<<"--------------------"<<endl;
	for(int i=0;i<n;i++){
		
		a[i]->xuat();
		a[i]->isOversize();
		cout<<endl;
		
	}
	system("pause");
	return 0;
}
