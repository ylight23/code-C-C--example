#include<iostream>
using namespace std;
class Lecturer{
	private:
		string major;
	public:
		void displayLecturerData(){
			cout<<"major= "<<major<endl;
		}
		friend void f1();	
};

