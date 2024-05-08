#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream input("std.txt");
	if(input.fail()){
		cout<<"can not open"<<endl;
		return -1;
		
	}
	while(!input.eof()){
		int n;
		input>>n;
		cout<<n<<" ";
	}
	cout<<endl;
	input.close();	
	return 0;
}
