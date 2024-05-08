
#include<bits/stdc++.h>
using namespace std;
template<typename T> 
class Stack{
	private:
		int size;
		int top;
		T *arr;
	public:
		Stack();
		~Stack();
		Stack(int n);
		void push(T x);//them vao stack
		T pop();
		bool isEmpty();
		bool isFull();
		void display();	
};
template<typename T> 
Stack<T>::Stack(){
	size=10; //do dai stack =10;
	top=0;//khoi tao gia tri ban dau =0
	arr= new T[10];
	
}
template<typename T> 
Stack<T>::Stack(int n){
	size=n;
	top=0;
	arr=new T[n];//khoi tao voi n phan tu
}
template<typename T> 
Stack<T>::~Stack(){
	size =0;
	top=0;
	delete arr;
}
template<typename T> 
void Stack<T>::push(T x){//them ptu vao cuoi
	if(!isFull()){
		arr[top]= x;
		top++;
	}
}
template<typename T> 
T Stack<T>::pop(){//lay phan tu o cuoi
	if(!isEmpty()){
		T temp;
		temp=arr[top-1];
		top--;
		return temp;
	}
	
}
template<typename T> 	
bool Stack<T>::isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}
template<typename T> 
bool Stack<T>::isFull(){
	if(top==size){
		return true;
	}
	return false;
}
template<typename T> 
void Stack<T>::display(){
	if(isEmpty()){
		cout<<"Stack is empty"<<endl;
	}
	else{
		for(int i=0;i<top;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	Stack<int> stack;
	stack.display();
	for(int i=0;i<12;i++){
		if(!stack.isFull()){
			stack.push(i);
			stack.display();
		}
	}
	cout<<"-------------------"<<endl;
	for(int i=0;i<12;i++){
		if(!stack.isEmpty()){
			stack.pop();
			stack.display();
		}
	}
	
}
