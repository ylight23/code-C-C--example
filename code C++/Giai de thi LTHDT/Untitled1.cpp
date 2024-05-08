#include<iostream>
using namespace std;

class EX{
	public:
		int a;
		void add(EX A){
			a=a+A.a;
		}
};
int main(){
	EX A,B;
	A.a=5;
	B.a=10;
//	B.add(A);
	cout<<B.a<<endl;
	A.a=10;
	B.add(A);
	cout<<B.a;
}
