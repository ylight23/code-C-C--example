#include<iostream>
#include<fstream> //khai bao thu vien nhap xuat du lieu
#include<string>
#include<iomanip>
using namespace std;
int main(){
	int stuId;
	string name;
	double gpa;
	const int COL_SZ = 10;
	ifstream inFile;//dat ten file
	inFile.open("Students.txt");
	
//	cin>>stuId;
//	fflush(stdin);
//	getline(cin,name);
//	cin>>gpa;
	if(!inFile.good()) //mo file
		cout << "File could not be opened" << endl;
	else{
		cout << left;
		cout << "Student records:" << endl;
		cout << setw(COL_SZ) << "ID" << setw(COL_SZ) << "Name" << setw(COL_SZ) << "Grade point average" <<endl;
		
		while(inFile >> stuId >> name >> gpa){
			char c;
			inFile>>stuId;
			inFile>>name;
			inFile>>gpa;	
			cout << setw(COL_SZ) << stuId << setw(COL_SZ) <<name <<setw(COL_SZ) << gpa << endl;
	}
	}
	inFile.close();//dong file
	return 0;
}
