#include<iostream>
#include <bits/stdc++.h>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class Student{
	public:
		friend ostream& operator<<(ostream &, Student);
		friend istream& operator>>(istream &, Student&);
	private:
		int stuId;
		string name;
		double gpa;
};
ostream& operator<<(ostream& out, Student stu){
	out << stu.stuId << " " << stu.name << " " <<stu.gpa << endl;
	return out;
}
istream& operator>>(istream& in, Student& stu){
	in >> stu.stuId >> stu.name >> stu.gpa;
	return in;
}
int main(){
 	Student aStudent;
//	ofstream outFile;
//	outFile.open("Students2.txt");
//	cout << "Enter ID, name, and grade point average:" <<endl;
//	cout << "Enter end-of-file key combination to end:"<<endl;
//	while (cin >> aStudent){
//		outFile << aStudent << endl;
//	cout << "Enter ID, name, and grade point average" <<endl;
//	cout << "Enter end-of-file key combination to end ";
//	}
//	outFile.close();
//	
	
	ifstream inFile;
	inFile.open("Students2.txt");
	cout << endl << "Output from disk:" << endl;
	while(inFile >> aStudent){
	cout << "Student: " << aStudent;
	}
	inFile.close();

	return 0;
}
