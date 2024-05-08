#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Queue{
	private:
		int front;//dau
		int rear;//duoi
		T* arr;//mang cac phan tu
		int size; //so luong;
	public:
		Queue(int n=10);		
		~Queue();	
		bool isFull();
		bool isEmpty();
		bool push(const T &);//them vao queue
		bool pop( T );//xoa queue	
		void display();
};
template<typename T>
Queue<T>::Queue(int size){
	if(size>0 || size <1000){
		this->size=size;
	}
	else
		this->size=10;
	front=0;
	rear=-1;
	arr= new T[size];	
	
}
template<typename T>
Queue<T>::~Queue(){
	delete[] arr;
}
template<typename T>
bool Queue<T>::isFull(){
	if(rear==size){
		cout<<"Queue is full"<<endl;
		return true;
	}
	return false;
}
template<typename T>
bool Queue<T>::isEmpty(){
	if(rear==-1){
		cout<<"Queue is empty"<<endl;
		return true;
	}
	return false;
}
template<typename T>
bool Queue<T>::push(const T &x){
	if(isFull()==true){
		return false;
	}
	rear++;
	arr[rear]=x;
	return true;
}
template<typename T>
bool Queue<T>::pop( T x){
	if(isEmpty()==true || front > rear){
		return false;
	}
	x= arr[front];
	front++;
	return true;
}
template<typename T>
void Queue<T>::display(){
	if(isEmpty()==true){
		cout<<"Queue is empty"<<endl;
		
	}
	else 
		for(int i=front;i<rear;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
}
int main(){
	Queue<int > queue;
	queue.display();
	for(int i=0;i<12;i++){
		if(!queue.isFull())
		queue.push(i);// them i phan tu vao cuoi i
		queue.display();
	}
	cout<<"----------------"<<endl;
	for(int i=0;i<12;i++){
		if(!queue.isEmpty())
		queue.pop(i);//lay i phan tu dau queue
		queue.display();
	}
//	Queue<int> a(10);
//	a.push(1);
//	a.push(2);
//	a.push(3);
//	a.push(4);
//	int tmp;
//	while(a.pop(tmp)){
//	
//		cout<<tmp<<" ";
//	}
}
